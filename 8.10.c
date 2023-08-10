#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

//�����ʹ������ջʵ�������ȳ����С�����Ӧ��֧��һ�����֧�ֵ����в�����push��pop��peek��empty����
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

void STInit(ST* phead)
{
	assert(phead);
	phead->a = NULL;
	phead->capacity = 0;
	phead->top = 0;
}
void STDestory(ST* phead)
{
	assert(phead);
	free(phead->a);
	phead->a = NULL;
	phead->capacity = 0;
	phead->top = 0;
}
void STPush(ST* phead, STDatatype x)
{
	assert(phead);

	if (phead->top == phead->capacity)
	{
		int newcapacity = phead->capacity == 0 ? 4 : phead->capacity * 2;
		STDatatype* newnode = (STDatatype*)realloc(phead->a, sizeof(STDatatype) * newcapacity);
		if (newnode == NULL)
		{
			perror("malloc fail");
			exit(-1);
		}
		phead->a = newnode;
		phead->capacity = newcapacity;
	}
	phead->a[phead->top] = x;
	phead->top++;
}
void STPop(ST* phead)
{
	assert(phead);
	assert(phead->top);
	phead->top--;
}

int STSize(ST* phead)
{
	assert(phead);
	return phead->top;
}

bool STEmbty(ST* phead)
{
	assert(phead);
	return phead->top == 0;
}

STDatatype STTop(ST* phead)
{
	assert(phead);
	assert(phead->top);
	return phead->a[phead->top - 1];
}

typedef struct {
	ST pushstack;
	ST popstack;
} MyQueue;


MyQueue* myQueueCreate() {
	MyQueue* list = (MyQueue*)malloc(sizeof(MyQueue));
	STInit(&list->pushstack);
	STInit(&list->popstack);
	return list;
}

void myQueuePush(MyQueue* obj, int x) {
	STPush(&obj->pushstack, x);
}


int myQueuePeek(MyQueue* obj) {
	if (STEmbty(&obj->popstack))//���popջΪ�գ���pushջ���뵽popջ��
	{
		while (!STEmbty(&obj->pushstack))
		{
			STPush(&obj->popstack, STTop(&obj->pushstack));
			STPop(&obj->pushstack);
		}
	}
	return STTop(&obj->popstack);
}

int myQueuePop(MyQueue* obj) {
	int top = myQueuePeek(obj);
	STPop(&obj->popstack);
	return top;
}

bool myQueueEmpty(MyQueue* obj) {
	assert(obj);
	return STEmbty(&obj->pushstack) && STEmbty(&obj->popstack);
}

void myQueueFree(MyQueue* obj) {
	assert(obj);
	STDestory(&obj->pushstack);
	STDestory(&obj->popstack);
	free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/