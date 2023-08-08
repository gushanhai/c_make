#include"Queue.h"

void QPrint(Queue* ps)
{
	QNode* cur = ps->head;
	while (cur)
	{
		QNode* next = cur->next;
		printf("%d ", cur->val);
		cur = next;
	}
	if (cur == NULL)
		printf("NULL");
	printf("\n");
}
void QInit(Queue* ps)
{
	assert(ps);
	ps->head = ps->tail = NULL;
	ps->size = 0;
}

void QDestry(Queue* ps)
{
	assert(ps);
	QNode* cur = ps->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	ps->head = ps->tail = NULL;
	ps->size = 0;
}

void QPush(Queue* ps, QDataType x)
{
	assert(ps);
	QNode* tmp = (QNode*)malloc(sizeof(QNode));
	if (tmp == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	tmp->next = NULL;
	tmp->val = x;
	if (ps->head == NULL && ps->tail == NULL)
		ps->head = ps->tail = tmp;
	else
	{
		ps->tail->next = tmp;
		ps->tail = tmp;
	}
	ps->size++;
}

void QPop(Queue* ps)
{
	assert(ps && !QEmpty(ps));
	Queue* next = ps->head->next;
	if (ps->head == ps->tail)
	{
		free(ps->head);
		ps->head = ps->tail = NULL;
	}
	else
	{
	free(ps->head);
	ps->head = next;
	}
	ps->size--;
}

QDataType QFront(Queue* ps)
{
	assert(ps);
	assert(!QEmpty(ps));
	return ps->head->val;
}

QDataType QBcak(Queue* ps)
{
	assert(ps);
	assert(!QEmpty(ps));
	return ps->tail->val;
}

int QSize(Queue* ps)
{
	assert(ps);
	assert(!QEmpty(ps));
	return ps->size;
}

bool QEmpty(Queue* ps)
{
	assert(ps);
	return ps->tail == NULL;
}