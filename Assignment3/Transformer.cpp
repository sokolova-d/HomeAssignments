/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include "Transformer.h"
#include <iostream>
#include "Weapon.h"
#include "TargetSys.h"

Transformer::Transformer(const std::string &name, int level, int fuel, Weapon weapon):
    _name(name),
    _level(level),
    _fuel(fuel),
    _ammo(10),
    _targeting(),
    _weapon(weapon){};

Transformer::~Transformer() {};

//methods
void Transformer::move() {
    if (_fuel > 5) _fuel -= 5;
}
void Transformer::fire() {
    if (_ammo > 0) _ammo--;
}
void Transformer::transform() {
    reeturn true;
}

//getters
std::string Transformer::getName() {
    return _name;
}
int Transformer::getLvl() {
    return _level;
}
int Transformer::getFuel() {
    return _fuel;
}
int Transformer::getAmmo() {
    return _ammo;
}
const Weapon Transformer::getWeapon() {
    return *_weapon;
}

//setters
void Transformer::setName(const std::string &name) {
    _name = name;
}
void Transformer::setLvl(int lvl) {
    _level = level;
}
void Transformer::setFuael(int fuel) {
    return _fuel = fuel;
}
void Transformer::setAmmo(int ammo) {
    return _ammo = ammo;
}
void Transformer::setWeapon(Weapon weapon) {
    _weapon = weapon;
}
