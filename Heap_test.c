#include "Heap.h"
int main()
{
	HP p1;
	HPInit(&p1);
	int arr[] = {65,100,70,32,50,60};
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		HPPush(&p1, arr[i]);
	}
	HPPrintf(&p1);
	HPDestroy(&p1);
	return 0;
}