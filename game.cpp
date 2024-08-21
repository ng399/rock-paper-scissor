#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int playerone = 0;
    int playertwo = 0;
    char input;
    cout << "Stone Paper Scissor Game" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissor" << endl;
    cin >> playerone;

    if(playerone == 1){
        cout << "player one choose Rock" << endl;
    }
    else if(playerone == 2){
        cout << "player one choose Paper" << endl;
    }
    else{
        cout << "player one choose Scissor" << endl;
    }

    playertwo = rand()%3+1;
    if(playertwo == 1){
        cout << "player two chooses Rock" << endl;
    }
    else if(playertwo == 2){
        cout << "player two chooses Paper"<< endl;
    }
    else{
        cout << "player two chooses Scissor" << endl;
    }

    if(playerone== playertwo){
        cout << "Match Tie" << endl;
    }

    else if(playerone == 1){
        if(playertwo == 2){
            cout << "player two win!" << endl;
        }
        if(playertwo == 3){
            cout << "player one win!" << endl;
        }
    }
    
    else if(playerone == 2){
        if(playertwo == 1){
            cout << "player one win!" << endl;
        }
        if(playertwo == 3){
            cout << "player two win!" << endl;
        }
    }
    
    else if(playerone == 3){
        if(playertwo == 1){
            cout << "player one win!" << endl;
        }
        if(playertwo == 2){
            cout << "player two win!" << endl;
        }
    
    }   

    return 0;

}