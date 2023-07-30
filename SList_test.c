#include"SList.h"
//test1()
//{
//	int n;
//	printf("请输入链表的长度:\n");
//	scanf("%d", &n);
//	printf("请依次输入每个结点中的值:\n");
//	SListNode* plist = NULL;
//	for (size_t i = 0; i < n; i++)
//	{
//		int val;
//		scanf("%d", &val);
//		SListNode* newnode = BuySListNode(val);
//		newnode->next = plist;
//		plist = newnode;
//		}
//	SLTprint(plist);
//	SLTPushBack(plist, -1);
//	SLTprint(plist);
//}
void test2()
{
	//SListNode* plist = NULL;
	//SLTPushBack(&plist, 1);
    //SLTPushBack(&plist, 2);
	//SLTPushBack(&plist, 3);
	//SLTPushBack(&plist, 4);
	//SLTPushBack(&plist, 5);
	//SLTprint(plist);
	//SLTPushBack(&plist, -1);
	//SLTprint(plist);
	//SLTPushFront(&plist, 6);
	//SLTPushFront(&plist, 7);
	//SLTPushFront(&plist, 8);
	//SLTPushFront(&plist, 9);
	//SLTprint(plist);
	//SLTPopBack(&plist);
	//SLTprint(plist);
	//SLTPopBack(&plist);
	//SLTprint(plist);
	//SLTPopBack(&plist);
	//SLTPopBack(&plist);
	//SLTPopBack(&plist);
	//SLTPopBack(&plist);
	//SLTPopBack(&plist);
	//SLTPopBack(&plist);
	//SLTPopBack(&plist);
	//SLTPopBack(&plist);
	//SLTPopBack(&plist);
	//SLTPopFront(&plist);
	//SLTprint(plist);
}
void test3()
{
	SListNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTprint(plist);
	SListNode* pos = SLTFind(plist, 1);
	SLTInsert(&plist, pos, 0);
	SLTprint(plist);
	SListNode* pos1 = SLTFind(plist, 1);
	SLTInsertAfter(&plist, pos1, 0);
	SLTprint(plist);

}
int main() 
{
	//test1();
	//test2();
	test3();
	return 0;
}