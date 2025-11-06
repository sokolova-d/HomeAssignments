/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "Transformer.h"

class Maximal: public Transformer {
    public:
        //constructor
        Maximal(const std::string &name, int level, int fuel, Weapon weapon, bool camouflage, int agility, int endurance);

        //methods
        void actStealth();
        void move() override;

        //getters
        bool IsCamouflaged();
        int getAgility();
        int getEndurance();

        //setters
        void setCamouflage(bool camouflage);
        void setAgiliy(int agility);
        void setEndurance(int endurance);

    private:
        bool _camouflage;
        int _agility;
        int _endurance;
};

#endif
