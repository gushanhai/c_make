#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��ʹ����ʱ�����������������͵�����
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//��ȡһ�����������������е�ż��λ������λ�����ֱ��ӡ������������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n = 0;
//	printf("����λ:\n");
//	for (n = 1; n < 32; n+=2)
//	{
//		printf("%d ", (a>>n)&1);
//	}
//	printf("\n");
//	for (n = 0; n < 32; n+=2)
//	{
//		printf("%d ", (a >> n)&1);
//	}
//
//	return 0;
//}
//��ӡһ��������ÿһλ
#include<stdio.h>
void re(int a)
{
	if (a > 9)
	{
		printf("%d ", (a)%10);
		return re((a) / 10);
	}
	else
	{
		printf("%d", a);
	}
}
int main()
{
	int a = 12345;
	re(a);
	return 0;
}