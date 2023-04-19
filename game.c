//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//#include"game.h"
//#include<stdio.h>
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int a = 0;
//	//初始化
//	for (a = 0; a < row; a++)
//	{
//		int b = 0;
//		for (b = 0; b < col; b++)
//		{
//			board[a][b] = ' ';
//		}
//	}
//}
///*   |   |
//  ---|---|---
//	 |   |
//  ---|---|---
//	 |   | */
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//		}
//		printf("\n");
//	}
//}
//void PlayMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("玩家走");
//	while (1)
//	{
//		printf("请输入要下的坐标:");
//		scanf("%d%d", &x, &y);
//		//判断x，y的坐标的合法性
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			//判断输入的坐标是否已经落子
//			if (board[x - 1][y - 1] == ' ')
//			{
//				//如果输入的坐标没有落子就在该坐标进行落子
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("该坐标已经落子，请重新输入!");
//				break;
//			}
//		}
//		else
//		{
//			printf("坐标非法，请重新输入!");
//			break;
//		}
//	}
//}
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("电脑走:\n");
//	while (1)
//	{
//		x = rand() % row;
//		y = rand() % col;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
//int  IsFull(char board[ROW][COL], int row, int col)
//{
//	int b = 0;
//	int a = 0;
//	for (a = 0; a < row; a++)
//	{
//		for (b = 0; b < col; b++)
//		{
//			if (board[a][b] == ' ')
//				return 0;
//		}
//	}
//	return 1;
//}
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < row; a++)
//	{
//		//横三行
//		if (board[a][0] == board[a][1] && board[a][1] == board[a][2] && board[a][2] == board[a][3] && board[a][3] == board[a][
//			4] && board[a][4] == board[a][5] && board[a][5] != ' ')
//		{
//			return board[a][4];
//
//		}
//	}
//	for (b = 0; b < col; b++)
//	{
//		//竖三行
//		if (board[0][b] == board[1][b] && board[1][b] == board[2][b] && board[2][b] == board[3][b] && board[3][b] == board[4][b] && board[4][b] == board[5][b] && board[5][b] != ' ')
//		{
//			return board[4][b];
//
//		}
//	}
//	//对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == board[3][3] && board[3][3] == board[4][4] && board[4][4] != ' ')
//	{
//		return board[4][4];
//
//	}
//	else if (board[0][4] == board[1][3] && board[1][3] == board[2][2] && board[2][2] == board[3][1] && board[3][1] == board[4][0] && board[4][0] != ' ')
//	{
//		return board[4][0];
//
//	}
//	if (1 == IsFull(board, ROW, COL))
//	{
//		return 'Q';
//	}
//	return 'c';
//}