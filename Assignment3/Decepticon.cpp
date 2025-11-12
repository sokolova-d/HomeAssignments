/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include "Decepticon.h"
#include <iostream>

//constructor
Decepticon::Decepticon(const std::string &name, int level, int fuel, Weapon* weapon, int agression, int stealth, bool isleader):
    Transformer(name, level, fuel, weapon),
    _agression(agression),
    _stealth(stealth),
    _isleader(isleader) {};

//methods
void Decepticon::terrorize() {
    std::cout << getName()  << " agression level: " << _agression << ".\n";
}
void Decepticon::fire() {
    std::cout << getName() << " fires weapon with damage.\n";
}

//getters
int Decepticon::getAgression() {
    return _agression;
}
int Decepticon::getStealth() {
    return _stealth;
}
bool Decepticon::getIsLeader() {
    return _isleader;
}

//setters
void Decepticon::setAgression(int agression) {
    _agression = agression;
}
void Decepticon::setStealth(int stealth) {
    _stealth = stealth;
}
void Decepticon::setIsLeader(bool isleader) {
    _isleader = isleader;
}
