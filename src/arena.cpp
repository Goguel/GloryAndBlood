//
// Created by migue on 21/05/2025.
//
#include "arena.hpp"
#include "warrior.hpp"
#include <iostream>

void Arena::addWarrior(Warrior& warrior) {
        warriors.push_back(warrior);
        std::cout << warrior.getName() << " entered Mount Olympus!" << "\n";
}

void Arena::combat() {


       // std::cout << "Warrior 1: " << dice.getFace(warrior1.getAttackChance(), warrior1.getDefenseChance(), warrior1.getHealingChance()) << "\n";

}