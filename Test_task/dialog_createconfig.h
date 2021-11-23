#ifndef DIALOG_CREATECONFIG_H
#define DIALOG_CREATECONFIG_H

#include <QDialog>
//#include <mainwindow.h>

namespace Ui {
class Dialog_createConfig;
}

class Dialog_createConfig : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_createConfig(QWidget *parent = nullptr);
    ~Dialog_createConfig();

private:
    Ui::Dialog_createConfig *ui;

signals:
    void sign_createConfig(QString); // Сигнал для создания новой конфигурации


private slots:
    void on_pb_Create_clicked();
    void on_pb_Cancel_clicked();
};

#endif // DIALOG_CREATECONFIG_H
