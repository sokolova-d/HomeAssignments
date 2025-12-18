/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include "Weapon.h"

Weapon::Weapon(const std::string &name, int damage):
    _name(name),
    _damage(damage) {};

std::string Weapon::getName()
{
    return _name;
}
int Weapon::getDamage()
{
    return _damage;
}

void Weapon::setName(const std::string &name)
{
    _name = name;
}
void Weapon::setDamage(int damage)
{
    _damage = damage;
}
