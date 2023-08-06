#include"Stack.h"
void test1()
{
	ST st;
	STInit(&st);
	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	STPush(&st, 5);
	while (!STEmbty(&st))
	{
		printf("%d ", STTop(&st));
		STPop(&st);
	}
	STDestory(&st);
}
int main()
{
	test1();
}