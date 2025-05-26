//
// Created by migue on 21/05/2025.
//
#include "arena.hpp"
#include "warrior.hpp"

int main(int argc, char* argv[]) {
    Arena mountOlympus;;

    Warrior warrior1("Teseu", 80, 100);
    Warrior warrior2("Perseu", 100, 120);

    warrior1.setSkills(0.8, 0.4, 0.5);
    warrior2.setSkills(0.3, 0.2, 0.1);

    warrior1.setChances(5, 3, 1);
    warrior2.setChances(2, 4, 3);

    mountOlympus.addWarrior(warrior1);
    mountOlympus.addWarrior(warrior2);

    mountOlympus.combat();

    return 0;
}