#include"sort.h"
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[] = { 4,1,3,6,2,5,7,9,8,0 };
	//InsertSort(arr,10);
	//int (*p)() = add;
	//int num = add(3, 4);
	//printf("%d %p %p %p %p\n", num, &num ,add ,add(3,4));
	//printf("%p ",*p);
	ShellSort(arr, sizeof(arr)/sizeof(int));
	return 0;
}