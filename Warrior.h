#pragma once
#include "Player.h" 
#include <string>

class Warrior : public Player {
public:
    Warrior(string nickname);
    void attack() override;
};