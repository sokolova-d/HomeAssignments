/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include "Maximal.h"
#include <iostream>

//constructor
Maximal::Maximal(const std::string &name, int level, int fuel, Weapon weapon, bool camouflage, int agility, int endurance):
    Transformer(name, level, fuel, weapon),
    _camouflage(camouflage),
    _agility(agility),
    _endurance(endurance) {};

//methods
void Maximal::actStealth() {
    if(_camouflage) {
        std::cout << getName()  << " activates stealth mode.\n";
    } else {
        std::cout << getName()  << "'s camouflage is off.\n";
    }
}
void Maximal::move() {
    std::cout << getName()  << " moves forward.\n";
}

//getters
bool Maximal::getisCamouflaged() {
    return _camouflage;
}
int Maximal::getAgility() {
    return _agility;
}
int Maximal::getEndurance() {
    return _endurance;
}

//setters
void Maximal::setisCamouflaged(bool camouflage) {
    _camouflage = camouflage;
}
void Maximal::setAgility(int agility) {
    _agility = agility;
}
void Maximal::setEndurance(int endurance) {
    _endurance = endurance;
}

