#pragma once
#include "Player.h"
#include <string>

class Magician : public Player {
public:
    Magician(string nickname);
    void attack() override;
};