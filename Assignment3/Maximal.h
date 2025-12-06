/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "Transformer.h"

class Maximal: public Transformer
{
public:
    //constructor
    Maximal(const std::string &name, int level, int fuel, Weapon* weapon, bool camouflage, int agility, int endurance);
    Maximal(const std::string &name, int level, int fuel, Weapon* weapon, bool camouflage, int agility);
    Maximal(const std::string &name, int level, int fuel, Weapon* weapon, bool camouflage);
    Maximal(const std::string &name, int level, int fuel, Weapon* weapon);
    Maximal(const std::string &name, int level, int fuel);
    Maximal(const std::string &name, int level);
    Maximal(const std::string &name);

    //methods
    virtual void actStealth();
    void move() override;
    void transform() override;
    virtual void sprint();

    //getters
    bool getisCamouflaged();
    int getAgility();
    int getEndurance();

    //setters
    void setisCamouflaged(bool camouflage);
    void setAgility(int agility);
    void setEndurance(int endurance);

    friend std::ostream& operator<<(std::ostream &os, Maximal &m);


private:
    bool _camouflage;
    int _agility;
    int _endurance;
};

#endif
