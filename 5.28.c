#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//#include<stdio.h>
//int main()
//{
//	int a = 0;//买汽水的钱
//	printf("请输入你有多少钱:\n");
//	scanf("%d", &a);
//	int b = 1;//一瓶汽水的价格
//	int count = 0;
//	count = (a / b) + (a / b / 2);
//	printf("你可以买%d瓶汽水，喝完再换%d瓶，一共可以喝%d瓶.\n", a, (a / b / 2), count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	struct tag//创建结构类型
//	{
//		int a;
//		char x[20];//创建结构体成员变量
//	};
//	struct tag s1 = { .a = 29, .x = "skjdf"};//
//	printf("%d %s", s1.a, s1.x);//.操作符对结构体成员进行访问
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//}s1 = { "张三",22,"男" };
//struct stu1
//{
//	char xx[20];
//	struct stu s1;
//};
//struct stu2
//{
//	char zy[20];
//	struct stu1 s2;
//};
//
//int main()
//{
//	struct stu1 s2 = { "西工大",{"梨花",20,"女"}};
//	struct stu2 ss = { .s2.s1.name = "斯拉夫",.s2.s1.age = 20,.s2.s1.sex = "男",.s2.xx = "西交大",.zy = "软件工程" };
//	printf("%s %d %s\n", s1.name, s1.age, s1.sex);
//	printf("%s %s %d %s\n", s2.xx, s2.s1.name, s2.s1.age, s2.s1.sex);
//	printf("%s %d %s %s %s\n", ss.s2.s1.name, ss.s2.s1.age, ss.s2.s1.sex, ss.s2.xx, ss.zy);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//struct stu
//{
//	int age;
//	char name[20];
//};
//void set_stu(struct stu a)
//{
//	a.age = 20;
//	strcpy(a.name, "沙克");//使用strcmp函数对s1结构体内的name进行赋值
//}
//void print_stu(struct stu a)
//{
//	printf("%d %s\n", a.age, a.name);
//}
//int main()
//{
//	struct stu s1 = { 0 };
//	set_stu(s1);
//	print_stu(s1);
//	return 0;
//}
//上边这个代码是错误代码，使用set_stu函数对s1结构体成员进行赋值使用的是传值调用，导致赋值没用成功
#include<stdio.h>
#include<string.h>
struct stu
{
	int age;
	char name[20];
};
void set_stu(struct stu *a)
{
	a->age = 20;
	strcpy(a->name, "沙克");//使用strcmp函数对s1结构体内的name进行赋值
}
void print_stu(struct stu a)
{
	printf("%d %s\n", a.age, a.name);
}
int main()
{
	struct stu s1 = { 0 };
	set_stu(&s1);
	print_stu(s1);
	return 0;
}