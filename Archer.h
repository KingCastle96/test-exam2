#pragma once
#include "Player.h"
#include <string>

class Archer : public Player {
public:
    Archer(string nickname);
    void attack() override;
};