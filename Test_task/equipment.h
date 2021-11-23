#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <QString>
#include <QVector>

class Equipment
{
    public:
        Equipment(QString config_name);
        QString Get_ConfigName();
        void Set_Series(QString dev_series);
        QString Get_Series();
        void Set_Model(QString dev_model);
        QString Get_Model();
        void Set_CoreClockFreq(int core_clock_freq);
        int Get_CoreClockFreq();
        void Set_PeripheralClockFreq(int peripheral_clock_freq);
        int Get_PeripheralClockFreq();
        bool Add_Interface(QString interface_name);
        bool Del_Interface(QString interface_name);
        QString Get_InterfaceName(int index);
        int Get_NumPorts();
        int Get_NumInterfaces();
        bool Add_GipoSetting(int number, QString io, QString setting);
        bool Del_GipoSetting(int number);
        QStringList Get_GipoSetting(int index);


    private:
        QString configuration_name;
        QString device_series;
        QString device_model;
        int core_clock_frequency;
        int peripheral_clock_frequency;
        QVector<QString>* interfaces = new QVector<QString>();
        QVector<QStringList> *gipo_Settings = new QVector<QStringList>();

};

#endif // EQUIPMENT_H
