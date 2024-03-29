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

void HPInit(HP* php);//初始化
void HPDestroy(HP* php);//将堆删除并且释放
void HPPush(HP* php, HeapDataType x);//插入
void HPPrintf(HP* php);//打印堆
void Swap(HeapDataType* a1, HeapDataType* a2);//交换
void HPPop(HP* php);
HeapDataType HPTop(HP* php);
bool HPEmpty(HP* php);//判空
void Adjustdown(HeapDataType* arr, int n, int parent);//向下调整
void Adjustup(HeapDataType* arr, int child);//向上调整
void HPInitArry(HP* php, int* arr, int n);//将给定的数组进行初始化并且进行建堆
