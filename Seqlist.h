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

void SLInit(SL* ps);//��ʼ��

void SLDestroy(SL* ps);//����

void SLPushBack(SL* ps, SlDataType x);//β��

void SLPopBack(SL* ps);//βɾ

void SLPushFront(SL* ps, SlDataType x);//ͷ��

void SLPopFront(SL* ps);//ͷɾ

void SPrint(SL* ps);//��ӡ

void SLInsert(SL* ps, int pos, SlDataType x);//��posλ�ò���һ��x

void SLEarse(SL* ps, int pos); //��posλ��ɾ��һ��ֵ

void SLModify(SL* ps, int pos, SlDataType x);//��posλ�ô���ֵ�޸�

int SLFind(SL* ps, SlDataType x);
