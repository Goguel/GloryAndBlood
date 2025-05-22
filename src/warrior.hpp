#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include <iostream>
#include <string>
#include <bits/ostream.tcc>

#include "dice.hpp"

class Warrior {

    private:
        Dice dice;
        std::string name;
        int health;
        int maxHealth;
        float attack;
        float defense;
        float healing;
        int attackChance;
        int defenseChance;
        int healingChance;

    public:
        Warrior(const std::string& name, int health, int maxHealth);

        void display() const;

        void setChances(int atkChance, int defChance, int healChance);

        // Getters
        std::string getName();
        int getAttackChance();
        int getDefenseChance();
        int getHealingChance();
};

#endif // WARRIOR_HPP