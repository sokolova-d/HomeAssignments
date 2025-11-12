/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot: public Transformer {
    public:
        //constructor
        Autobot(const std::string &name, int level, int fuel, Weapon* weapon, const std::string &wehicleForm, int armor, int speed);

        //methods
        void repair();
        void transform() override;

        //getters
        std::string getVehicle();
        int getArmor();
        int getSpeed();

        //setters
        void setVehicle(const std::string &vehicle);
        void setArmor(int armor);
        void setSpeed(int speed);

    private:
        std::string _vehicleForm;
        int _armor;
        int _speed;
};

#endif
