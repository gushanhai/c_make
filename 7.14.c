#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996 )
//#include<stdio.h>
//#include<stddef.h>
//struct stu
//{
//	char a;
//	struct stu* next;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct stu));
//	printf("%d\n", offsetof(struct stu, a));
//	printf("%d\n", offsetof(struct stu,next));
//	return 0;
//}
//#include<stdio.h>
//#include<stddef.h>
//struct stu
//{
//	int a;
//	char s;
//	char b;
//};
//struct stu2
//{
//	char s;
//	int a;
//	char b;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct stu));
//	printf("%d\n", offsetof(struct stu, a));
//	printf("%d\n", offsetof(struct stu, s));
//	printf("%d\n", offsetof(struct stu, b));
//
//	printf("%d\n", sizeof(struct stu2));
//	printf("%d\n", offsetof(struct stu2, s));
//	printf("%d\n", offsetof(struct stu2, a));
//	printf("%d\n", offsetof(struct stu2, b));
//
//	return 0;
//}
//#include<stdio.h>
//#include<stddef.h>
//int main()
//{
//	struct stu
//	{
//		int a;
//		double b;
//	};
//	struct stu2
//	{
//		int a;
//		struct stu s1;
//		double b;
//	};
//	printf("%d\n",sizeof(struct stu));
//	printf("%d\n", offsetof(struct stu,a));
//	printf("%d\n", offsetof(struct stu, b));
//
//	printf("%d\n",sizeof(struct stu2));
//	printf("%d\n", offsetof(struct stu2, a));
//	printf("%d\n", offsetof(struct stu2, s1));
//	printf("%d\n", offsetof(struct stu2, b));
//
//	return 0;
//}

//#include<stdio.h>
//#include<stddef.h>
//int main()
//{
//	struct stu
//	{
//		int a;
//		char b;
//		int arr[5];
//	};
//	printf("%d\n", sizeof(struct stu));
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	char a;
//	int b;
//	char c;
//};
//struct stu2
//{
//	char a;
//	char c;
//	int b;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct stu));
//	printf("%d\n", sizeof(struct stu2));
//	return 0;
//}

//#include<stdio.h>
//#pragma pack(1)//设置默认对齐数为1
//struct S1
//{
//	char a;
//	int b;
//	char c;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}
//#pragma pack()//取消设置的默认对齐数，还原为默认

#include<stdio.h>
typedef struct S1
{
	char a;
	int b;
	char c;
}s1;

void print(s1 ss1)
{
	printf("%c %d %c\n", ss1.a, ss1.b, ss1.c);
}

void print2(s1* ss1)
{
	printf("%c %d %c\n", ss1->a, ss1->b, ss1->c);
}


int main()
{
	s1 ss1 = { .a = 'b',.b = 10,.c = 'd' };
	print(ss1);
	print2(&ss1);
	return 0;
}
