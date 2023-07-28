#include"SList.h"
test1()
{
	SListNode s1;
	int n;
	printf("请输入链表的长度:\n");
	scanf("%d", &n);
	printf("请依次输入每个结点中的值:\n");
	SListNode* plist = NULL;
	for (size_t i = 0; i < n; i++)
	{
		int val;
		scanf("%d", &val);
		SListNode* newnode = BuySListNode(val);
		newnode->next = plist;
		plist = newnode;
		}
	SLTprint(plist);
}
int main()
{
	test1();
	return 0;
}