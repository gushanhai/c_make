#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DLDdatatype;
typedef struct DList
{
	DLDdatatype var;
	struct DList* next;
	struct DList* perv;
}DL;
void DLPrint(DL* phead);

DL* BuyListNode(DLDdatatype x);//������

void DLPushBack(DL* phead, DLDdatatype x);

void DLPushFront(DL* phead, DLDdatatype x);

void DLPopBack(DL* phead);//βɾ

void DLPopFront(DL* phead);//ͷɾ

DL* DLFind(DL* phead, int x);//Ѱ��

void DLInsert(DL* phead, DL* pos, DLDdatatype x);//��posλ�ò���

void DLEarsr(DL* phead, DL* pos);//ɾ��posλ�ý��

int DLSize(DL* phead);//������