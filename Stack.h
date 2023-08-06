#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDatatype;
typedef struct Stack
{
	STDatatype* a;
	int top;
	int capacity;
}ST;

void STInit(ST* phead);
void STDestory(ST* phead);
void STPush(ST* phead, STDatatype x);
void STPop(ST* phead);
int STSize(ST* phead);
bool STEmbty(ST* phead);
STDatatype STTop(ST* phead);