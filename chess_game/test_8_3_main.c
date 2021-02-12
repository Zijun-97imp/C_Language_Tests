//
//  test_8_3_main.c
//  test_8_3
//
//  Created by mac on 07/12/2020.
//

#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

// the chess game trying
// the menu of this game
void menu()
{
    printf("*******************************************************\n");
    printf("**********Welcome to play this chess game!*************\n");
    printf("***************1. play    0. exit**********************\n");
    printf("*******************************************************\n");
}





//                                  the predict board:
//                                        |   |
//                                     ---|---|---
//                                        |   |
//                                     ---|---|---
//                                        |   |
// the main stream of the game - void no return type function
// the sample of setting the chess:
//                                      * | o | *
//                                     ---|---|---
//                                      o | * | *
//                                     ---|---|---
//                                      o | * | o
void gameboard()
{
    char ret = 0; // the return value of function 'WinGame' to judge the situations


    char board[ROW][COL] = {0};    // the chess board forming - all in space



    // Initialise the chess board - the relevant variable of this game
    InitBoard(board , ROW, COL); // - exam the initial board situation
    // Print the chess board
    DisplayBoard(board, ROW, COL);
    // Play the game processes



    // Mainstream inside the game
    // Insert the value of begining
    while (1)
    {
        // the player begin the set in the gameboard array
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        // judge the player is win or not
        ret = WinGame(board, ROW, COL);
        if (ret != 'N')
        {
            break;
        }


        // setup the computer player role
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        // judge the computer is win or not
        ret = WinGame(board, ROW, COL);
        if (ret != 'N')
        {
            break;
        }
    }

    if (ret == '*')
    {
        printf("Player Win!\n");
    }
    else if (ret == 'o')
    {
        printf("Computer Win!\n");
    }
    else
    {
        printf("The game is settled~~\n");
    }

}






// the test function of this chess game
void test()
{
    int input = 0;
    // FOR THE rand() function applied at the 'gameboard.c'
    srand((unsigned int)time(NULL));
    do 
    {
        menu();
        printf("Please make a choice:>");
        scanf_s("%d", &input);
        switch (input)
        {
        case 1:
            printf("Game loading ......\n");
            gameboard();
            break;
        case 0:

            printf("Exist the game.\n");
            break;
        default:

            printf("Insert error! Please select again!\n");
            break;
        }

    } while (input);
}





int main()
{
    test();
    return 0;
}
