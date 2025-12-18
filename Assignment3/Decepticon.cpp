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

Decepticon::Decepticon(const std::string &name)
    : Transformer(name, 0, 0, nullptr), _agression(0), _stealth(0), _isleader(false) {};

Decepticon::Decepticon(const std::string &name, int level, int fuel)
    : Transformer(name, level, fuel, nullptr), _agression(0), _stealth(0), _isleader(false) {};


//methods
void Decepticon::terrorize()
{
    std::cout << getName()  << " agression level: " << _agression << ".\n";
}
void Decepticon::fire()
{
    std::cout << getName() << " fires weapon with damage.\n";
}
void Decepticon::transform()
{
    std::cout << getName() << " transforms into battle form.\n";
}
void Decepticon::intimidate()
{
    std::cout << getName() << " intimidates someone.\n";
}

//getters
int Decepticon::getAgression()
{
    return _agression;
}
int Decepticon::getStealth()
{
    return _stealth;
}
bool Decepticon::getIsLeader()
{
    return _isleader;
}

//setters
void Decepticon::setAgression(int agression)
{
    _agression = agression;
}
void Decepticon::setStealth(int stealth)
{
    _stealth = stealth;
}
void Decepticon::setIsLeader(bool isleader)
{
    _isleader = isleader;
}

std::ostream& operator<<(std::ostream &os, Decepticon &d)
{
    os << "Decepticon: " << d.getName()
       << " agression=" << d.getAgression()
       << " stealth=" << d.getStealth()
       << " leader=" << (d.getIsLeader() ? "yes" : "no");
    return os;
}