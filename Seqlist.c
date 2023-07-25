#include"Seqlist.h"

void SPrint(SL* ps)//打印
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", *(ps->a + i));
	}
	printf("\n");
}

void SLInit(SL* ps)//初始化
{
	ps->a = (SlDataType*)malloc(4 * sizeof(SlDataType));
	if (ps->a == NULL)
	{
		perror("SL");
		exit(-1);//以异常的方式退出
	}
	ps->size = 0;
	ps->capacity = max;
}

void SLDestroy(SL* ps)//销毁
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

//void Check(SL* ps)//扩容
//{
//	SlDataType* tmp = (SlDataType*)realloc(ps->a, (ps->capacity) * 2 * (sizeof(SlDataType)));
//	if (tmp == NULL)
//	{
//		perror(tmp);
//		exit(-2);
//	}
//	ps->a = tmp;
//	ps->capacity *= e;
//}

void SLCheckCapacity(SL* ps)//扩容
{
	if (ps->size == ps->capacity)
	{
		//扩容
		SlDataType* tmp = (SlDataType*)realloc(ps->a, (ps->capacity) * 2 * (sizeof(SlDataType)));
		if (tmp == NULL)
		{
			perror(tmp);
			exit(-2);
		}
		ps->a = tmp;
		ps->capacity *= 2;
		printf("扩容成功\n");
	}
}
void SLPushBack(SL* ps, SlDataType x)//尾插
{
	assert(ps);
	SLCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SLPopBack(SL* ps)//尾删
{
	//ps->a[ps->size] = 0;
	//if(ps->size!=0)
	assert(ps->size > 0);
	ps->size--;
}

void SLPushFront(SL* ps, SlDataType x)//头插
{
	SLCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}

void SLPopFront(SL* ps)//头删
{
	if (ps->a > 0)
	{
		int str = 0;
		while (str < ps->size-1)
		{
			ps->a[str] = ps->a[str + 1];
		}
		ps->size--;
	}
}

void SLInsert(SL* ps, int pos, SlDataType x)//在pos位置插入一个x
{
	ps->size++;
	SLCheckCapacity(ps);
	int str = pos;
	while (pos < ps->size-1)
	{
		ps->a[str + 1] = ps->a[str];
	}
	ps->a[pos] = x;
}

void SLEarse(SL* ps, int pos); //在pos位置删除一个值