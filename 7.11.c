#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//模拟实现strstr
//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	if (*str2 == '\0')
//		return str1;
//	char* cp = str1;
//	char* s1, * s2;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 && *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2=='\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdefjhigk";
//	char arr2[] = "efj";
//	printf("%s", my_strstr(arr1, arr2));
//	return 0;
//}

//模拟实现memcpy
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void* my_memcpy(void* arr1, const void* arr2, size_t num)
//{
//	assert(arr1 && arr2);
//	void* p = arr1;
//	while (num--)
//	{
//		*((char*)arr1) = *((char*)arr2);
//		arr1 = (char*)arr1 + 1;
//		arr2 = (char*)arr2 + 1;
//	}
//	return p;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10];
//	my_memcpy(arr+2, arr, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//模拟实现memmove
//#include<string.h>
//#include<stdio.h>
//#include<assert.h>
//void* my_memmove(void* arr1, const void* arr2, size_t num)
//{
//	assert(arr1 && arr2);
//	void* p = arr2;
//	if (arr1 > arr2)
//	{
//		//arr1 = (char*)arr1 + num - 1;
//		//arr2 = (char*)arr2 + num - 1;
//
//		while (num--)
//		{
//			*((char*)arr1 + num) = *((char*)arr2 + num);
//			//arr1 = (char*)arr1 - 1;
//			//arr2 = (char*)arr2 - 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)arr1) = *((char*)arr2);
//			arr1 = (char*)arr1 + 1;
//			arr2 = (char*)arr2 + 1;
//		}
//	}
//	return p;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr+2, arr, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d",memset( arr,1,8));
//	return 0;
//}

//模拟实现memcmp
//#include<stdio.h>
//#include<assert.h>
//int my_memcmp(const void* arr1, const void* arr2, size_t num)
//{
//	assert(arr1 && arr2);
//	while (*((char*)arr1) == (*((char*)arr2)) && num--)
//	{
//		((char*)arr1)++;
//		((char*)arr2)++;
//	}
//	return (*(char*)arr1)-(*(char*)arr2);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 1,2,9,4,5,7};
//	printf("%d", my_memcmp(arr2, arr, 21));
//	return 0;
//}

//模拟实现memset
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memset(void* arr, int value, size_t num)
{
	char* p = arr;
	while (num--)
	{
		*(char*)arr = value;
		((char*)arr)++;
	}
	return p;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", my_memset(arr, 1, 4));
	return 0;
}