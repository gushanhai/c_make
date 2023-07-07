#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//	(*(void (*)())0)();
//	//1.将0强制转换为void (*)()类型的函数指针
//	//2.调用0地址处的这个函数指针
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	void(*signal(int, void (*)(int)))(int);
//	//这是一个signal函数的声明
//	//signal有两个参数，一个参数类型是int类型，一个参数类型是void (*)(int)函数指针类型，
//	// 该函数指针指向的函数有一个int类型的参数，的返回类型是void
//	//signal函数的返回类型是void （*）（int）函数指针类型，该函数指向的函数还有一个int类型的参数，返回类型是void
//	return 0;
//}

//typedef重命名
//#include<stdio.h>
////typedef对指针/指针函数/指针数组/数组指针/函数指针等指针进行重命名时，要将重命名的名字放在*旁边
//typedef int (*p)[10];
//typedef int (*pf)(int ,int);
//typedef int* ptr_t;
//int main()
//{
//	int arr[10];
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//void (*signal(int, void(*)(int)))(int);
// //这个代码的可读性太差，复杂度太高
//	//对这个代码进行优化：
//	typedef void (*pd_t)(int);
//	pd_t signal(int, pd_t);
//	return 0;
//}

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//#include<stdio.h>
//void find_num(int arr[][3], int x ,int r,int c)
//{
//	int a = 0;
//	int b = c - 1;
//	int flag = 0;
//	while (a < r && b >= 0)
//	{
//		if (x < arr[a][b])
//		{
//			b--;
//
//		}
//		else if (x > arr[a][b])
//		{
//			a++;
//
//		}
//		else
//		{
//			printf("找到了，下标是arr[%d][%d]", a, b);
//			flag = 1;
//			break;
//		}
//
//	}
//	if(flag==0)
//		printf("没找到");
//}
//int main()
//{
//	//1 2 3  
//	//4 5 6 
//	//7 8 9
//	int input = 0;
//	int arr[][3] = { 1,2,3, 4,5,6, 7,8,9 };
//	scanf("%d", &input);
//	find_num(arr, input,3,3);
//	return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符。
//例如:
// abcd
// A B
// C D
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include<stdio.h>
//#include<string.h>
//void left_move(char x[], int ret, int len)
//{
//	ret%=len;
//	while (ret--)
//	{
//		char tmp = x[0];
//		for (int i = 0; i < len - 1; i++)
//		{
//			x[i] = x[i + 1];
//		}
//		x[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int input;
//	printf("请输入要左旋的次数：\n");
//	scanf("%d", &input);
//	left_move(arr, input, strlen(arr));
//	printf("%s\n", arr);
//	return 0;
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//#include<stdio.h>
//#include<string.h>
//move_s1(char str[], int move, int input, int len)
//{
//	input %= len;
//	if (move == 1)
//	{
//		while (input--)
//		{
//			int tmp = str[0];
//			for (int i = 0; i < len - 1; i++)
//			{
//				str[i] = str[i + 1];
//			}
//			str[len - 1] = tmp;
//		}
//	}
//	else
//	{
//		while (input--)
//		{
//			int tmp = str[len - 1];
//			for (int i = 0; i < len - 1; i++)
//			{
//				str[len-1-i] = str[len-i-2];
//			}
//			str[0] = tmp;
//		}
//	}
//}
//int main()
//{
//	char str1[] = "AABCD";
//	char str2[] = "BCDAA";
//	int move, input;
//	printf("请选择左旋(1)或右旋(2):");
//	scanf("%d", &move);
//	printf("请输入旋转的次数:");
//	scanf("%d", &input);
//	move_s1(str1, move, input, strlen(str1));
//	int judge = strcmp(str1, str2);
//	printf("%s\n", str1);
//	if (judge == 0)
//	{
//		printf("str1和str2相同");
//	}
//	else
//		printf("str1和str2不相同");
//	return 0;
//}
//qsort使用练习
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int str_cmp_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
//}
//int str_cmp_age(const void* p1, const void* p2)
//{
//	return((struct stu*)p1)->age - ((struct stu* )p2)->age;
//}
//
//int char_cmp(const void* p1, const void* p2)
//{
//	return *(char*)p1 - *(char*)p2;
//}
//int int_cmp(const void* p1, const void* p2)//使用void*指针接收任意类型的指针
//{
//	return *(int*)p1 - *(int*)p2;//升序
//}
//int main()
//{
//	int arr[10] = { 1,3,8,5,4,2,6,7,9,0 };
//	char arr2[] = { 'a','c','e','f','b','d','t','p' ,'o','x' };
//	struct stu s1[] = {{"zhansan",22},{"wangwu",63}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int len = sizeof(arr2) / sizeof(arr2[0]);
//	int s = sizeof(s1) / sizeof(s1[0]);
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);
//	qsort(arr2, len, sizeof(arr2[0]), char_cmp);
//	qsort(s1, s, sizeof(s1[0]), str_cmp_age);
//	for (int i = 0; i < s; i++)
//	{
//		printf("%s %d\n", s1[i].name, s1[i].age);
//	}
//	qsort(s1, s, sizeof(s1[0]), str_cmp_name);
//	for (int i = 0; i < s; i++)
//	{
//		printf("%s %d\n", s1[i].name, s1[i].age);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c ", arr2[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < s; i++)
//	{
//		printf("%s %d\n", s1[i].name, s1[i].age);
//	}
//	return 0;
//}


//模仿qsort的功能实现一个通用的冒泡排序
//#include<stdio.h>
//void Swap(char* buf1, char* buf2, int size)
//{
//	char tmp = 0;
//	for (int i = 0; i < size; i++)
//	{
//		tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(char*)p1) - (*(char*)p2);
//}
//void bubble_sort(void* base, int num,int size ,int (*cmp)(const void*,const void *))
//{
//	for (int i = 0; i < num-1; i++)
//	{
//		//趟
//		for (int j = 0; j < num - 1 - i; j++)
//		{
//			//每一趟进行对比的对数
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				Swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//}
//int main()
//{
//	char arr[] = {'a','c','e','f','b','d','t','p' ,'o','x'};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}