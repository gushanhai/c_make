#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//typedef struct student
//{
//	char name[20];
//	int xuehao;
//	char sex[5];
//	char banji[30];
//}s1;
//int main()
//{
//	s1 s1 = { .name = "����",.xuehao = 2022010888,.sex = "��",.banji = "��������������" };
//	printf("%s %d %s %s", s1.name, s1.xuehao, s1.sex, s1.banji);
//	return 0;
//}

//ģ��ʵ��strlen����
//1.ѭ�����
//#include<stdio.h>
//size_t my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "skdjflksd";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//2.�ݹ���
//#include<stdio.h>
//size_t my_strlen(const char* str)
//{
//	if (*str)
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "skdjflksd";
//	printf("%d",my_strlen(arr));
//	return 0;
//}

//3.ָ��-ָ��
//#include<stdio.h>
//size_t my_strlen(const char* str)
//{
//	char* p = str;
//	while (*str++)
//	{
//		;
//	}
//	return str - p-1;
//}
//int main()
//{
//	char arr[] = "skdjflksd";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//ģ��ʵ��strcpy
//#include<stdio.h>
// #include<assert.h>
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* p = str2;
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	*str1 = '\0';
//	return p;
//}
//int main()
//{
//	char arr1[] = "skjdfjfs";
//	char arr2[20] = "";
//	printf("%s", my_strcpy(arr2, arr1));
//	return 0;
//}

//ģ��ʵ��strcmp
//arr1<arr2 return -
// arr1 == arr2 return 0
// arr1>arr return +
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	int ret = 0;
//	while ((ret= *(unsigned char*)str1 - *(unsigned char*)str2)==0 &&*str1++ && *str2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefd";
//	char arr2[] = "abcdefg";
//	printf("%d",my_strcmp(arr1, arr2));
//	return 0;
//}

//ģ��ʵ��strcat
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char*str1, const char *str2)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	int count = 0;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " bit!";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//ģ��ʵ��strstr
#include<stdio.h>
const char* my_strstr(const char* str1, const char* str2)
{
	if (*str2=='\0')
		return (char*)str1;
	char* cp = (char*)str1;
	char* p1,*p2;
	while ( *cp)
	{
		p1 = cp;
		p2 = (char*)str2;
		while (*p1 == *p2 && *p1 && *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return cp;
		cp++;
	}
	return (NULL);
}
int main()
{
	char arr1[] = "asdghjksdfgasdfasdf";
	char arr2[] = "asdf";
	printf("%s", my_strstr(arr1, arr2));
}