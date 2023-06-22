#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��Ϸ��ʵ��
#include "sanziqi_game.h"
//�������е�ÿһ��Ԫ�ض���ʼ��λ�ո�
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
//��ӡ����
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
//�������
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x=0, y=0;
	printf("���������:>\n");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x > row || y > col)
		{
			printf("���벻�Ϸ�������������!\n");
		}
		if(x<=row&&y<=col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("��λ�������ӣ�����������!\n");
			}
			else
			{
				board[x-1][y-1] = '*';
				break;
			}
		}
	}
}
//��������
void ComMove(char board[ROW][COL], int row, int col)
{
	printf("�������� ��>\n");
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
//�ж������Ƿ�����
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
//�����ж���˭Ӯ
char Iswin(char board[ROW][COL], int row, int col)
{
	//��
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
			return board[i][2];
	}
	//��
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
			return board[i][2];
	}
	//��ǰ�ĶԽ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[1][1];
	//�Ӻ�ĶԽ���
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
		return board[1][1];
	if (is_full(board,row,col)==1)
		return 'Q';
	return 'C';
}