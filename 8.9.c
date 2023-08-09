#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//请你仅使用两个队列实现一个后入先出（LIFO）的栈，并支持普通栈的全部四种操作（push、top、pop 和 empty）。
//typedef int QDataType;
//
//typedef struct QueueNode
//{
//	struct Queue* next;
//	QDataType val;
//}QNode;
//
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//	int size;
//}Queue;
//
//void QPrint(Queue* ps);
//
//void QInit(Queue* ps);
//
//void QDestry(Queue* ps);
//
//void QPush(Queue* ps, QDataType x);
//
//void QPop(Queue* ps);
//
//QDataType QFront(Queue* ps);
//
//QDataType QBcak(Queue* ps);
//
//int QSize(Queue* ps);
//
//bool QEmpty(Queue* ps);
//
//void QPrint(Queue* ps)
//{
//	QNode* cur = ps->head;
//	while (cur)
//	{
//		QNode* next = cur->next;
//		printf("%d ", cur->val);
//		cur = next;
//	}
//	if (cur == NULL)
//		printf("NULL");
//	printf("\n");
//}
//void QInit(Queue* ps)
//{
//	assert(ps);
//	ps->head = ps->tail = NULL;
//	ps->size = 0;
//}
//
//void QDestry(Queue* ps)
//{
//	assert(ps);
//	QNode* cur = ps->head;
//	while (cur)
//	{
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	ps->head = ps->tail = NULL;
//	ps->size = 0;
//}
//
//void QPush(Queue* ps, QDataType x)
//{
//	assert(ps);
//	QNode* tmp = (QNode*)malloc(sizeof(QNode));
//	if (tmp == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//	tmp->next = NULL;
//	tmp->val = x;
//	if (ps->head == NULL && ps->tail == NULL)
//		ps->head = ps->tail = tmp;
//	else
//	{
//		ps->tail->next = tmp;
//		ps->tail = tmp;
//	}
//	ps->size++;
//}
//
//void QPop(Queue* ps)
//{
//	assert(ps && !QEmpty(ps));
//	Queue* next = ps->head->next;
//	if (ps->head == ps->tail)
//	{
//		free(ps->head);
//		ps->head = ps->tail = NULL;
//	}
//	else
//	{
//		free(ps->head);
//		ps->head = next;
//	}
//	ps->size--;
//}
//
//QDataType QFront(Queue* ps)
//{
//	assert(ps);
//	assert(!QEmpty(ps));
//	return ps->head->val;
//}
//
//QDataType QBcak(Queue* ps)
//{
//	assert(ps);
//	assert(!QEmpty(ps));
//	return ps->tail->val;
//}
//
//int QSize(Queue* ps)
//{
//	assert(ps);
//	assert(!QEmpty(ps));
//	return ps->size;
//}
//
//bool QEmpty(Queue* ps)
//{
//	assert(ps);
//	return ps->tail == NULL;
//}
//
//
//typedef struct {
//	Queue q1;
//	Queue q2;
//} MyStack;
//
//
//MyStack* myStackCreate()
//{
//	MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
//	QInit(&pst->q1);
//	QInit(&pst->q2);
//	return pst;
//}
//
//void myStackPush(MyStack* obj, int x) {
//	assert(obj);
//	if (!QEmpty(&obj->q1))
//	{
//		QPush(&obj->q1, x);
//	}
//	else
//	{
//		QPush(&obj->q2, x);
//	}
//}
//
//int myStackPop(MyStack* obj) {
//	assert(obj);
//	Queue* null = &obj->q1;
//	Queue* nonull = &obj->q2;
//	if (!QEmpty(&obj->q1))
//	{
//		null = &obj->q2;
//		nonull = &obj->q1;
//	}
//	while (QSize(nonull) > 1)
//	{
//		QPush(null, QFront(nonull));
//		QPop(nonull);
//	}
//	int top = QFront(nonull);
//	QPop(nonull);
//	return top;
//}
//
//int myStackTop(MyStack* obj) {
//	if (!QEmpty(&obj->q1))
//		return QBcak(&obj->q1);
//	else
//		return QBcak(&obj->q2);
//}
//
//bool myStackEmpty(MyStack* obj) {
//	return QEmpty(&obj->q1) && QEmpty(&obj->q2);
//}
//
//void myStackFree(MyStack* obj) {
//	QDestry(&obj->q1);
//	QDestry(&obj->q2);
//}
//
///**
// * Your MyStack struct will be instantiated and called as such:
// * MyStack* obj = myStackCreate();
// * myStackPush(obj, x);
//
// * int param_2 = myStackPop(obj);
//
// * int param_3 = myStackTop(obj);
//
// * bool param_4 = myStackEmpty(obj);
//
// * myStackFree(obj);
//*/