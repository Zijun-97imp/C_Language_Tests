
//
//  gamemain.c
//  test_8_3
//
//  Created by mac on 07/12/2020.
//
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include "game.h"
#include "gameboard.c"

void PlayerMove(char board[ROW][COL], int row, int col);
{
	int x = 0;
	int y = 0;
	printf("Player please begin: >\n");

	while (1)
	{
		printf("Please insert the coordinate data:>");
		scanf("%d%d", &x, &y);


		// judge the validate of coordinate data input
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{

			// remove the chess at the same space
			// cancle the same input in memory history
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'x';
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


