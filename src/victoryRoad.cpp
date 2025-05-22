//
// Created by migue on 21/05/2025.
//
#include "victoryRoad.hpp"
#include "dice.hpp"
#include <iostream>

void VictoryRoad::combat(Warrior warrior1, Warrior warrior2) {
        Dice dice;

        std::cout << "Warrior 1: " << dice.getFace(warrior1.getAttack(), warrior1.getDefense(), warrior1.getHealing()) << "\n";
        std::cout << "Warrior 2: " << dice.getFace(warrior2.getAttack(), warrior2.getDefense(), warrior2.getHealing()) << "\n";
}