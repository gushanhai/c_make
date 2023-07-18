#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//单身狗2
 
//1.将数组中的所有值进行异或
// 2.将异或出来的值种找到二进制序列种第一个1
// 3.将找出来的第一个1的位置进行标记，利用这个位置来进行分组。
// 4.所有值异或的值在异或dog1
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

//模拟实现outi
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
//		printf("非法返回：%d\n",num);
//	return 0;
//}

//每三个数子后加一个，
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

//输入一个字符串，在输入一个字符串，删除字符串一中的字符串而
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

//模拟实现strncp
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

//模拟实现strncat
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

