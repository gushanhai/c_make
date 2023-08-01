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
	assert(pphead);
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
	assert(pphead);
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
	assert(*pphead&&pphead);
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

void SLTPopFront(SListNode** pphead)//ͷɾ
{
	assert(pphead&&*pphead);
	SListNode* tail = *pphead;
	*pphead = (*pphead)->next;
	free(tail);
	tail = NULL;
}

SListNode* SLTFind(SListNode* phead, SLTDataType x)//����
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

void SLTInsertAfter(SListNode** ppos, SListNode* pos, SLTDataType x)//��posλ�ú����
{
	assert(ppos);
	if (pos == *ppos)
	{
		//ͷ��
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

void SLTInsert(SListNode** pphead, SListNode* pos, SLTDataType x)//��posλ��֮ǰ����
{
	assert(pphead&&pos);
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

void SLTEarse(SListNode** pphead, SListNode* pos)//ɾ��posλ��
{
	assert(pphead&&pos);
	SListNode* phead = *pphead;
	if (pos == phead)
	{
		*pphead = phead->next;
	}
	else
	{
	while (phead)
	{
		if (phead->next == pos)
		{
		phead->next = pos->next;
		}
		phead = phead->next;
	}
	}
	free(phead);
	phead = NULL;
}

void SLTEarseAfter(SListNode* pos)//ɾ��pos��һ��λ��
{
	assert(pos);
	if (pos->next == NULL)
	{
		return;
	}
	else
	{
		SListNode* posNext = pos->next;
		pos->next = pos->next->next;
		free(posNext);
		posNext = NULL;
	}
}

void SLTDistry(SListNode** pphead)//��������
{
	SListNode* plist = *pphead;
	while (plist)
	{
		SListNode* next = plist->next;
		free(plist);
		plist = next;
	}
	*pphead = NULL;
}