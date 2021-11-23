#include "equipment.h"


Equipment::Equipment(QString config_name)
{
    configuration_name = config_name;
}

// Реализация метода для получения названия конфигурации
QString Equipment::Get_ConfigName(){
    return configuration_name;
}

// Реализация метода для установки серии устройства
void Equipment::Set_Series(QString dev_series){
    device_series = dev_series;
}

// Реализация метода для получения серии устройства
QString Equipment::Get_Series(){
    return device_series;
}

// Реализация метода для установки модели устройства
void Equipment::Set_Model(QString dev_model){
    device_model = dev_model;
}

// Реализация метода для получения модели устройства
QString Equipment::Get_Model(){
    return device_model;
}

// Реализация метода для установки частоты тактирования ядра
void Equipment::Set_CoreClockFreq(int core_clock_freq){
    core_clock_frequency = core_clock_freq;
}

// Реализация метода для получения частоты тактирования ядра
int Equipment::Get_CoreClockFreq(){
    return core_clock_frequency;
}

// Реализация метода для установки частоты тактирования периферийных устройств
void Equipment::Set_PeripheralClockFreq(int peripheral_clock_freq){
    peripheral_clock_frequency = peripheral_clock_freq;
}

// Реализация метода для получения частоты тактирования периферийных устройств
int Equipment::Get_PeripheralClockFreq(){
    return peripheral_clock_frequency;
}

// Реализация метода для добавления интерфейса в вектор интерфейсов абстрактного оборудования
bool Equipment::Add_Interface(QString interface_name){
    // Если интерфейса с именем "interface_name" еще нет,то false, иначе true (такой интерфейс уже есть)
    bool check_search = false;
    if(interfaces->size() == 0){
        interfaces->push_back(interface_name);
    }else{
        for(int i = 0; i < interfaces->size(); i++){
            if(interfaces->at(i).toLower() == interface_name.toLower()){
                check_search = true;
                break;
            }
        }
        if(check_search == false){
            interfaces->push_back(interface_name);
        }
    }
    return check_search;
}

// Реализация метода для удаления интерфейса в вектор интерфейсов абстрактного оборудования
bool Equipment::Del_Interface(QString interface_name){
    // Если интерфейса с именем "interface_name" нет, то false, иначе true (такой интерфейс уже есть)
    bool check_search = false;
    if(interfaces->size() != 0){
        for(int i = 0; i < interfaces->size(); i++){
            if(interfaces->at(i).toLower() == interface_name.toLower()){
                interfaces->remove(i);
                check_search = true;
                break;
            }else check_search = false;
        }
    }else check_search = false;
    return check_search;
}

// Реализация метода получения интерфейса по его индексу в векторе интерфейсов
QString Equipment::Get_InterfaceName(int index){
    if(interfaces->size() != 0){
        return interfaces->at(index);
    }else return "В данной конфигурации нет задействованных интерфейсов.";
}


// Реализация метода для получения количества портов оборудования
int Equipment::Get_NumPorts(){
    return gipo_Settings->count();
}

// Реализация метода для получения количества используемых интерфейсов
int Equipment::Get_NumInterfaces()
{
    return interfaces->count();
}

// Реализация метода для добавления настройки порта ввода вывода
bool Equipment::Add_GipoSetting(int number, QString io, QString setting)
{
    bool search_num = false;
    QStringList gipo_Setting;
    if(gipo_Settings->size() == 0)
    {
        gipo_Setting<<QString::number(number)<<io<<setting;
        gipo_Settings->push_back(gipo_Setting);
    }
    else
    {
        for(int i = 0; i < gipo_Settings->size(); i++){
            gipo_Setting = Get_GipoSetting(i);
            if(gipo_Setting.at(0).toInt() == number)
            {
                search_num = true;
                break;
            }
        }
        if(!search_num)
        {
            gipo_Setting.clear();
            gipo_Setting<<QString::number(number)<<io<<setting;
            gipo_Settings->push_back(gipo_Setting);
        }
    }
    return search_num;
}

// Реализация метода для удаление настройки порта ввода вывода
bool Equipment::Del_GipoSetting(int number)
{
    bool search_num = false;
    if(gipo_Settings->size() != 0)
    {
        for(int i = 0; i < gipo_Settings->size(); i++){
            int t = gipo_Settings->at(i).at(0).toInt();
            if(t == number)
            {
                gipo_Settings->remove(i);
                search_num = true;
                break;
            }
        }
    }
    return search_num;
}

QStringList Equipment::Get_GipoSetting(int index)
{
    return gipo_Settings->at(index);
}
