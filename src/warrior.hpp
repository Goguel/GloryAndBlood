#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include <iostream>
#include <string>
#include <bits/ostream.tcc>

class Warrior {

    private:
        std::string name;
        int health;
        int maxHealth;
        int attack;
        int defense;
        int healing;

    public:
        Warrior(const std::string& name, int health, int maxHealth);

        void display() const;

        void setStatus(int attack, int defense, int healing);
};

#endif // WARRIOR_HPP