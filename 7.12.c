#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//�����ṹ������
//#include<stdio.h>
//struct
//{
//	char name[20];
//	char sex[5];
//	int age;
//}s1;
//struct
//{
//	char name[20];
//	char sex[5];
//	int age;
//}*p;
//int main()
//{
//	p = &s1;
//	return 0;
//}


//#include<stdio.h>
//struct stu
//{
//	char a;
//	struct stu next;
//};
//int main()
//{
//	printf("%d", sizeof(struct stu));
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	char a;//����������������ݵ�����
//	struct stu* next;//ָ�����������ָ������򣨽ڵ㣩
//};
//int main()
//{
//	printf("%d", sizeof(struct stu));
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	int a;
//	char s;
//};
//int main()
//{
//	struct stu s1 = { 3,'s' };
//	struct stu s2 = { .a = 9 };
//	printf("%d %c\n", s1,s1);
//	printf("%d\n", s1.a);
//	printf("%d\n", s2);
//	return 0;
//}
//#include<stdio.h>
//typedef struct stu
//{
//	int a;
//	char s;
//	stu* next;
//}stu;
//int main()
//{
//	stu s1 = { 3,'s' };
//	stu s2 = { .a = 9 };
//	printf("%d %c\n", s1, s1);
//	printf("%d\n", s1.a);
//	printf("%d\n", s2);
//	return 0;
//}
//#include<stdio.h>
// struct stu
//{
//	int a;
//	char s;
//	char b;
//};
// struct stu2
// {
//	 char s;
//	 int a;
//	 char b;
// };
//int main()
//{
//	printf("%d\n", sizeof(struct stu));
//	printf("%d\n", sizeof(struct stu2));
//	return 0;
//}