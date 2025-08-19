#include "Thief.h"
#include <iostream>
#include <string>

using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "Thief";
    level = 1;
    HP = 100;     
    MP = 50;      
    power = 10;   
    defence = 6;  
    accuracy = 85; 
    speed = 70;   
}

void Thief::attack() {
    cout << nickname << "이 단검으로 공격합니다! (공격력: " << speed << ")" << endl;
}
