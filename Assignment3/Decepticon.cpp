/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include "Deception.h"
#include <iosream>

//constructor
Deception::Deception(const std::string &name, int level, int fuel, Weapon weapon, int agression, int stealth int isleader):
    Transformer(name. level, fuel, weapon),
    _agression(agression),
    _stealth(stealth),
    _isleader(isleader) {};

//methods
void Deception::terrorize() {
    std::cout << _name << " agression level: " << _agression << ".\n";
}
void Deception::fire() {
    std::cout << _name << " fires weapon with damage.\n";
}

//getters
int Deception::getAgression() {
    return _agression;
}
int Deception::getStealth() {
    return _stealth;
}
bool Deception::getIsLeader() {
    return _isleader;
}

//setters
void Deception::getAgression(int agression) {
    _agression = agression;
}
void Deception::getStealth(int stealth) {
    _stealth = stealth;
}
void Deception::setIsLeader(bool isleader) {
    _isleader = isleade;
}
