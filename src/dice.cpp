//
// Created by migue on 22/05/2025.
//
#include "dice.hpp"
#include <random>

char Dice::getFace(int attackWeight, int defenseWeight, int healingWeight) {
    int total = attackWeight + defenseWeight + healingWeight;
    if (total == 0) return 'N';

    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, total);

    int roll = dist(gen);

    if (roll <= attackWeight) {
        return 'A';
    } else if (roll <= attackWeight + defenseWeight) {
        return 'D';
    } else {
        return 'H';
    }
}