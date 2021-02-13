
//
//  game.c
//  test_8_3
//
//  Created by mac on 07/12/2020.
//
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"


void InitBoard(char board[ROW][COL], int row , int col)
{
    int i = 0;
    int j = 0;
    for (i = 0 ; i < row ; i++)
    {
        for (j = 0 ; j < col ; j++)
        {
            board[i][j] = ' ';
        }
    }
}


void DisplayBoard(char board[ROW][COL], int row , int col)
{
    int i = 0;
    for (i = 0 ; i < row ; i++)
    {
        // print the data of first row
        printf(" %c | %c | %c \n" , board[i][0] , board[i][1] , board[i][2]);
        // print the seperate linespace
        if (i < row-1)
            printf("---|---|---\n");
    }
}




