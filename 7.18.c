#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����2
 
//1.�������е�����ֵ�������
// 2.����������ֵ���ҵ������������ֵ�һ��1
// 3.���ҳ����ĵ�һ��1��λ�ý��б�ǣ��������λ�������з��顣
// 4.����ֵ����ֵ�����dog1
//#include <stdio.h>
//void find_dog(int arr[], int sz, int* d1, int* d2)
//{
//	int all = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		all ^= arr[i];
//	}
//	int x = 1;
//	while (((all >> 1) & 1)==0)
//	{
//		x++;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> x) & 1) == 1)
//		{
//			*d1 ^= arr[i];
//		}
//	}
//	*d2 = all ^ *d1;
//}
//int main()
//{
//	int dog1 = 0;
//	int dog2 = 0;
//	int arr[] = { 1,2,3,4,5,6,7,1,2,3,4,5,6,8 };
//	find_dog(arr, sizeof(arr) / sizeof(arr[0]), &dog1, &dog2);
//	printf("%d %d\n", dog1, dog2);
//}

//ģ��ʵ��outi
//#include<stdlib.h>
//#include<stdio.h>
//#include<ctype.h>
//#include<assert.h>
//enum State
//{
//	VALID,
//	INVALID
//}state = INVALID;
//int my_atoi(char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 0;
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	else if (*str == '+')
//	{
//		str++;
//	}
//	long long ret = 0;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			ret = ret * 10 + flag*(*str - '0');
//			if (ret<INT_MIN || ret>INT_MAX)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return (int)ret;
//		}
//		str++;
//	}
//	state = VALID;
//	return (int)ret;
//}
//int main()
//{
//	int num = my_atoi("        -1345");
//	if (state == VALID)
//		printf("%d\n", num);
//	else
//		printf("�Ƿ����أ�%d\n",num);
//	return 0;
//}

//ÿ�������Ӻ��һ����
//#include<stdio.h>
//int main()
//{
//	long long a;
//	scanf("%lld", &a);
//	int flag = 0;
//	int arr[100];
//	while (a)
//	{
//		arr[flag] = a % 10;
//		a /= 10;
//		flag++;
//	}
//	for (int i = flag-1; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//		if (i % 3 == 0&&i!=0)
//		{
//			printf(",");
//		}
//	}
//	return 0;
//}

//����һ���ַ�����������һ���ַ�����ɾ���ַ���һ�е��ַ�����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[100];
//	char str2[100];
//	gets(str1);
//	gets(str2);
//	int s1 = strlen(str1);
//	int s2 = strlen(str2);
//	int flag = 0;
//	for (int i = 0; i < s1; i++)
//	{
//		flag = 0;
//		while (flag<s2)
//		{
//			if (str2[flag] == str1[i])
//			{
//				break;
//			}
//			flag++;
//		}
//		if (str2[flag] == '\0')
//		{
//			printf("%c", str1[i]);
//		}
//	}
//	return 0;
//}

//ģ��ʵ��strncp
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//char* my_strncpy(char* str2,const char* str1, size_t num)
//{
//	assert(str2 && str1);
//	char* tmp = str2;
//	int min = 0;
//	if (strlen(str1) < num)
//	{
//		min = num - strlen(str1);
//		num = strlen(str1);
//	}
//	while (num-- )
//	{
//		*str2++ = *str1++;
//	}
//	while (min--)
//	{
//		*str2++ = '\0';
//	}
//	return tmp;
//}
//int main()
//{
//	char str[] = "asdfjlslfqwerqwer";
//	char str2[20];
//	char str3[20];
//	my_strncpy(str2, str, sizeof(str2));
//	strncpy(str3, str, sizeof(str3));
//	printf("%s\n", str2);
//	printf("%s\n", str3);
//	return 0;
//}

//ģ��ʵ��strncat
//#include<stdio.h>
//#include<assert.h>
//char* my_strncat(char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	char* tmp = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (num-- && *str2 != '\0')
//	{
//		*str1++= *str2++;
//	}
//	*str1 = '\0';
//	return tmp;
//}
//int main()
//{
//	char str[10] = "hello";
//	char str2[] = " bit";
//	printf("%s\n", my_strncat(str, str2, 4));
//	return 0;
//}

