#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define max 4

typedef int SlDataType;
typedef struct SeqList
{
	SlDataType* a;
	int size;
	int capacity;
}SL;

void SLInit(SL* ps);//初始化

void SLDestroy(SL* ps);//销毁

void SLPushBack(SL* ps, SlDataType x);//尾插

void SLPopBack(SL* ps);//尾删

void SLPushFront(SL* ps, SlDataType x);//头插

void SLPopFront(SL* ps);//头删

void SPrint(SL* ps);//打印

void SLInsert(SL* ps, int pos, SlDataType x);//在pos位置插入一个x

void SLEarse(SL* ps, int pos); //在pos位置删除一个值

void SLModify(SL* ps, int pos, SlDataType x);//将pos位置处的值修改

int SLFind(SL* ps, SlDataType x);
