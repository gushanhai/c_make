#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//���죺offsetof���ʵ��
// 
//#include<stdio.h>
//#define OFFSETOF(type,num) (size_t)&(((type*)0)->num)
//struct stu
//{
//	char a;
//	int b;
//	long c;
//}stu;
//int main()
//{
//	printf("%d", OFFSETOF(struct stu, c));
//	return 0;
//}

//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������
//#include<stdio.h>
//#define swap_b(num) (num=((num&0xaaaaaaaa)>>1)+((num&0x55555555)<<1)) 
//int main()
//{
//	int a = 10;
//	swap_b(a);
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(4000000000000000);
//	if (p == NULL)
//	{
//		printf("�ڴ濪��ʧ��!\n");
//		return;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//ģ��ʵ��atoi
#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<stdlib.h>
enum State
{
	VALID,
	INVALID
}state=INVALID;
int my_atoi(const char* s1)
{
	assert(s1);
	long long ret = 0;
	int flag = 1;
	if (*s1 == '\0')
	{
		return 0;
	}
	while(isspace(*s1))
	{
		s1++;
	}
	if (*s1 == '-')
	{
		flag = -1;
		s1++;
	}
	else if(*s1=='+')
	{
		s1++;
	}
	while (*s1 != '\0')
	{
		if (isdigit(*s1))
		{
			ret = (10 * ret) + (flag * (*s1 - '0'));
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
		}
		else
			return (int)ret;
		s1++;
	}
	state = VALID;
	return (int)ret;
}
int main()
{
	int a = my_atoi("        a-1345aa");
	if (state == INVALID)
	{
		printf("�쳣����,%d\n",a);
	}
	else
	{
		printf("%d", a);
	}
	return 0;
}