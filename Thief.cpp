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
    cout << nickname << "�� �ܰ����� �����մϴ�! (���ݷ�: " << speed << ")" << endl;
}
