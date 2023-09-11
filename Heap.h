#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

#define HeapDataType int

typedef struct Heap
{
	HeapDataType* arr;
	int size;
	int capacity;
}HP;

void HPInit(HP* php);//��ʼ��
void HPDestroy(HP* php);//����ɾ�������ͷ�
void HPPush(HP* php, HeapDataType x);//����
void HPPrintf(HP* php);//��ӡ��
void Swap(HeapDataType* a1, HeapDataType* a2);//����
void HPPop(HP* php);
HeapDataType HPTop(HP* php);
bool HPEmpty(HP* php);//�п�