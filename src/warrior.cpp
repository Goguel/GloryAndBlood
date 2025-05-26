//
// Created by migue on 21/05/2025.
//
#include "warrior.hpp"
#include <iostream>

Warrior::Warrior(const std::string& name, int health, int maxHealth)
    : name(name), health(health), maxHealth(maxHealth) {}

void Warrior::displayStats() const {
    std::cout << "Name: " << name << "\n"
              << "Health: " << health << "\n"
              << "Attack: " << attack << "\n"
              << "Defense: " << defense << "\n"
              << "Healing: " << healing<< "\n"
              << "Max health: " << maxHealth << "\n"
              << "-----------------------------" << "\n";
}

void Warrior::setSkills(float atk, float def, float heal) {
    attack = atk;
    defense = def;
    healing = heal;
}

void Warrior::setChances(int atkChance, int defChance, int healChance) {
    attackChance = atkChance;
    defenseChance = defChance;
    healingChance = healChance;
}

void Warrior::attackTarget(Warrior& target) {
    if (!target.isAlive()) return;

    float damage = this->attack * this->health;
    std::cout << name << " attacks " << target.getName() << " for " << damage << " damage.\n";

    if (target.isDefending()) {
        std::cout << target.getName() << " is defending!\n";
        damage *= 0.7f;
        std::cout << "Damage reduced to " << damage << " by defense.\n";
    }

    target.health -= static_cast<int>(damage);
    if (target.health < 0) target.health = 0;

    std::cout << target.getName() << " now has " << target.health << " HP.\n";
}

void Warrior::setDefending(bool status) {
    defending = status;
}

bool Warrior::isDefending() const {
    return defending;
}

char Warrior::chooseAction() {
    return dice.getFace(attackChance, defenseChance, healingChance);
}

void Warrior::heal() {
    if (health < maxHealth) {
        if (int parcial = (healing * health) + health; parcial <= maxHealth) {
            health = parcial;
        } else health = maxHealth;
    }
}

std::string Warrior::getName() {
    return name;
}

int Warrior::getHealth() const {
    return health;
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

