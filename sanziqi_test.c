#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//游戏的测试
#include "sanziqi_game.h"
#include<stdio.h>
void menu()
{
	printf("###############################\n");
	printf("##########   1.play   #########\n");
	printf("##########   0.exit   #########\n");
	printf("###############################\n");
}
void game()
{
	int xs;
	printf("#########   1.玩家先手  ########\n");
	printf("#########   2.电脑先手  ########\n");
	printf("是否先手:>\n");
	scanf("%d", &xs);
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	Printboard(board, ROW, COL);
	char ret;
	switch (xs)
	{
	case 1:
		while (1)
		{
			//玩家下棋
			PlayMove(board, ROW, COL);
			Printboard(board, ROW, COL);
			ret = Iswin(board, ROW, COL);
			if (ret != 'C')
				break;
			//电脑下棋
			ComMove(board, ROW, COL);
			Printboard(board, ROW, COL);
			ret = Iswin(board, ROW, COL);
			if (ret != 'C')
				break;
		}
		break;
	case 2:
		while (1)
		{
			//电脑下棋
			ComMove(board, ROW, COL);
			Printboard(board, ROW, COL);
			ret = Iswin(board, ROW, COL);
			if (ret != 'C')
				break;
			//玩家下棋
			PlayMove(board, ROW, COL);
			Printboard(board, ROW, COL);
			ret = Iswin(board, ROW, COL);
			if (ret != 'C')
		break;
		}
		break;
	}
	if (ret == '*')
		printf("玩家获胜！\n");
	if (ret == '#')
		printf("电脑获胜!\n");
	if (ret == 'Q')
		printf("平局!\n");
}
int main()
{	
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进入游戏!\n");
			game();
			break;
		case 0:
			printf("退出三子棋系统!\n");
			break;
		default:
			printf("输入错误，请重新选择!\n");
			break;
		}
	} while (input);
	return 0;
}