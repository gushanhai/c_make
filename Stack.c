#include"Stack.h"
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
	return phead->a[phead->top-1];
}