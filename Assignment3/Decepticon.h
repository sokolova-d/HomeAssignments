/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#ifndef DECEPTION_H
#define DECEPTION_H

#include "Transformer.h"

class Decepticon: public Transformer
{
public:
    //constructor
    Decepticon(const std::string &name, int level, int fuel, Weapon* weapon, int agression, int stealth, bool isleader);
    Decepticon(const std::string &name, int level, int fuel, Weapon* weapon, int agression, int stealth);
    Decepticon(const std::string &name, int level, int fuel, Weapon* weapon, int agression);
    Decepticon(const std::string &name, int level, int fuel, Weapon* weapon);
    Decepticon(const std::string &name, int level, int fuel);
    Decepticon(const std::string &name, int level);
    Decepticon(const std::string &name);

    //methods
    virtual void terrorize();
    void fire() override;
    void transform() override;
    virtual void intimidate();

    //getters
    int getAgression();
    int getStealth();
    bool getIsLeader();

    //setters
    void setAgression(int agression);
    void setStealth(int stealth);
    void setIsLeader(bool isleader);

    friend std::ostream& operator<<(std::ostream &os, Decepticon &d);

private:
    int _agression;
    int _stealth;
    bool _isleader;
};

#endif
