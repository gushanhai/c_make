#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SListNode;

void SLTprint(SListNode* phead);//��ӡ����

SListNode* BuySListNode(SLTDataType x);//��ʼ������

void SLTPushBack(SListNode** pphead, SLTDataType x);//β��

void SLTPushFront(SListNode** pphead, SLTDataType x);//ͷ��

void SLTPopBack(SListNode** pphead);//βɾ

void SLTPopFront(SListNode** pphead);//ͷɾ

SListNode* SLTFind(SListNode* phead, SLTDataType x);//����

void SLTInsertAfter(SListNode** ppos,SListNode* pos, SLTDataType x);//��posλ�ú����

void SLTInsert(SListNode** pphead, SListNode* pos, SLTDataType x);//��posλ��֮ǰ����

void SLTEarse(SListNode** pphead,SListNode* pos);//ɾ��posλ��

void SLTEarseAfter(SListNode* pos);//ɾ��pos��һ��λ��

void SLTDistry(SListNode** pphead);//��������
