#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��ϰ1��������������ʵ���������Ľ���
//��1������ˮ����������ķ�ʽ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("%d %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//��2����β�ʹ�ö�����ڴ�ռ䣬ʵ������������û�пձ����ˣ�
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//��ӡ��������ÿһλ
//#include<stdio.h>
//tt_a(int a)
//{
//	if (a > 9)
//	{
//		tt_a(a / 10);
//		printf("%d ", a % 10);
//	}
//	else
//	{
//		printf("%d ", a % 10);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	tt_a(a);
//	return 0;
//}
//�����ַ����ĳ���
//����1��ѭ��
//#include<stdio.h>
//my_strlen(char* a)
//{
//	int count = 0;
//	while (*a != '\0')
//	{
//		a++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "skjdfd";
//	int s = my_strlen(arr);
//	printf("%d", s);
//	return 0;
//}
//����2���ݹ�
//#include<stdio.h>
//my_str(char* a)
//{
//	if (*a == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_str(a + 1);
//	}
//}
//int main()
//{
//	char arr[] = "sksksksksk";
//	int a=my_str(arr);
//	printf("%d", a);
//	return 0;
//}
//��N�Ľ׳�
//#include<stdio.h>
//int cc_a(int a)
//{
//	if (a <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return a * cc_a(a - 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int x = cc_a(a);
//	printf("%d\n", x);
//	return 0;
//}
//��쳲���������
//ʹ�õݹ����쳲���������Ч��̫��
//#include<stdio.h>
//int ss_a(int a)
//{
//	if (a <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return ss_a(a - 1) + ss_a(a - 2);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = ss_a(a);
//	printf("%d\n", ret);
//}
