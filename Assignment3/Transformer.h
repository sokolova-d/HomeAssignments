/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "TargetSys.h"
#include "Weapon.h"

class Transformer {
    public: //constructor and destructor
        Transformer(const std::string &name, int level, int fuel, Weapon* weapon);
        ~Transformer();

        //Methods
        virtual void move();
        virtual void fire();
        virtual void transform();

        //Getters
        std::string getName();
        int getLvl();
        int getFuel();
        int getAmmo();
        Weapon* getWeapon() const;

        //Setters
        void setName(const std::string &name);
        void setLvl(int level);
        void setFuel(int fuel);
        void setAmmo(int ammo);
        void setWeapon(Weapon* weapon);

    private:
        //Fields
        std::string _name;
        int _level;
        int _fuel;
        int _ammo;
        //Composition
        TargetSys _targeting;
        //Association
        Weapon* _weapon;
};

#endif
