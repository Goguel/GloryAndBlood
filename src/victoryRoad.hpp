#ifndef VICTORYROAD_HPP
#define VICTORYROAD_HPP

#include <string>

#include "warrior.hpp"

class VictoryRoad {

    private:
        int qntWarriors;

    public:
        void combat(Warrior warrior1, Warrior warrior2);

};

#endif // VICTORYROAD_HPP