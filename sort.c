#include"sort.h"

void Swap(int* a1, int* a2)
{
	int tmp = *a1;
	*a1 = *a2;
	*a2 = tmp;
}

void InsertSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = arr[end + 1];
		while (end >= 0)
		{
			if (arr[end] > tmp)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
				break;
		}
		arr[end + 1] = tmp;
	}
}

void ShellSort(int* arr, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = arr[end + gap];
			while (end >= 0)
			{
				if (arr[end] > tmp)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
					break;
			}
			arr[end + gap] = tmp;
		}
	}
}

void PrintArry(int* arr, int n)
{
	assert(arr);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void BubbleSort(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 0;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
				flag = 1;
			}
		}
		if (!flag)
		{
			break;
		}
	}
}

void SelectSort(int* arr, int n)//选择排序
{
	int start = 0;
	int end = n - 1;
	while(start<end)
	{
		int max = start;
		int min = start;
		for (int i = start+1; i <=end; i++)
		{
			if (arr[i] > arr[max])
			{
				max = i;
			}
			if (arr[i] < arr[min])
			{
				min = i;
			}
		}
		Swap(&arr[start], &arr[min]);
		if (max == start)
			max = min;
		Swap(&arr[max], &arr[end]);
		end--;
		start++;
	}
}

int GetMidi(int* a, int left, int right)//三数取中 
{
	int mid = (left + right) / 2;
	// left mid right
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])  // mid是最大值
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else // a[left] > a[mid]
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] < a[right]) // mid是最小
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}

int PartSort(int* arr,int left,int right)//hoare法：
{
	int mid = GetMidi(arr, left, right);
	Swap(&arr[mid], &arr[left]);

	int key = left;
	while (left < right)
	{
		while (left < right && arr[right] >= arr[key])
			right--;
		while (left < right && arr[left] <= arr[key])
			left++;
		Swap(&arr[left], &arr[right]);
	}
	Swap(&arr[left], &arr[key]);
	return left;
}

int PartSort2(int* arr, int left, int right)//蹲坑法:
{
	int mid = GetMidi(arr, left, right);
	Swap(&arr[left], &arr[mid]);

	int key = arr[left];
	int kenwei = left;
	while (left < right)
	{
		while (left<right && arr[right] >= key)
		{
			right--;
		}
		arr[kenwei] = arr[right];
		kenwei = right;
		while (left < right && arr[left] <= key)
		{
			left++;
		}
		arr[kenwei] = arr[left];
		kenwei = left;
	}
	arr[kenwei] = key;
	return left;
}

int PartSort3(int* arr, int left, int right)//前后指针法：
{
	int mid = GetMidi(arr, left, right);
	Swap(&arr[left], &arr[mid]);

	int per = left;
	int cur = left + 1;
	int key = left;
	while (cur <=right)
	{
		if (arr[cur] < arr[key]&&++per!=cur)
		{
			Swap(&arr[cur], &arr[per]);
		}
		++cur;
	}
	Swap(&arr[key], &arr[per]);
	return per;
}

void QuickSort(int* arr, int start, int end)//快排
{
	if (start >= end)
	{
		return;
	}
	int key = PartSort(arr, start, end);
	QuickSort(arr, start, key - 1);	
	QuickSort(arr, key + 1, end);
} 