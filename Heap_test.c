#include "Heap.h"
void test()
{
	HP p1;
	HPInit(&p1);
	//int arr[] = {65,100,70,32,50,60};
	int arr[] = { 2,3,5,7,4,6,8 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		HPPush(&p1, arr[i]);

	}
	HPPrintf(&p1);
	while (!HPEmpty(&p1))
	{
		printf("%d ", HPTop(&p1));
		HPPop(&p1);
	}
	HPDestroy(&p1);
	return 0;
}
//void Heapsort(int* arr, int n)
//{
//	HP p2;
//	HPInit(&p2);
//	for (int i = 0; i < n; i++)
//	{
//		HPPush(&p2, arr[i]);
//	}
//	int i = 0;
//	while (!HPEmpty(&p2))
//	{
//		//printf("%d ", HPTop(&p2));
//		arr[i++] = HPTop(&p2);
//		HPPop(&p2);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	HPDestroy(&p2);
//}

void Heapsort(int* arr, int n)
{
	int parent = 0;
	int child = parent * 2 + 1;
	for (int i = 1; i < n; i++)
	{
		Adjustup(arr, i);
	}
	//while (child < n)
	//{
	//	if (child + 1 < n && arr[child] > arr[child + 1])
	//		child++;
	//	if (arr[child] < arr[parent])
	//	{
	//		Swap(&arr[child], &arr[parent]);
	//		parent = child;
	//		child = parent * 2 + 1;
	//	}
	//	else
	//		break;
	//}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	//test1();
	int arr[] = { 1,3,4,2,5,7,9,8,6,12,10 };
	Heapsort(arr,sizeof(arr)/4);
}