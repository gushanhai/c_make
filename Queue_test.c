#include "Queue.h"

void test1()
{
	Queue q1;
	QInit(&q1);
	QPush(&q1, 1);
	QPush(&q1, 2);
	QPush(&q1, 3);
	QPush(&q1, 4);
	QPush(&q1, 5);
	QPop(&q1);
	QPrint(&q1);
	QDestry(&q1);
	QPrint(&q1);
}

int main()
{
	test1();
	return 0;
}