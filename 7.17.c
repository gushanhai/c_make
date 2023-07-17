#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//							date:%s\t time:%s\n",\
//							__FILE__ ,__LINE__ , \
//							__DATE__ ,__TIME__ )
//int main()
//{
//	DEBUG_PRINT;
//	return 0;
//}

//#define定义的时候尽量不要加;
//#include<stdio.h>
//#define M 20;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//		a = M
//	else
//		b = M
//		printf("%d %d\n", a, b);
//	return 0;
//}

//#的作用
//#include<stdio.h>
//#define PRINT(x,format) printf(""#x"="format"\n",x,format)
//int main()
//{
//	int a = 10;
//	PRINT(a,"%d");
//	printf("a=%d\n", a);
//	int b = 20;
//	PRINT(b,"%d");
//	printf("b=%d\n", b);
//	float c = 3.41;
//	PRINT(c, "%f");
//	return 0;
//}

//##的作用
//#include<stdio.h>
//#define CAT(a,b) a##b
//int main()
//{
//	int Class110 = 2023;
//	printf("%d\n", CAT(Class, 110));
//	return 0;
//}

//单身狗
//异或写法
//#include<stdio.h>
//int find_dog(int* arr,int sz)
//{
//	int num = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		num =num ^ *(arr + i);
//	}
//	return num;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 9 };
//	int ret = find_dog(arr,sizeof(arr)/sizeof(arr[0]));
//	printf("%d\n", ret);
//	return 0;
//}

//单身狗2
//12345
//12346
//#include<stdio.h>
//void find_dog2(int* arr, int sz, int* d1, int* d2)
//{
//	int flag = 0;
//	int all = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		all ^= *(arr + i);
//	}
//
//	for (int i = 0; i < sz; i++)
//	{
//		if (((all >> i) & 1) == 1)
//		{
//			flag = i;
//			break;
//		}
//	}
//
//	for (int i = 0; i < sz; i++)
//	{
//		if (((*(arr + i) >> flag) & 1) == 1)
//		{
//			*d1 ^= *(arr + i);
//		}
//	}
//	*d2 = all ^ (*d1);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int dog1 = 0;
//	int dog2 = 0;
//	find_dog2(arr, sizeof(arr) / sizeof(arr[0]), &dog1, &dog2);
//	printf("%d %d\n", dog1, dog2);
//	return 0;
//}
