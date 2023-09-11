#include "Heap.h"
void HPInit(HP* php)
{
	assert(php);
		php->capacity = 0;
		php->size = 0;
		php->arr = NULL;
}

void HPDestroy(HP* php)
{
	assert(php);
	free(php->arr);
	php->arr = NULL;
	php->size = 0;
	php->capacity = 0;
} 

void Swap(HeapDataType* a1, HeapDataType* a2)//��������
{
	HeapDataType tmp = *a1;//��parent��child�������ֵ���н���
	*a1 = *a2;
	*a2 = tmp;
}

//void Adjustup(HeapDataType* arr, int child)
//{
//	int parent = (child - 1) / 2;//���㸸���������е��±�
//	while (child > 0)
//	{
//		if (arr[child] < arr[parent])//�������С��˫�ף���ô˵������������Ҫ�����ѵ�����
//		{
//			Swap(&arr[child], &arr[parent]);//���ӽڵ��ֵ��˫�׽���ֵ���н���
//			child = parent;//��Ϊ�Ǵ����һ������λ�ÿ�ʼ���еģ�����Ҫ���º��ӿ���֮ǰ�����Ƚ���Ƿ񲻷�����������Ҫ�����ѵ�����
//			parent = (child - 1) / 2;//����˫�׽��
//		}
//		else//������Ӵ��ڵ���˫�ף�˵����ǰ��ֵ������������Ҫ�Ķѵ�����
//			break;//�˳�
//	}
//}

void Adjustup(HeapDataType* arr, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (arr[child] < arr[parent])
		{ 
			Swap(&arr[child], &arr[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
			break;
	}
}

void Adjustdown(HeapDataType* arr, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child] > arr[child + 1])
			child += 1;
		if (arr[child] < arr[parent])
		{
			Swap(&arr[parent], &arr[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}

void HPPush(HP* php, HeapDataType x)
{
	assert(php);
	if (php->capacity == php->size)//�жϵ�ǰ�����Ƿ�����
	{
		int new_capacity = php->capacity == 0 ? 4 : php->capacity * 2;//���м���
		php->capacity = new_capacity;
		HeapDataType* tmp = (HeapDataType*)realloc(php->arr, sizeof(HeapDataType) * php->capacity);//��������
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		php->arr = tmp;//��tmp�ĵ�ַ��ֵarr
	}
	php->arr[php->size++] = x;//��x���뵽��ǰ�±�λ�ã�Ҳ����β�壩
	Adjustup(php->arr, php->size - 1);//�������ϵ����㷨
}

void HPPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->arr[0], &php->arr[php->size - 1]);
	--php->size;
	Adjustdown(php->arr, php->size, 0);
}

HeapDataType HPTop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	return php->arr[0];
}

bool HPEmpty(HP* php)
{
	return php->size == 0;
}

void HPPrintf(HP* php)
{
	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->arr[i]);
	}
	printf("\n");
}