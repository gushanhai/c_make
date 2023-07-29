#include"SList.h"
void SLTprint(SListNode* phead)//��ӡ����
{
	SListNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SListNode* BuySListNode(SLTDataType x)//��ʼ������
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

void SLTPushBack(SListNode** pphead, SLTDataType x)//β��
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

void SLTPushFront(SListNode** pphead, SLTDataType x)//ͷ��
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

void SLTPopBack(SListNode** pphead)//βɾ
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

void SLTPopFront(SListNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SListNode* tail = *pphead;
	*pphead = (*pphead)->next;
	free(tail);
	tail = NULL;
}