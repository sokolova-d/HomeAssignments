/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include "Autobot.h"
#include <iostream>

//constructor
Autobot::Autobot(const std::string &name, int level, int fuel, Weapon weapon, const std::string &wehicleForm, int armor, int speed):
    Transformer(name, level, fuel, weapon),
    _vehicleForm(vehicleForm),
    _armor(armor),
    _speed(speed) {};

//methods
void Authobot::repair() {
    std::cout << _name << " is repairing allies.\n";
}
void Authobot::transform() {
    std::cout << _name << " transforms into " << _vehicleForm << ".\n";
}

//getters
std::string Authobot::getVehicle() {
    return _vehicleForm;
}
int Authobot::getArmor() {
    return _armor;
}
int Authobot::getSpeed() {
    return _speed;
}

//setters
void Authobot::getVehicle(const std::string &vehicleForm) {
    _vehicleForm = vehicleForm;
}
void Authobot::getArmor(int armor) {
    _armor = armor;
}
void Authobot::getSpeed(int speed) {
    _speed = speed;
}


