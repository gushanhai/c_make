#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
void play()
{
	int a = 0;
	int b = rand() % 100 + 1;

	while (1)
	{
		printf("��²�:");
		scanf("%d", &a);
		if (a > b)
		{
			printf("�´���\n");
		}
		else if (a < b)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
void menu()
{
	printf("###########################\n");
	printf("###1.play        0.exit####\n");
	printf("###########################\n");
}
int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("�Ƿ������Ϸ");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			play();
			printf("������Ϸ!\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (a);
	return 0;
}