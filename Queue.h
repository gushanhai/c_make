#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;

typedef struct QueueNode
{
	struct Queue* next;
	QDataType val;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Queue;

void QPrint(Queue* ps);

void QInit(Queue* ps);

void QDestry(Queue* ps);

void QPush(Queue* ps, QDataType x);

void QPop(Queue* ps);

QDataType QFront(Queue* ps);

QDataType QBcak(Queue* ps);

int QSize(Queue* ps);

bool QEmpty(Queue* ps);