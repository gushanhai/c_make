#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��Ϸ�Ĳ���
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
	printf("#########   1.�������  ########\n");
	printf("#########   2.��������  ########\n");
	printf("�Ƿ�����:>\n");
	scanf("%d", &xs);
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Printboard(board, ROW, COL);
	char ret;
	switch (xs)
	{
	case 1:
		while (1)
		{
			//�������
			PlayMove(board, ROW, COL);
			Printboard(board, ROW, COL);
			ret = Iswin(board, ROW, COL);
			if (ret != 'C')
				break;
			//��������
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
			//��������
			ComMove(board, ROW, COL);
			Printboard(board, ROW, COL);
			ret = Iswin(board, ROW, COL);
			if (ret != 'C')
				break;
			//�������
			PlayMove(board, ROW, COL);
			Printboard(board, ROW, COL);
			ret = Iswin(board, ROW, COL);
			if (ret != 'C')
		break;
		}
		break;
	}
	if (ret == '*')
		printf("��һ�ʤ��\n");
	if (ret == '#')
		printf("���Ի�ʤ!\n");
	if (ret == 'Q')
		printf("ƽ��!\n");
}
int main()
{	
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ϸ!\n");
			game();
			break;
		case 0:
			printf("�˳�������ϵͳ!\n");
			break;
		default:
			printf("�������������ѡ��!\n");
			break;
		}
	} while (input);
	return 0;
}