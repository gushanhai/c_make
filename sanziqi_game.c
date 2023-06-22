#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//游戏的实现
#include "sanziqi_game.h"
//将棋盘中的每一个元素都初始化位空格
void Initboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void Printboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		for (int j = 0; j < col; j++)
		{
			if(i<row-1)
			printf("---");
			if (j < col - 1&&i<row-1)
				printf("|");
		}
		printf("\n");
	}
}
//玩家落子
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x=0, y=0;
	printf("请玩家落子:>\n");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x > row || y > col)
		{
			printf("输入不合法，请重新落子!\n");
		}
		if(x<=row&&y<=col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("该位置已落子，请重新落子!\n");
			}
			else
			{
				board[x-1][y-1] = '*';
				break;
			}
		}
	}
}
//电脑落子
void ComMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋 ：>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			printf("%d %d\n", x+1, y+1);
			break;
		} 
	}
}
//判断棋盘是否满了
int is_full(char board[ROW][COL],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
//进行判断是谁赢
char Iswin(char board[ROW][COL], int row, int col)
{
	//行
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
			return board[i][2];
	}
	//列
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
			return board[i][2];
	}
	//从前的对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[1][1];
	//从后的对角线
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
		return board[1][1];
	if (is_full(board,row,col)==1)
		return 'Q';
	return 'C';
}