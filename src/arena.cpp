//
// Created by migue on 21/05/2025.
//
#include "arena.hpp"

#include <algorithm>
#include <chrono>

#include "warrior.hpp"
#include <iostream>
#include <random>
#include <thread>

void Arena::addWarrior(Warrior& warrior) {
        warriors.push_back(warrior);
        std::cout << warrior.getName() << " entered Mount Olympus!" << "\n";
}

void Arena::combat() {

    if (warriors.size() < 2) {
        std::cout << "Need at least two warriors to start combat!" << "\n";
        return;
    }
        std::cout << "\n--- Warriors in the Mount Olympus ---" << "\n";
        std::cout << "---------------------------------------" << "\n";
        for (const auto& warrior : warriors) {
            warrior.displayStats();
        }

     int round = 1;
    std::random_device rd;
    std::mt19937 gen(rd());

    while (true) {
        std::cout << "\n-------- Round " << round << " --------" << "\n";

        std::vector<std::pair<Warrior*, char>> actions;
        for (auto& warrior : warriors) {
            if (!warrior.isAlive()) continue;
            char action = warrior.chooseAction();
            actions.push_back({&warrior, action});
        }
        std::shuffle(actions.begin(), actions.end(), gen);

        std::cout << "Acoes na ordem de execucao:\n";
        for (const auto& pair : actions) {
            std::string act;
            if (pair.second == 'A') act = "Attack";
            else if (pair.second == 'D') act = "Defense";
            else if (pair.second == 'H') act = "Healing";
            else act = "None";

            std::cout << " - " << pair.first->getName() << ": " << act << "\n";
        }

        for (auto& pair : actions) {
            Warrior* current = pair.first;
            if (!current->isAlive()) continue;

            char action = pair.second;
            if (action == 'H') {
                current->heal();
            } else if (action == 'D') {
                current->setDefending(true);
            } else if (action == 'A') {
                Warrior* target = nullptr;
                for (auto& potential : warriors) {
                    if (&potential != current && potential.isAlive()) {
                        target = &potential;
                        break;
                    }
                }
                if (target) {
                    current->attackTarget(*target);
                }
            }
        }

        std::cout << "\nStatus dos guerreiros:\n";
        for (auto& w : warriors) {
            std::cout << " - " << w.getName() << ": " << w.getHealth() << " HP\n";
        }

        for (auto& w : warriors) {
            w.setDefending(false);
        }

        int vivos = 0;
        for (auto& w : warriors) {
            if (w.isAlive()) vivos++;
        }

        if (vivos <= 1) break;
        round++;

        std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    std::cout << "----------- Combate encerrado! --------" << "\n";
    for (auto& w : warriors) {
        if (w.isAlive()) {
            std::cout << w.getName() << " venceu!\n";
        }
    }
}