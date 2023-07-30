#include"SList.h"
void SLTprint(SListNode* phead)//打印链表
{
	SListNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SListNode* BuySListNode(SLTDataType x)//初始化链表
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		perror("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPushBack(SListNode** pphead, SLTDataType x)//尾插
{
	SListNode* newnode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SListNode* tail = *pphead;
	while (tail->next) 
	{
		tail = tail->next;
	}
	tail->next = newnode;
	}

}

void SLTPushFront(SListNode** pphead, SLTDataType x)//头插
{
	SListNode* tmp = BuySListNode(x);
	if (tmp == NULL)
	{
		perror("malloc fail\n");
		exit(-1);
	}
	tmp->next = *pphead;
	*pphead = tmp;
}

void SLTPopBack(SListNode** pphead)//尾删
{
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free((*pphead));
		*pphead = NULL;
	}
	else
	{
		SListNode* tail = *pphead;
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

void SLTPopFront(SListNode** pphead)//头删
{
	assert(pphead);
	assert(*pphead);
	SListNode* tail = *pphead;
	*pphead = (*pphead)->next;
	free(tail);
	tail = NULL;
}

SListNode* SLTFind(SListNode* phead, SLTDataType x)//查找
{
	SListNode* tail = phead;
	while (tail)
	{
		if (tail->data == x)
		{
			return tail;
		}
		tail = tail->next;
	}
	return NULL;
}

void SLTInsertAfter(SListNode** ppos, SListNode* pos, SLTDataType x)//在pos位置后插入
{
	assert(ppos);
	if (pos == *ppos)
	{
		//头插
		SListNode* newnode = BuySListNode(x);
		newnode->next = pos;
		*ppos = newnode;
	}
	SListNode* tail = pos;
	SListNode* aa = tail->next;
	SListNode* newnode = BuySListNode(x);
	tail->next = newnode;
	newnode->next = aa;
	tail = NULL;
	newnode = NULL;
	aa = NULL;
}

void SLTInsert(SListNode** pphead, SListNode* pos, SLTDataType x)//在pos位置之前插入
{
	assert(pphead);
	SListNode* phead = *pphead;
	if (pos == phead)
	{
		SListNode* newnode = BuySListNode(x);
		newnode->next = phead;
		*pphead = newnode;
		return;
	}
	while (phead)
	{
		if (phead->next == pos)
		{					
			SListNode* newnode = BuySListNode(x);
			newnode->next = phead->next;
			phead->next = newnode;
			return;
		}
		phead = phead->next;
	}
}

void SLTEarse(SListNode** pphead, SListNode* pos);//删除pos位置

void SLTEarseAfter(SListNode* pos);//删除pos后一个位置