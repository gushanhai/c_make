#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//struct a
//{
//	int a : 1;
//	int b : 10;
//	int c : 20;
//	int d : 30;
//};
//int main()
//{
//	printf("%d", sizeof(struct a));
//	return 0;
//}

//#include<stdio.h>
//struct a
//{
//	char a : 1;
//	char b : 1;
//	char c : 2;
//	char d : 4;
//};
//int main()
//{
//	printf("%d", sizeof(struct a));
//	return 0;
//}

//#include<stdio.h>
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//#include<stdio.h>
//enum Day//星期
//{
//	Mon = 1,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum Sex today = Sat;
//	printf("今天是星期%d", today);
//	return 0;
//}

//#include<stdio.h>
//union aa
//{
//	char a;
//	int b;
//};
//int main()
//{
//	union aa a1;
//	printf("%d\n", sizeof(a1));
//	printf("%d\n", sizeof(a1.a));
//	printf("%d\n", sizeof(a1.b));
//	return 0;
//}