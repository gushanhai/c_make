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

//void Heapsort(int* arr, int n)
//{
//	int parent = 0;
//	int x = n - 1;
//	int child = parent * 2 + 1;
//	for (int i = 1; i < n; i++)
//	{
//		Adjustup(arr, i);//����һ�����
//	}
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&arr[0], &arr[end]);
//		Adjustdown(arr, end, 0);
//		end--;
//	}
//	//while (child < n)
//	//{
//	//	if (child + 1 < n && arr[child] > arr[child + 1])
//	//		child++;
//	//	if (arr[child] < arr[parent])
//	//	{
//	//		Swap(&arr[child], &arr[parent]);
//	//		parent = child;
//	//		child = parent * 2 + 1;
//	//	}
//	//	else
//	//		break;
//	//}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//Heapsort(int* arr, int n)
//{
//	int parent = 0;
//	int child = parent * 2 + 1;
//	for (int i = 0; i < n; i++)
//	{
//		Adjustup(arr,arr[i]);//���ϵ������������
//	}
//	//������Ѻ󣬽����ֵ����Сֵ���н���
//	int x = n - 1;
//	while (x > 0)
//	{
//		Swap(&arr[0], &arr[x]);//�Ƚ���
//		Adjustdown(arr, x, 0);//������������
//		x--;
//	}
//}

void CreateNDate()
{
	int n = 10000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen fail");
		exit(-1);
	}
	for (int i = 0; i < n; i++)
	{
		int x = rand() % 1000000;
		fprintf(fin, "%d\n", x);
	}
	fclose(fin);
}

void PrintTopk(const char* filename, int k)
{
	FILE* fout = fopen(filename, "r");
	if (fout == NULL)
	{
		perror("fopen fail");
		exit(-1);
	}
	int* minheap = (int*)malloc(sizeof(int) * k);
	if (minheap == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &minheap[i]);
	}
	//��ǰk������С��
	for (int i = (k-2)/2; i >= 0; i--)
	{
		Adjustdown(minheap, k, i);
	}
	//��ʣ���n-k��ֵ���жԱȣ�������ڸ��ڵ�ͽ����滻������������滻
	int x = 0;
	while (fscanf(fout,"%d",&x) != EOF)
	{
		if (x > minheap[0])
		{
			//�滻�ȶѶ���������
			minheap[0] = x;
			Adjustdown(minheap, k, 0);
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", minheap[i]);
	}
	printf("\n");
	fclose(fout);
}

void TestTopk()
{
	int n = 10000;
	int* a = (int*)malloc(sizeof(int) * n);
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 1000000;
	}
	PrintTopk(a, n, 10);
}

int main()
{
	//test1();
	//int arr[] = { 1,3,4,2,5,7,9,8,6,12,10 };
	//CreateNDate();
	PrintTopk("data.txt", 10);
	//Heapsort(arr,sizeof(arr)/4);
}