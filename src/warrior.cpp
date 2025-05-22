//
// Created by migue on 21/05/2025.
//
#include "warrior.hpp"
#include <iostream>

Warrior::Warrior(const std::string& name, int health, int maxHealth)
    : name(name), health(health), maxHealth(maxHealth) {}

void Warrior::display() const {
    std::cout << "Name: " << name << "\n"
              << "Health: " << health << "\n"
              << "Ataque: " << attack << "\n"
              << "Defesa: " << defense << "\n"
              << "Cura: " << healing<< "\n"
              << "Vida maxima: " << maxHealth << std::endl;
}

void Warrior::setChances(int atkChance, int defChance, int healChance) {
    attackChance = atkChance;
    defenseChance = defChance;
    healingChance = healChance;
}

std::string Warrior::getName() {
    return name;
}
int Warrior::getAttackChance() {
    return attack;
}

int Warrior::getDefenseChance() {
    return defense;
}

int Warrior::getHealingChance() {
    return healing;
}

