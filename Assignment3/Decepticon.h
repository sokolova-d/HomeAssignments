/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#ifndef DECEPTION_H
#define DECEPTION_H

#include "Transformer.h"

class Deception: public Transformer {
    public:
        //constructor
        Deception(const std::string &name, int level, int fuel, Weapon weapon, int agression, int stealth int isleader);

        //methods
        void terrorize();
        void fire() override;

        //getters
        int getAgression();
        int getStealth();
        int getIsLeader();

        //setters
        void setAgression(int agression);
        void setStealth(int stealth);
        void setIsLeader(bool isleader);

    private:
        int _agression;
        int _stealth;
        bool _isleader;
};

#endif
