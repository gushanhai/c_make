#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//#include<stdio.h>
//int main()
//{
//	int a = 0;//����ˮ��Ǯ
//	printf("���������ж���Ǯ:\n");
//	scanf("%d", &a);
//	int b = 1;//һƿ��ˮ�ļ۸�
//	int count = 0;
//	count = (a / b) + (a / b / 2);
//	printf("�������%dƿ��ˮ�������ٻ�%dƿ��һ�����Ժ�%dƿ.\n", a, (a / b / 2), count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	struct tag//�����ṹ����
//	{
//		int a;
//		char x[20];//�����ṹ���Ա����
//	};
//	struct tag s1 = { .a = 29, .x = "skjdf"};//
//	printf("%d %s", s1.a, s1.x);//.�������Խṹ���Ա���з���
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//}s1 = { "����",22,"��" };
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
//	struct stu1 s2 = { "������",{"�滨",20,"Ů"}};
//	struct stu2 ss = { .s2.s1.name = "˹����",.s2.s1.age = 20,.s2.s1.sex = "��",.s2.xx = "������",.zy = "�������" };
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
//	strcpy(a.name, "ɳ��");//ʹ��strcmp������s1�ṹ���ڵ�name���и�ֵ
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
//�ϱ���������Ǵ�����룬ʹ��set_stu������s1�ṹ���Ա���и�ֵʹ�õ��Ǵ�ֵ���ã����¸�ֵû�óɹ�
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
	strcpy(a->name, "ɳ��");//ʹ��strcmp������s1�ṹ���ڵ�name���и�ֵ
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