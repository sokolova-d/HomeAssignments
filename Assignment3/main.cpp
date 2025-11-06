/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Maximal.h"
#include "Weapon.h"

int main() {
    Weapon blaster("Balster", 50);
    Weapon cannon("Cannon", 80);
    Weapon laser("Laser", 20);

    //creating heirs
    Autobot a("Optimus", 10, 100, blaster, "Truck", 80, 60);
    Decepticon d("Megatron", 12, 120, cannon, 90, 50, true);
    Maximal m("Rattrap", 5, 70, laser, true, 40, 30);

    //testing Autobot
    a.transform();
    a.repair();
    std::cout << "Vehicle: " << a.getVehicle() << ", Armor: " << a.getArmor() << ", Speed: " << a.getSpeed() << "\n";


    //testing Decepticon
    d.fire();
    d.terrorize();
    std::cout << "Aggression: " << d.getAgression() << ", Stealth: " << d.getStealth() << ", Leader: " << (d.getIsLeader() ? "Yes" : "No") << "\n";

    //testing Maximal
    m.actStealth();
    m.move();
    std::cout << "Camouflage: " << (m.getisCamouflaged() ? "On" : "Off") << ", Agility: " << m.getAgility() << ", Endurance: " << m.getEndurance() << "\n";

    return 0;
}
