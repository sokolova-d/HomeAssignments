/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
public:
    Weapon(const std::string &name = "Unknown", int damage = 0);

    std::string getName();
    int getDamage();

    void setName(const std::string &name);
    void setDamage(int damage);

private:
    std::string _name;
    int _damage;

};

#endif
