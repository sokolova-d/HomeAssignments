/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot: public Transformer
{
public:
    //constructor
    Autobot(const std::string &name, int level, int fuel, Weapon* weapon, const std::string &wehicleForm, int armor, int speed);
    Autobot(const std::string &name, int level, int fuel, Weapon* weapon, const std::string &wehicleForm, int armor);
    Autobot(const std::string &name, int level, int fuel, Weapon* weapon, const std::string &wehicleForm);
    Autobot(const std::string &name, int level, int fuel, Weapon* weapon);
    Autobot(const std::string &name, int level, int fuel);
    Autobot(const std::string &name, int level);
    Autobot(const std::string &name);

    //methods
    virtual void repair();
    void transform() override;
    virtual void defend();

    //getters
    std::string getVehicle();
    int getArmor();
    int getSpeed();

    //setters
    void setVehicle(const std::string &vehicle);
    void setArmor(int armor);
    void setSpeed(int speed);

    friend std::ostream& operator<<(std::ostream &os, Autobot &a);

private:
    std::string _vehicleForm;
    int _armor;
    int _speed;
};

#endif
