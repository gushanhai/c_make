//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//#include"game.h"
//#include<stdio.h>
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int a = 0;
//	//��ʼ��
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
//	printf("�����");
//	while (1)
//	{
//		printf("������Ҫ�µ�����:");
//		scanf("%d%d", &x, &y);
//		//�ж�x��y������ĺϷ���
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			//�ж�����������Ƿ��Ѿ�����
//			if (board[x - 1][y - 1] == ' ')
//			{
//				//������������û�����Ӿ��ڸ������������
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("�������Ѿ����ӣ�����������!");
//				break;
//			}
//		}
//		else
//		{
//			printf("����Ƿ�������������!");
//			break;
//		}
//	}
//}
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("������:\n");
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
//		//������
//		if (board[a][0] == board[a][1] && board[a][1] == board[a][2] && board[a][2] == board[a][3] && board[a][3] == board[a][
//			4] && board[a][4] == board[a][5] && board[a][5] != ' ')
//		{
//			return board[a][4];
//
//		}
//	}
//	for (b = 0; b < col; b++)
//	{
//		//������
//		if (board[0][b] == board[1][b] && board[1][b] == board[2][b] && board[2][b] == board[3][b] && board[3][b] == board[4][b] && board[4][b] == board[5][b] && board[5][b] != ' ')
//		{
//			return board[4][b];
//
//		}
//	}
//	//�Խ���
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