#include"List.h"
void DLPrint(DL* phead)//��ӡ
{
	DL* plist = phead->next;
	while (plist!= phead)
	{
		printf("%d<=>", plist->var);
		plist = plist->next;
	}
	printf("NULL");
	printf("\n");
}
DL* BuyListNode(DLDdatatype x)//������
{
	DL* phead = (DL*)malloc(sizeof(DL));
	if (phead == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	phead->next = phead;
	phead->var = x;
	phead->perv = phead;
	return phead;
}

void DLPushBack(DL* phead, DLDdatatype x)//β��
{
	assert(phead);
	DL* tail = phead->perv;
	DL* newnode = BuyListNode(x);
	newnode->next = phead;
	newnode->perv = tail;
	tail->next = newnode;
	phead->perv = newnode;
}

void DLPushFront(DL* phead, DLDdatatype x)//ͷ��
{
	assert(phead);
	DL* next = phead->next;
	DL* newnode = BuyListNode(x);
	phead->next = newnode;
	newnode->perv = phead;
	newnode->next = next;
	next->perv = newnode;
}

void DLPopBack(DL* phead)//βɾ
{
	assert(phead && phead->next != phead);
	DL* tail = phead->perv->perv;
	free(phead->perv);
	tail->next = phead;
	phead->perv = tail;
	tail = NULL;
}

void DLPopFront(DL* phead)//ͷɾ
{
	assert(phead && phead->next != phead);
	DL* plist = phead->next;
	phead->next = phead->next->next;
	phead->next->perv = phead;
	free(plist);
	plist = NULL;
}

DL* DLFind(DL* phead, int x)//Ѱ��
{
	DL* plist = phead->next;
	while (plist != phead)
	{
		if (plist->var == x)
			return plist;
		plist = plist->next;
	}
	return NULL;
}

void DLInsert(DL* phead, DL* pos, DLDdatatype x)//��posλ�ò���
{
	assert(phead && pos);
	DL* tail = pos->perv;
	DL* newnode = BuyListNode(x);
	newnode->next = pos;
	pos->perv = newnode;
	tail->next = newnode;
	newnode->perv = tail;
}

void DLEarsr(DL* phead, DL* pos)//ɾ��posλ�ý��
{
	assert(phead && pos);
	DL* tail = pos->perv;
	tail->next = pos->next;
	phead->perv = tail;
	free(pos);
}

int DLSize(DL* phead)//������
{
	assert(phead);
	DL* plist = phead->next;
	int sz = 0;
	while (plist != phead)
	{
		sz++;
		plist = plist->next;
	}
	return sz;
}

void DLDestion(DL* phead)
{
	DL* plist = phead->next;
	phead->next = phead;
	phead->perv = phead;
	DL* cur = NULL;
	while (plist!=phead)
	{
		cur = plist;
		plist = plist->next;
		cur->next = cur;
		cur->perv = cur;
		free(cur);
	}
}
