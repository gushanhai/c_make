#include"List.h"
void test1()
{
	DL* plist = NULL;
	plist = BuyListNode(0);
	DLPushBack(plist, 1);
	DLPushBack(plist, 2);
	DLPushBack(plist, 3);
	DLPushBack(plist, 4);
	DLPushBack(plist, 5);
	DLPrint(plist);
	DLPopBack(plist);
	DLPrint(plist);
	DLPopFront(plist);
	DLPrint(plist);
	DL* cur = DLFind(plist, 4);
	DLInsert(plist, cur, 3);
	DLPrint(plist);
	DL* curr = DLFind(plist, 3);
	DLEarsr(plist, curr);
	DLPrint(plist);
	int sz = DLSize(plist);
	printf("%d", sz);
}
int main()
{
	test1();
}