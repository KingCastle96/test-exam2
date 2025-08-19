#include "Archer.h"
#include <iostream>
#include <string>

using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "Archer";
    level = 1;
    HP = 120;     
    MP = 40;      
    power = 12;   
    defence = 7;  
    accuracy = 90; 
    speed = 60;   
}

void Archer::attack() {
    cout << nickname << "�� Ȱ�� ��� �����մϴ�! (���ݷ�: " << accuracy << ")" << endl;
}
