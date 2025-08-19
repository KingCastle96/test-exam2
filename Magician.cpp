#include "Magician.h"
#include <iostream>
#include <string>

using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "Magician";
    level = 1;
    HP = 90;      
    MP = 80;      
    power = 8;    
    defence = 4;  
    accuracy = 75; 
    speed = 50;   
}

void Magician::attack() {
    cout << nickname << "이 마법을 시전합니다! (공격력: " << MP << ")" << endl;
}
