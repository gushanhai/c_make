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

void Swap(HeapDataType* a1, HeapDataType* a2)//交换函数
{
	HeapDataType tmp = *a1;//将parent比child大的两个值进行交换
	*a1 = *a2;
	*a2 = tmp;
}

//void Adjustup(HeapDataType* arr, int child)
//{
//	int parent = (child - 1) / 2;//计算父亲在数组中的下标
//	while (child > 0)
//	{
//		if (arr[child] < arr[parent])//如果孩子小于双亲，那么说明不是我们需要创建堆的类型
//		{
//			Swap(&arr[child], &arr[parent]);//将子节点的值和双亲结点的值进行交换
//			child = parent;//因为是从最后一个孩子位置开始进行的，所以要更新孩子看看之前的祖先结点是否不符合我们所需要创建堆的类型
//			parent = (child - 1) / 2;//更新双亲结点
//		}
//		else//如果孩子大于等于双亲，说明当前的值符合我们所需要的堆的类型
//			break;//退出
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
		if (child + 1 < n && arr[child+1] < arr[child])
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
	if (php->capacity == php->size)//判断当前容量是否已满
	{
		int new_capacity = php->capacity == 0 ? 4 : php->capacity * 2;//进行计算
		php->capacity = new_capacity;
		HeapDataType* tmp = (HeapDataType*)realloc(php->arr, sizeof(HeapDataType) * php->capacity);//进行扩容
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		php->arr = tmp;//将tmp的地址赋值arr
	}
	php->arr[php->size++] = x;//将x插入到当前下标位置（也就是尾插）
	Adjustup(php->arr, php->size - 1);//进行向上调整算法
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

void HPInitArry(HP* php, int* arr, int n)
{
	assert(php);
	assert(arr);
	if (php->capacity == 0)
	{
		//说明当前堆没有进行分配空间
		php->arr = (HeapDataType)malloc(sizeof(HeapDataType) * n);
		if (php->arr == NULL)
		{
			perror("malloc fail");
			exit(-1);
		}
	}
	memcpy(php->arr, arr, sizeof(HeapDataType) * n);
	for (int i = 1; i < n; i++)
	{
		Adjustup(php->arr, i);
	}
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