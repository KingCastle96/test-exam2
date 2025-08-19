#include <iostream>
#include <string>
#include <vector> 
#include "Player.h"
#include "Warrior.h"
#include "Archer.h"
#include "Thief.h"
#include "Magician.h"

using namespace std;

int main() {
    
    string jobs[] = { "Warrior", "Magician", "Thief", "Archer" };
    int num_jobs = sizeof(jobs) / sizeof(jobs[0]); 

    string nickname;
    int job_choice = -1; 

    cout << "=== ĳ���� ���� �ý��� ===" << endl;

 
    cout << "�г����� �Է����ּ���: ";
    cin >> nickname;

    cout << "<���� �ý���>" << endl;
    cout << nickname << "��, ȯ���մϴ�!" << endl;
    cout << "���Ͻô� ������ �������ּ���:" << endl;

   
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << jobs[i] << endl;
    }

  
    cout << "����(1~4) : ";
    cin >> job_choice;

   
    Player* player = nullptr; 

 
    switch (job_choice) {
    case 1: 
        player = new Warrior(nickname);
        break;
    case 2: 
        player = new Magician(nickname);
        break;
    case 3: 
        player = new Thief(nickname);
        break;
    case 4: 
        player = new Archer(nickname);
        break;
    default:
        cout << "�߸��� �Է��Դϴ�." << endl;
        return 1; 
    }

    
    if (player != nullptr) { 
        cout << "\n--- ������ ĳ���� ���� ---" << endl;
        player->printPlayerStatus(); 
        player->attack();            
    }

    delete player;
    player = nullptr; 

    return 0;
}