#include"SList.h"
//test1()
//{
//	int n;
//	printf("����������ĳ���:\n");
//	scanf("%d", &n);
//	printf("����������ÿ������е�ֵ:\n");
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
	SListNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	//SLTPushBack(&plist, 3);
	//SLTPushBack(&plist, 4);
	//SLTPushBack(&plist, 5);
	SLTprint(plist);
	//SLTPushBack(&plist, -1);
	//SLTprint(plist);
	//SLTPushFront(&plist, 6);
	//SLTPushFront(&plist, 7);
	//SLTPushFront(&plist, 8);
	//SLTPushFront(&plist, 9);
	//SLTprint(plist);
	SLTPopBack(&plist);
	SLTprint(plist);
	SLTPopBack(&plist);
	SLTprint(plist);
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
int main() 
{
	//test1();
	test2();
	return 0;
}