#include"Seqlist.h"
void SLInsert(SL* ps, int pos, SlDataType x);//��posλ�ò���һ��x
void SLEarse(SL* ps, int pos); //��posλ��ɾ��һ��ֵ

void SPrint(SL* ps)//��ӡ
{
	assert(ps); 
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", *(ps->a + i));
	}
	printf("\n");
}

void SLInit(SL* ps)//��ʼ��
{
	ps->a = (SlDataType*)malloc(4 * sizeof(SlDataType));
	if (ps->a == NULL)
	{
		perror("SL");
		exit(-1);//���쳣�ķ�ʽ�˳�
	}
	ps->size = 0;
	ps->capacity = max;
}

void SLDestroy(SL* ps)//����
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

//void Check(SL* ps)//����
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

void SLCheckCapacity(SL* ps)//����
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		//����
		SlDataType* tmp = (SlDataType*)realloc(ps->a, 4 * 2 * sizeof(SlDataType));
		if (tmp == NULL)
		{
			perror(tmp);
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity *= 2;
		printf("���ݳɹ�\n");
	}
}

void SLPushBack(SL* ps, SlDataType x)//β��
{
	assert(ps);
	//SLCheckCapacity(ps);
	//ps->a[ps->size] = x;
	//ps->size++;
	SLInsert(ps, ps->size, x);
}

void SLPopBack(SL* ps)//βɾ
{
	assert(ps);
	//ps->a[ps->size] = 0;
	//if(ps->size!=0)
	//assert(ps->size > 0);
	//ps->size--;
	SLEarse(ps, ps->size-1);
}

void SLPushFront(SL* ps, SlDataType x)//ͷ��
{
	assert(ps);
	//SLCheckCapacity(ps);
	//int end = ps->size - 1;
	//while (end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	end--;
	//}
	//ps->a[0] = x;
	//ps->size++;
	SLInsert(ps, 0, x);
}

void SLPopFront(SL* ps)//ͷɾ
{
	assert(ps);
	//if (ps->a > 0)	
	//{
	//	int str = 1;
	//	while (str < ps->size)
	//	{
	//		ps->a[str-1] = ps->a[str];
	//		str++;
	//	}
	//	ps->size--;
	//}
	SLEarse(ps, 0);
}

int SLFind(SL* ps, SlDataType x)
{
	assert(ps);	
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}

void SLInsert(SL* ps, int pos, SlDataType x)//��posλ�ò���һ��x
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SLEarse(SL* ps, int pos) //��posλ��ɾ��һ��ֵ
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}

void SLModify(SL* ps, int pos, SlDataType x)//��posλ�ô���ֵ�޸�
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	ps->a[pos] = x;
}