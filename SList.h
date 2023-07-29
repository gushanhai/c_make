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