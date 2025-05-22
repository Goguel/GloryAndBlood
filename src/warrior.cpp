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

void Warrior::setStatus(int attack, int defense, int healing) {
    this->attack = attack;
    this->defense = defense;
    this->healing = healing;
}

