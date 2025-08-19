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

    cout << "=== 캐릭터 생성 시스템 ===" << endl;

 
    cout << "닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "원하시는 직업을 선택해주세요:" << endl;

   
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << jobs[i] << endl;
    }

  
    cout << "선택(1~4) : ";
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
        cout << "잘못된 입력입니다." << endl;
        return 1; 
    }

    
    if (player != nullptr) { 
        cout << "\n--- 생성된 캐릭터 정보 ---" << endl;
        player->printPlayerStatus(); 
        player->attack();            
    }

    delete player;
    player = nullptr; 

    return 0;
}