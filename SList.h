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

void SLTprint(SListNode* phead);//打印链表

SListNode* BuySListNode(SLTDataType x);//初始化链表

void SLTPushBack(SListNode** pphead, SLTDataType x);//尾插

void SLTPushFront(SListNode** pphead, SLTDataType x);//头插

void SLTPopBack(SListNode** pphead);//尾删

void SLTPopFront(SListNode** pphead);//头删

SListNode* SLTFind(SListNode* phead, SLTDataType x);//查找

void SLTInsertAfter(SListNode** ppos,SListNode* pos, SLTDataType x);//在pos位置后插入

void SLTInsert(SListNode** pphead, SListNode* pos, SLTDataType x);//在pos位置之前插入

void SLTEarse(SListNode** pphead,SListNode* pos);//删除pos位置

void SLTEarseAfter(SListNode* pos);//删除pos后一个位置

void SLTDistry(SListNode** pphead);//销毁链表
