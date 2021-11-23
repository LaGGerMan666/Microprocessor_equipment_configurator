#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dialog_createconfig.h>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>
#include <QFile>
#include <QFileDialog>
#include <QStandardItem>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>

#include "include/rapidjson/rapidjson.h"
#include "include/rapidjson/document.h"
#include "include/rapidjson/stringbuffer.h"
#include "include/rapidjson/writer.h"

#include "equipment.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QJsonDocument jsonDoc;
    QJsonArray jsonDocArr;
    QJsonArray  jsonGIPOArr;
    QJsonParseError jsonDocErr;
    QString globalPath;
    QFile file;
    Equipment *equipment;
    bool isVisibleEl = false;
    bool isOpen = false;

private slots:
    void on_action_Create_triggered();

    void on_action_Open_triggered();

    void on_action_SaveAs_triggered();

    void on_action_Close_triggered();

    void on_Radio_Input_clicked();

    void on_Radio_Output_clicked();

    void on_pb_DellInterface_clicked();

    void on_pb_DellAllInterfaces_clicked();

    void on_pb_AddInterface_clicked();

    void on_pb_AddAllInterfaces_clicked();

    void on_lw_AvailableInterfaces_doubleClicked(const QModelIndex &index);

    void on_lw_SelectedInterfaces_doubleClicked(const QModelIndex &index);

    void on_pb_AddModeGIPO_clicked();

    void on_pb_DellModeGIPO_clicked();

private:
    Ui::MainWindow *ui;
    Dialog_createConfig *dialog_createconfig;

public slots:
    void slot_createConfig(QString config_name); // Слот для создания новой конфигурации

};
#endif // MAINWINDOW_H
