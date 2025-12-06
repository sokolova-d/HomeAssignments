/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include "Autobot.h"
#include <iostream>

//constructor
Autobot::Autobot(const std::string &name, int level, int fuel, Weapon* weapon, const std::string &vehicleForm, int armor, int speed):
    Transformer(name, level, fuel, weapon),
    _vehicleForm(vehicleForm),
    _armor(armor),
    _speed(speed) {};

Autobot::Autobot(const std::string &name)
    : Transformer(name, 0, 0, nullptr), _vehicleForm("Car"), _armor(0), _speed(0) {};

Autobot::Autobot(const std::string &name, int level)
    : Transformer(name, level, 0, nullptr), _vehicleForm("Car"), _armor(0), _speed(0) {};


//methods
void Autobot::repair()
{
    std::cout << getName()<< " is repairing allies.\n";
}
void Autobot::transform()
{
    std::cout << getName() << " transforms into " << _vehicleForm << ".\n";
}
void Autobot::defend()
{
    std::cout << getName() << " defends someone with armor " << _armor << ")\n";
}

//getters
std::string Autobot::getVehicle()
{
    return _vehicleForm;
}
int Autobot::getArmor()
{
    return _armor;
}
int Autobot::getSpeed()
{
    return _speed;
}

//setters
void Autobot::setVehicle(const std::string &vehicleForm)
{
    _vehicleForm = vehicleForm;
}
void Autobot::setArmor(int armor)
{
    _armor = armor;
}
void Autobot::setSpeed(int speed)
{
    _speed = speed;
}

std::ostream& operator<<(std::ostream &os, Autobot &a)
{
    os << "Autobot: " << a.getName()
       << " vehicle=" << a.getVehicle()
       << " armor=" << a.getArmor()
       << " speed=" << a.getSpeed();
    return os;
}

