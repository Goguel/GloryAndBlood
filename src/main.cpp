//
// Created by migue on 21/05/2025.
//
#include "victoryRoad.hpp"
#include "warrior.hpp"

int main(int argc, char* argv[]) {

    VictoryRoad arena;

    Warrior warrior1("Teseu", 80, 100);
    Warrior warrior2("Perseu", 100, 120);

    warrior1.setStatus(5, 3, 1);
    warrior2.setStatus(2, 4, 3);

    arena.combat(warrior1, warrior2);

    //warrior1.display();

    return 0;
}