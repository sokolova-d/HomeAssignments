/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include "Maximal.h"
#include <iostream>

//constructor
Maximal::Maximal(const std::string &name, int level, int fuel, Weapon* weapon, bool camouflage, int agility, int endurance):
    Transformer(name, level, fuel, weapon),
    _camouflage(camouflage),
    _agility(agility),
    _endurance(endurance) {};

Maximal::Maximal(const std::string &name)
    : Transformer(name, 0, 0, nullptr), _camouflage(false), _agility(0), _endurance(0) {};

Maximal::Maximal(const std::string &name, int level, int fuel, Weapon* weapon)
    : Transformer(name, level, fuel, weapon), _camouflage(false), _agility(0), _endurance(0) {};


//methods
void Maximal::actStealth()
{
    if(_camouflage)
    {
        std::cout << getName()  << " activates stealth mode.\n";
    }
    else
    {
        std::cout << getName()  << "'s camouflage is off.\n";
    }
}
void Maximal::move()
{
    std::cout << getName()  << " moves forward.\n";
}
void Maximal::transform()
{
    std::cout << getName()  << " transforms.\n";
}
void Maximal::sprint()
{
    std::cout <<getName() << "sprints.\n";
}

//getters
bool Maximal::getisCamouflaged()
{
    return _camouflage;
}
int Maximal::getAgility()
{
    return _agility;
}
int Maximal::getEndurance()
{
    return _endurance;
}

//setters
void Maximal::setisCamouflaged(bool camouflage)
{
    _camouflage = camouflage;
}
void Maximal::setAgility(int agility)
{
    _agility = agility;
}
void Maximal::setEndurance(int endurance)
{
    _endurance = endurance;
}

std::ostream& operator<<(std::ostream &os, Maximal &m)
{
    os << "Maximal: " << m.getName()
       << " camouflage=" << (m.getisCamouflaged() ? "on" : "off")
       << " agility=" << m.getAgility()
       << " endurance=" << m.getEndurance();
    return os;
}

