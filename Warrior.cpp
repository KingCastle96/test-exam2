#include "Warrior.h" 
#include <iostream>  
#include <string>

using namespace std;


Warrior::Warrior(string nickname) : Player(nickname) { 
    job_name = "Warrior";
    level = 1;
    HP = 150;     
    MP = 30;      
    power = 15;   
    defence = 10; 
    accuracy = 80; 
    speed = 40;   
}

void Warrior::attack() {
    cout << nickname <<"�� ������ �����մϴ�! (���ݷ�: " << power << ")" << endl;
}