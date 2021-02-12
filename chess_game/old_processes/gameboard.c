
//
//  gameboard.c
//  test_8_3
//
//  Created by mac on 07/12/2020.
//


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"



void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        // print the row section details
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        // print the seperate linespace

        // the continuous game board settings
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}




void PlayerMove(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    printf("Player please begin: >>>>\n");

    while (1)
    {
        printf("Please insert the coordinate data:>");
            scanf_s("%d %d", &i, &j);


        // judge the validate of coordinate data input
        if (i >= 1 && i <= row  && j >= 1 && j <= col)
        {

            // remove the chess at the same space
            // cancle the same input in memory history
            if (board[i - 1][j - 1] == ' ')
            {
                board[i - 1][j - 1] = '*';
                break;
            }
            else
            {
                printf("This space has been taken by the other player\n");
            }
        }
        else
        {
            printf("Insert wrong!Please try again!\n");
        }
    }
}



void ComputerMove(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    printf("Computer Player Term.\n");

    // the random chess setting
    // the 'rand' function should run based on the outside determine
    // in the mainstream function test-subroutine
    // the rand() % the_value_valid_range//
    while (1)
    {
        i = rand() % row;
        j = rand() % col;

        if (board[i][j] == ' ')
        {
            board[i][j] = 'o';
            break;
        }
    }
}




int FullBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}






char WinGame(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
        }
    }
    for (j = 0; j < col; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
        {
            return board[1][j];
        }
    }

    // for the corner liner
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
        return board[1][1];
    if (board[1][2] == board[1][1] && board[1][1] == board[2][1] && board[1][1] != ' ')
        return board[1][1];

    // judge if the settle game - no win no lose
    if (1 == FullBoard(board, ROW, COL))
    {
        return 'SF';
    }
    return 'N';
}





























