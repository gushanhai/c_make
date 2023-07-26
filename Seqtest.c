#include"Seqlist.h"
//void test1()
//{
//	SL s1;
//	SLInit(&s1);
//	SLPushBack(&s1, 1);
//	SLPushBack(&s1, 2);
//	SLPushBack(&s1, 3);
//	SLPushBack(&s1, 4);
//	SLPushBack(&s1, 5);
//	SLPushBack(&s1, 6);
//	SLPushBack(&s1, 7);
//	SLPushBack(&s1, 8);
//	SLPushBack(&s1, 9);
//	SPrint(&s1);//打印
//	SLPopBack(&s1);
//	SLPopBack(&s1);
//	SLPopBack(&s1);
//	SLPopBack(&s1);
//	SLPopBack(&s1);
//	SLPopBack(&s1);
//	SLPopBack(&s1);
//	SPrint(&s1);//打印
//	SLPushBack(&s1, 4);
//	SLPushBack(&s1, 5);
//	SLPushBack(&s1, 6);
//	SLPushBack(&s1, 7);
//	SLPushBack(&s1, 8);
//	SLPushBack(&s1, 9);
//	SPrint(&s1);//打印
//	SLDestroy(&s1);
//}

//void test2()
//{
//	SL s1;
//	SLInit(&s1);
//	SLPushBack(&s1, 8);
//	SLPushFront(&s1, 7);
//	SLPushFront(&s1, 6);
//	SLPushFront(&s1, 5);
//	SLPushFront(&s1, 4);
//	SLPushFront(&s1, 3);
//	SLPushFront(&s1, 2);
//	SLPushFront(&s1, 1);
//	SLPushFront(&s1, 4);
//	SLPushFront(&s1, 3);
//	SLPushFront(&s1, 2);
//	SLPushFront(&s1, 1);
//	SPrint(&s1);//打印
//	SLPopFront(&s1);
//	SLPopFront(&s1);
//	SLPopFront(&s1);
//	SLPopFront(&s1);
//	SLPopFront(&s1);
//	SLPopFront(&s1);
//	SLPopFront(&s1);
//	SPrint(&s1);//打印
//	SLDestroy(&s1);
//}

//void test3()
//{
//	SL s1;
//	SLInit(&s1);
//	SLPushBack(&s1, 1);
//	SLPushBack(&s1, 2);
//	SLPushBack(&s1, 3);
//	SLPushBack(&s1, 4);
//	SLPushBack(&s1, 5);
//	SLPushBack(&s1, 6);
//	SPrint(&s1);
//	SLInsert(&s1, 3, 30);
//	SPrint(&s1);
//	SLEarse(&s1, 3);
//	SPrint(&s1);
//	SLDestroy(&s1);
//	//SLDestroy(&s1);
//}

void test4()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);
	SLPushBack(&s1, 6);
	SLPopFront(&s1);
	SLPopFront(&s1, -2);
	SPrint(&s1);
	SLPushFront(&s1, -1);
	SLPushFront(&s1, -2);
	SPrint(&s1);
	int x;
	printf("请输入要修改的数字:>\n");
	scanf("%d", &x);
	int pos = SLFind(&s1, x);
	if (pos != -1)
	{
		int b;
		printf("请输入修改后的数字:>\n");
		scanf("%d", &b);
		SLModify(&s1, pos, b);
	}
	SPrint(&s1);
	SLDestroy(&s1);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}