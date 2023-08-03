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

DL* BuyListNode(DLDdatatype x);//申请结点

void DLPushBack(DL* phead, DLDdatatype x);

void DLPushFront(DL* phead, DLDdatatype x);

void DLPopBack(DL* phead);//尾删

void DLPopFront(DL* phead);//头删

DL* DLFind(DL* phead, int x);//寻找

void DLInsert(DL* phead, DL* pos, DLDdatatype x);//在pos位置插入

void DLEarsr(DL* phead, DL* pos);//删除pos位置结点

int DLSize(DL* phead);//链表长度