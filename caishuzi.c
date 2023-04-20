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
		printf("请猜测:");
		scanf("%d", &a);
		if (a > b)
		{
			printf("猜大了\n");
		}
		else if (a < b)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
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
		printf("是否进入游戏");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			play();
			printf("进入游戏!\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (a);
	return 0;
}