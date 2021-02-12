
//
//  game.h
//  test_8_3
//
//  Created by mac on 07/12/2020.
//

#include <stdio.h>

#define ROW 3
#define COL 3

// the function with main stream system in 'test_8_3_main.c'
// announcement of game function

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

// judge the game who is winner
// the different situations of the game:
//* the player win '*'
//* the computer win 'o'
//* the settle 'SF'
//*please continue 'N'

char WinGame(char board[ROW][COL], int row, int col);
