#include "dialog_createconfig.h"
#include "ui_dialog_createconfig.h"
#include <QMessageBox>

Dialog_createConfig::Dialog_createConfig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_createConfig)
{
    ui->setupUi(this);

}

Dialog_createConfig::~Dialog_createConfig()
{
    delete ui;
}

void Dialog_createConfig::on_pb_Create_clicked()
{
    if(ui->le_ConfigName->text() != "")
    {
        emit sign_createConfig(ui->le_ConfigName->text());
        Dialog_createConfig::close();
    }
    else
    {
        QMessageBox::warning(this, "Внимание!", "Введите название конфигурации.", QMessageBox::Ok);
    }

}


void Dialog_createConfig::on_pb_Cancel_clicked()
{
    Dialog_createConfig::close();
}





