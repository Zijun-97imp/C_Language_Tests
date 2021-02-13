//
//  test_8_3_main.c
//  test_8_3
//
//  Created by mac on 07/12/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

// the chess game trying
// the menu of this game
void menu()
{
    printf("*******************************************************\n");
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
void game()
{
    char board[ROW][COL] = {'a'};    // the chess board forming
    
    // Initialise the chess board - the relevant variable of this game
    // InitBoard(board , ROW , COL); // - exam the initial board situation
    // Print the chess board
    DisplayBoard(board , ROW , COL);
    
}




// the test function of this chess game
void test()
{
    int input = 0;
    do {
        
        menu();
        printf("Please make a choice:>");
        scanf("%d" , &input);
        switch (input)
        {
            case 1:
                printf("Game loading ......\n");
                game();
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
    test ();
    return 0;
}
