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
        bool defending = false;
        float healing;
        int attackChance;
        int defenseChance;
        int healingChance;

    public:
        Warrior(const std::string& name, int health, int maxHealth);

        void displayStats() const;

        void setSkills(float atk, float def, float heal);

        void setChances(int atkChance, int defChance, int healChance);

        bool isAlive() { return health > 0; }

        void attackTarget(Warrior& target);

        void setDefending(bool status);

        bool isDefending() const;

        char chooseAction();

        void heal();
        // Getters
        std::string getName();
        int getHealth() const;
        int getAttackChance();
        int getDefenseChance();
        int getHealingChance();
};

#endif // WARRIOR_HPP