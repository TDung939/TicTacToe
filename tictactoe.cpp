#include <iostream>
#include <string.h>
#include <cstdlib>
#include "tictactoe.h"
using namespace std;

//Prototypes
void is_valid_move(char move);
bool check_not_win();
//void computer_move();

int main() {
    tictactoe game;
    game.draw_board();
    do {
        game.player_input();
        game.computer_input();
        game.draw_board();
    } while (game.check_not_win());
    
    return 0;
}




