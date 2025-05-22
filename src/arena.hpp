#ifndef ARENA_HPP
#define ARENA_HPP

#include <vector>
#include "warrior.hpp"

class Arena {

private:
    std::vector<Warrior> warriors;

public:

    void addWarrior(Warrior& warrior);

    void combat();
};

#endif