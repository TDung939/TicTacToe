#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

char space[] = {'0','1','2','3','4','5','6','7','8','9'};

class tictactoe
{
    public:
        void draw_board();
        bool check_not_win();
        void player_input();
        void computer_input();
};

void  tictactoe::draw_board() {
            system("clear");
            cout<< "                                             " << endl;
            cout<< "                                             " << endl;
            cout<< "     ___________ ___________ ___________ " << endl;
            cout<< "    |           |           |           |    " << endl;
            cout<< "    |     "<< space[1] <<"     |     "<< space[2] <<"     |     "<< space[3] <<"     |    " << endl;
            cout<< "    |___________|___________|___________|" << endl;
            cout<< "    |           |           |           |" << endl;
            cout<< "    |     "<< space[4] <<"     |     "<< space[5] <<"     |     "<< space[6] <<"     |    " << endl;
            cout<< "    |___________|___________|___________|" << endl;
            cout<< "    |           |           |           |" << endl;
            cout<< "    |     "<< space[7] <<"     |     "<< space[8] <<"     |     "<< space[9] <<"     |    " << endl;
            cout<< "    |___________|___________|___________|   " << endl;
            cout<< "                                             " << endl;
            cout<< "                                             " << endl;
}

bool tictactoe::check_not_win() {
        if((space[1] == space [2]) && (space[2] == space[3])) return false;
        if((space[1] == space [4]) && (space[4] == space[7])) return false;
        if((space[1] == space [5]) && (space[5] == space[9])) return false;
        if((space[2] == space [5]) && (space[5] == space[8])) return false;
        if((space[3] == space [6]) && (space[6] == space[9])) return false;
        if((space[3] == space [5]) && (space[5] == space[7])) return false;
        if((space[4] == space [5]) && (space[5] == space[6])) return false;
        if((space[7] == space [8]) && (space[8] == space[9])) return false;
        return true;
}

void tictactoe::player_input() {
    char m;
        do {
            cout << "Player moves: ";
            cin >> m;
            if (space[m - 48] == m) {
                space[m - 48] = 'X';
            }
        } while (space[m - 48] != 'X');
}

void tictactoe::computer_input() {
    char comp_move;
        while(1 && check_not_win())
        {
            int i = rand() % 9 + 1;
            if (space[i] != 'X' && space[i] != 'O') {
                space[i] = 'O';
                break;
            }
        }
}