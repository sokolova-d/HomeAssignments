/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include "Transformer.h"
#include <iostream>
#include "Weapon.h"
#include "TargetSys.h"

Transformer::Transformer(const std::string &name, int level, int fuel, Weapon* weapon):
    _name(name),
    _level(level),
    _fuel(fuel),
    _ammo(10),
    _targeting(),
    _weapon(weapon) {};

Transformer::~Transformer() {};

//methods
void Transformer::move()
{
    std::cout << _name << " is moving.\n";
    if (_fuel > 5) _fuel -= 5;
}
void Transformer::fire()
{
    std::cout << _name << " fires.\n";
    if (_ammo > 0) _ammo--;
}
void Transformer::transform()
{
    std::cout << _name << " is transforming.\n";
}

//getters
std::string Transformer::getName()
{
    return _name;
}
int Transformer::getLvl()
{
    return _level;
}
int Transformer::getFuel()
{
    return _fuel;
}
int Transformer::getAmmo()
{
    return _ammo;
}
Weapon* Transformer::getWeapon() const
{
    return _weapon;
}

//setters
void Transformer::setName(const std::string &name)
{
    _name = name;
}
void Transformer::setLvl(int level)
{
    _level = level;
}
void Transformer::setFuel(int fuel)
{
    _fuel = fuel;
}
void Transformer::setAmmo(int ammo)
{
    _ammo = ammo;
}
void Transformer::setWeapon(Weapon* weapon)
{
    _weapon = weapon;
}

std::ostream& operator<<(std::ostream &os, Transformer &t)
{
    os << "Transformer: " << t.getName()
       << " lvl = " << t.getLvl()
       << " Fuel = " << t.getFuel()
       << " ammo = " << t.getAmmo();
    if (t.getWeapon())
    {
        os << " weapon = " << t.getWeapon()->getName() << "(" << t.getWeapon()->getDamage() << ")";
    }
    else
    {
        os << " weapon = null";
    }
    return os;
}