#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* o = &arr1;
//	int a = 10;
//	for (a = 0; a < 10; a++)
//	{
//		printf("%d ", *(o + a));
//	}
//	return 0;
//}
//��ӡ����
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//��ӡ������
//	int a = 0;
//	for (a = 0; a < line; a++)
//	{
//		int b = 0;
//		for (b = 0; b < line - 1 - a; b++)
//		{
//			printf(" ");
//		}
//		for (b = 0; b < (2 * a + 1); b++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (a = 0; a < line; a++)
//	{
//		int b = 0;
//		for (b = 0; b <= a; b++)
//		{
//			printf(" ");
//		}
//		for (b = 0; b < 2 * (line - 1 - a) - 1; b++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��ӡ1-10000֮���ˮ�ɻ���
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10000; a++)
//	{
//		int b = a % 10;
//		int c = (a / 10) % 10;
//		int d = (a / 100) % 10;
//		if ((b * b * b )+ (c * c * c) + (d * d * d) == a)
//		{
//			printf("%d��ˮ�ɻ���\n", a);
//		}
//	}
//	return 0;
//}
//#include<Stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int Sn = 0;	
//	int c = a * 10 + a;
//	int d = c * 10 + a;
//	int e = d * 10 + a;
//	int f = e * 10 + a;
//	Sn = a + c + d + e + f;
//	printf("%d", Sn);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
#include<stdio.h>
void ret_arr(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	int temp = 0;
	while (left < right) {
		if(*(arr+left) % 2 == 1) 
		{
			left++;
		}
		if(*(arr+right) % 2 == 0) 
		{
			right--;
		}
		if (left < right) {
			temp = *(arr+left);
			*(arr+left) = *(arr+right);
			*(arr+right) = temp;
			left++;
			right--;
		}
	}
}
int main()
{
	int arr[] = { 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	ret_arr(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}