#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<time.h>
#include<string.h>

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
void Adjustdown(HeapDataType* arr, int n, int parent);//���µ���
void Adjustup(HeapDataType* arr, int child);//���ϵ���
void HPInitArry(HP* php, int* arr, int n);//��������������г�ʼ�����ҽ��н���
