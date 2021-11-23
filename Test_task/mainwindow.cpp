#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Работа с диалоговым окном создания новой конфигурации
    dialog_createconfig = new Dialog_createConfig();
    connect(dialog_createconfig, &Dialog_createConfig::sign_createConfig, this, &MainWindow::slot_createConfig);

    // Скрываем элементы формы до момета создания или открытия конфигурации
    ui->gb_MainParam->setVisible(false);
    ui->gb_Interfaces->setVisible(false);
    ui->gb_GIPO->setVisible(false);
    ui->rb_VCC->setChecked(true);
    ui->rb_LowPotential->setChecked(true);
    ui->tw_ModesGIPO->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->le_CoreClockFreq->setValidator(new QIntValidator(0, 1000, nullptr));
    ui->le_PeripheralClockFreq->setValidator(new QIntValidator(0, 1000, nullptr));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Создание новой конфигурации
void MainWindow::on_action_Create_triggered()
{
    // Получение названия конфигурации от окна ввода
    dialog_createconfig->setModal(true);
    dialog_createconfig->exec();
}

// Открытие существующей конфигурации
void MainWindow::on_action_Open_triggered()
{
    globalPath = QFileDialog::getOpenFileName(nullptr, "Выберите файл", QDir::currentPath() + "/json_file","*.json");
    file.setFileName(globalPath);

    if(file.open(QIODevice::ReadOnly | QFile::Text))
    {
        jsonDoc = QJsonDocument::fromJson(QByteArray(file.readAll()), &jsonDocErr); // Чтение информации из файла в объект QJsonDocument
        file.close(); // На всякий случай закрываю файл


        // Раскрываем элементы формы при открытии конфигурации
        if(!isVisibleEl)
        {
            ui->gb_MainParam->setVisible(true);
            ui->gb_Interfaces->setVisible(true);
            ui->gb_GIPO->setVisible(true);
            //ui->lw_SelectedInterfaces->setCurrentRow(1);
            MainWindow::on_Radio_Input_clicked();
        }

        if(jsonDocErr.errorString().toInt() == QJsonParseError::NoError)
        {
            // Создание и описание экземпляра оборудования
            equipment = new Equipment(jsonDoc.object().value("Config_name").toString());
            equipment->Set_Series(jsonDoc.object().value("Series").toString());
            equipment->Set_Model(jsonDoc.object().value("Model").toString());
            equipment->Set_CoreClockFreq(jsonDoc.object().value("CoreClockFreq").toInt());
            equipment->Set_PeripheralClockFreq(jsonDoc.object().value("PeripheralClockFreq").toInt());

            // Чтение используемых интерфейсов
            jsonDocArr = QJsonValue(jsonDoc.object().value("Interfaces")).toArray();
            for (int i = 0; i < jsonDocArr.size(); i++) {
                equipment->Add_Interface(jsonDocArr.at(i).toString());
            }

            // Чтение настроек GIPO
            jsonGIPOArr = QJsonValue(jsonDoc.object().value("GIPO")).toArray();
            for (int i = 0; i < jsonGIPOArr.size(); i++){
                equipment->Add_GipoSetting(jsonGIPOArr.at(i).toObject().value("Num").toInt(), jsonGIPOArr.at(i).toObject().value("I/O").toString(), jsonGIPOArr.at(i).toObject().value("Settings").toString());
            }


            isOpen = true;

            // Вывод информации об оборудовании
            MainWindow::setWindowTitle("Конфигурация оборудования: " + equipment->Get_ConfigName());

            // Основные параметры
            ui->le_Series->setText(equipment->Get_Series());
            ui->le_Model->setText(equipment->Get_Model());
            ui->le_CoreClockFreq->setText(QString::number(equipment->Get_CoreClockFreq()));
            ui->le_PeripheralClockFreq->setText(QString::number(equipment->Get_PeripheralClockFreq()));

            // Используемые интерфейсы
            ui->lw_SelectedInterfaces->clear();
            for (int i = 0; i < equipment->Get_NumInterfaces(); i++) {
                ui->lw_SelectedInterfaces->addItem(equipment->Get_InterfaceName(i));
            }
            ui->lw_SelectedInterfaces->setCurrentRow(0);
            ui->lw_AvailableInterfaces->setCurrentRow(0);

            // Настройки GIPO
            ui->tw_ModesGIPO->setRowCount(equipment->Get_NumPorts());
            for (int i = 0; i < ui->tw_ModesGIPO->rowCount(); i++){
                QStringList setting = equipment->Get_GipoSetting(i);
                for (int j = 0; j < ui->tw_ModesGIPO->columnCount(); j++){
                    QTableWidgetItem *item = new QTableWidgetItem(setting.at(j));
                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tw_ModesGIPO->setItem(i,j,item);
                }
            }
            ui->tw_ModesGIPO->selectRow(0);
        }
        else
        {
            QMessageBox::warning(this, "Внимание!", "Ошибка чтения Json формата. Проверьте файл и повторите попытку.", QMessageBox::Ok);
        }
    }
    else
    {
        QMessageBox::information(this,"Информация.", "Невозможно открыть файл для чтения.", QMessageBox::Ok);
    }
}

// Сохранение конфигурации
void MainWindow::on_action_SaveAs_triggered()
{
    equipment->Set_Series(ui->le_Series->text());
    equipment->Set_Model(ui->le_Model->text());
    equipment->Set_CoreClockFreq(ui->le_CoreClockFreq->text().toInt());
    equipment->Set_PeripheralClockFreq(ui->le_PeripheralClockFreq->text().toInt());

    globalPath = QFileDialog::getSaveFileName(nullptr, "Сохранить файл", QDir::currentPath() + "/json_file", "*.json");
    file.setFileName(globalPath);

    if(file.open(QIODevice::WriteOnly))
    {
        if(!isOpen)
        {
            // Создание и описание экземпляра оборудования
            equipment->Set_Series(ui->le_Series->text());
            equipment->Set_Model(ui->le_Model->text());
            equipment->Set_CoreClockFreq(ui->le_CoreClockFreq->text().toInt());
            equipment->Set_PeripheralClockFreq(ui->le_PeripheralClockFreq->text().toInt());
            isOpen = false;
        }
        QVariantMap saveJsonDoc;
        saveJsonDoc.insert("Config_name", equipment->Get_ConfigName());
        saveJsonDoc.insert("Series", equipment->Get_Series());
        saveJsonDoc.insert("Model", equipment->Get_Model());
        saveJsonDoc.insert("CoreClockFreq",equipment->Get_CoreClockFreq());
        saveJsonDoc.insert("PeripheralClockFreq", equipment->Get_PeripheralClockFreq());
        QString strInterfaces;
        for (int i = 0; i < equipment->Get_NumInterfaces(); i++) {
            if(i == 0)
            {
                strInterfaces = equipment->Get_InterfaceName(i);
            }
            else
            {
                strInterfaces += "," + equipment->Get_InterfaceName(i);
            }
        }
        saveJsonDoc.insert("Interfaces", QJsonArray::fromStringList(QStringList(strInterfaces.split(","))));
        QJsonArray arrGIPO;
        QJsonObject objSettings;
        for (int i = 0; i < equipment->Get_NumPorts(); i++){
            objSettings["Num"] = equipment->Get_GipoSetting(i).at(0).toInt();
            objSettings["I/O"] = equipment->Get_GipoSetting(i).at(1);
            objSettings["Settings"] = equipment->Get_GipoSetting(i).at(2);
            arrGIPO.append(objSettings);
        }
        saveJsonDoc.insert("GIPO", arrGIPO);
        QJsonObject jsonObj = QJsonObject::fromVariantMap(saveJsonDoc);
        jsonDoc.setObject(jsonObj);
        file.write(jsonDoc.toJson());
        file.close();
    }
    else
    {
        QMessageBox::information(this,"Информация.", "Невозможно открыть файл для записи.", QMessageBox::Ok);
    }
}

// Завершить работу программы
void MainWindow::on_action_Close_triggered()
{
    QApplication::quit();
}

// Реализация слота создания новой конфигурации
void MainWindow::slot_createConfig(QString config_name)
{
    // Получение названия проекта от модального диалогового окна
    QString winTitle = "Конфигурация оборудования: " + config_name;
    MainWindow::setWindowTitle(winTitle);

    equipment = new Equipment(config_name);

    // Раскрываем элементы формы при создании новой конфигурации
    isVisibleEl = true;
    ui->gb_MainParam->setVisible(true);
    ui->gb_Interfaces->setVisible(true);
    ui->gb_GIPO->setVisible(true);
    MainWindow::on_Radio_Input_clicked();
    ui->le_Series->clear();
    ui->le_Model->clear();
    ui->le_CoreClockFreq->clear();
    ui->le_PeripheralClockFreq->clear();
    ui->tw_ModesGIPO->clearContents();
    ui->lw_SelectedInterfaces->clear();
    ui->lw_AvailableInterfaces->setCurrentRow(0);

}

// Работа RadioButtons
void MainWindow::on_Radio_Input_clicked()
{
    ui->frame_RadioOutput->setEnabled(false);
    ui->frame_RadioInput->setEnabled(true);
    ui->Radio_Input->setChecked(true);
    ui->Radio_Output->setChecked(false);
}
void MainWindow::on_Radio_Output_clicked()
{
    ui->frame_RadioOutput->setEnabled(true);
    ui->frame_RadioInput->setEnabled(false);
    ui->Radio_Input->setChecked(false);
    ui->Radio_Output->setChecked(true);
}


// Удаление выбранного интерфейса
void MainWindow::on_pb_DellInterface_clicked()
{
    if(equipment->Get_NumInterfaces() == 0){
        QMessageBox::information(this,"Информация.","Список интерфейсов пуст.",QMessageBox::Ok);
    }
    else
    {
        QListWidgetItem *selectedItem  = ui->lw_SelectedInterfaces->currentItem();
        int num_selectedRow = ui->lw_SelectedInterfaces->row(selectedItem);
        bool check_search = equipment->Del_Interface(selectedItem->text());
        if(check_search)
        {
            ui->lw_SelectedInterfaces->clear();
            for (int i = 0; i < equipment->Get_NumInterfaces(); i++) {
                ui->lw_SelectedInterfaces->addItem(equipment->Get_InterfaceName(i));
            }

            if(num_selectedRow == equipment->Get_NumInterfaces())
            {
                ui->lw_SelectedInterfaces->setCurrentRow(equipment->Get_NumInterfaces() - 1);
            }
            else
            {
                ui->lw_SelectedInterfaces->setCurrentRow(num_selectedRow);
            }
        }
        else
        {
            QMessageBox::warning(this, "Информация.", "Ошибка! Удаляемого интерфейса нет в списке!", QMessageBox::Ok);
        }
    }
}

// Отчистить список выбранных интерфейсов
void MainWindow::on_pb_DellAllInterfaces_clicked()
{
    while(equipment->Get_NumInterfaces() > 0) {
        QString interface_name = equipment->Get_InterfaceName(0);
        equipment->Del_Interface(interface_name);
    }
    ui->lw_SelectedInterfaces->clear();
}

// Дублирую удаление на двойной клик
void MainWindow::on_lw_SelectedInterfaces_doubleClicked(const QModelIndex &index)
{
    QListWidgetItem *selectedItem = ui->lw_SelectedInterfaces->item(index.row());
    int num_selectedRow = ui->lw_SelectedInterfaces->row(selectedItem);
    bool check_search = equipment->Del_Interface(selectedItem->text());
    if(check_search)
    {
        ui->lw_SelectedInterfaces->clear();
        for (int i = 0; i < equipment->Get_NumInterfaces(); i++) {
            ui->lw_SelectedInterfaces->addItem(equipment->Get_InterfaceName(i));
        }

        if(num_selectedRow == equipment->Get_NumInterfaces())
        {
            ui->lw_SelectedInterfaces->setCurrentRow(equipment->Get_NumInterfaces() - 1);
        }
        else
        {
            ui->lw_SelectedInterfaces->setCurrentRow(num_selectedRow);
        }
    }
    else
    {
        QMessageBox::warning(this, "Информация.", "Ошибка! Удаляемого интерфейса нет в списке!", QMessageBox::Ok);
    }
}

// Добавить интерфейс
void MainWindow::on_pb_AddInterface_clicked()
{
    QListWidgetItem *selectedItem = ui->lw_AvailableInterfaces->currentItem();
    bool check_search = equipment->Add_Interface(selectedItem->text());
    if(!check_search)
    {
        ui->lw_SelectedInterfaces->clear();
        for (int i = 0; i < equipment->Get_NumInterfaces(); i++) {
            ui->lw_SelectedInterfaces->addItem(equipment->Get_InterfaceName(i));
        }
        ui->lw_SelectedInterfaces->setCurrentRow(equipment->Get_NumInterfaces() - 1);
    }
    else
    {
        QMessageBox::information(this, "Информация.", "Интерфейс уже добавлен в конфигурацию.", QMessageBox::Ok);
    }
}

// Добавить все возможные интерфейсы
void MainWindow::on_pb_AddAllInterfaces_clicked()
{
    QListWidgetItem *selectedItem  = ui->lw_SelectedInterfaces->currentItem();
    int num_selectedRow = ui->lw_SelectedInterfaces->row(selectedItem);
    int num_items = ui->lw_AvailableInterfaces->count();
    for (int i = 0; i < num_items; i++){
        QListWidgetItem *item = ui->lw_AvailableInterfaces->item(i);
        bool check_search = equipment->Add_Interface(item->text());
        if(!check_search)
        {
            ui->lw_SelectedInterfaces->clear();
            for (int i = 0; i < equipment->Get_NumInterfaces(); i++) {
                ui->lw_SelectedInterfaces->addItem(equipment->Get_InterfaceName(i));
            }

            if(num_selectedRow == -1)
            {
                ui->lw_SelectedInterfaces->setCurrentRow(0);
            }
            else
            {
                ui->lw_SelectedInterfaces->setCurrentRow(num_selectedRow);
            }
        }
        else
        {
            continue;
        }
    }
}

// Дублирую добавление интерфейста на двойной клик
void MainWindow::on_lw_AvailableInterfaces_doubleClicked(const QModelIndex &index)
{
    QListWidgetItem *selectedItem = ui->lw_AvailableInterfaces->item(index.row());
    bool check_search = equipment->Add_Interface(selectedItem->text());
    if(!check_search)
    {
        ui->lw_SelectedInterfaces->clear();
        for (int i = 0; i < equipment->Get_NumInterfaces(); i++) {
            ui->lw_SelectedInterfaces->addItem(equipment->Get_InterfaceName(i));
        }
        ui->lw_SelectedInterfaces->setCurrentRow(equipment->Get_NumInterfaces() - 1);
    }
    else
    {
        QMessageBox::information(this,"Информация.", "Интерфейс уже добавлен в конфигурацию.", QMessageBox::Ok);
    }

}

// Реализация добавления настроек GIPO
void MainWindow::on_pb_AddModeGIPO_clicked()
{
    QStringList setting;
    bool search_num;
    QString mode;
    if(ui->Radio_Input->isChecked())
    {
        if(ui->rb_VCC->isChecked())
        {
            mode = ui->rb_VCC->text();
        }
        else if(ui->rb_GND->isChecked())
        {
            mode = ui->rb_GND->text();
        }
        else if(ui->rb_NULL->isChecked())
        {
            mode = ui->rb_NULL->text();
        }
        search_num = equipment->Add_GipoSetting(ui->sb_PortNum->text().toInt(), ui->Radio_Input->text(), mode);
        if(!search_num)
        {
            ui->tw_ModesGIPO->setRowCount(equipment->Get_NumPorts());
            for (int i = 0; i < ui->tw_ModesGIPO->rowCount(); i++){
                setting = equipment->Get_GipoSetting(i);
                for (int j = 0; j < ui->tw_ModesGIPO->columnCount(); j++){
                    QTableWidgetItem *item = new QTableWidgetItem(setting.at(j));
                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tw_ModesGIPO->setItem(i,j,item);
                }
            }
            ui->sb_PortNum->setValue(ui->sb_PortNum->text().toInt() + 1);
            ui->tw_ModesGIPO->selectRow(equipment->Get_NumPorts()-1);
        }
        else
        {
            QMessageBox::warning(this,"Внимание!", "Ошибка добавления записи. Конфигурация выбранного порта уже существует.", QMessageBox::Ok);
        }
    }
    else if(ui->Radio_Output->isChecked())
    {
        if(ui->rb_LowPotential->isChecked())
        {
            mode = ui->rb_LowPotential->text();
        }
        else if(ui->rb_HighPotential->isChecked())
        {
            mode = ui->rb_HighPotential->text();
        }
        search_num = equipment->Add_GipoSetting(ui->sb_PortNum->text().toInt(), ui->Radio_Output->text(), mode);
        if(!search_num)
        {
            ui->tw_ModesGIPO->setRowCount(equipment->Get_NumPorts());
            for (int i = 0; i < ui->tw_ModesGIPO->rowCount(); i++){
                setting = equipment->Get_GipoSetting(i);
                for (int j = 0; j < ui->tw_ModesGIPO->columnCount(); j++){
                    QTableWidgetItem *item = new QTableWidgetItem(setting.at(j));
                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tw_ModesGIPO->setItem(i,j,item);
                }
            }
            ui->sb_PortNum->setValue(ui->sb_PortNum->text().toInt() + 1);
            ui->tw_ModesGIPO->selectRow(equipment->Get_NumPorts()-1);
        }
        else
        {
            QMessageBox::warning(this,"Внимание!", "Ошибка добавления записи. Конфигурация выбранного порта уже существует.", QMessageBox::Ok);
        }
    }
}

// Реализация удаления настроек GIPO
void MainWindow::on_pb_DellModeGIPO_clicked()
{
    if(equipment->Get_NumPorts() != 0)
    {
        QStringList setting;
        int selected_row = ui->tw_ModesGIPO->currentRow();
        QTableWidgetItem *item = ui->tw_ModesGIPO->item(selected_row,0);
        bool check_search = equipment->Del_GipoSetting(item->text().toInt());
        if(check_search == true)
        {
            ui->tw_ModesGIPO->setRowCount(equipment->Get_NumPorts());
            for (int i = 0; i < ui->tw_ModesGIPO->rowCount(); i++){
                setting = equipment->Get_GipoSetting(i);
                for (int j = 0; j < ui->tw_ModesGIPO->columnCount(); j++){
                    QTableWidgetItem *item = new QTableWidgetItem(setting.at(j));
                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tw_ModesGIPO->setItem(i,j,item);
                }
            }
            if(selected_row == equipment->Get_NumPorts())
            {
                ui->tw_ModesGIPO->selectRow(equipment->Get_NumPorts()-1);
            }
            else
            {
                ui->tw_ModesGIPO->selectRow(selected_row);
            }
        }
        else
        {
            QMessageBox::warning(this,"Внимание!", "Ошибка удаления записи. Данной записи нет в списке или список настроек GIPO пуст.");
        }
    }
}

