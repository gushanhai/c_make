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
//
//	SLPushFront(&s1, 7);
//	SLPushFront(&s1, 6);
//	SLPushFront(&s1, 5);
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
void test3()
{
	SL s1;
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 4);
	SLInsert(&s1, 2, 3);
	SPrint(&s1);
	SLDestroy(&s1);
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}