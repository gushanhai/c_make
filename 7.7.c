#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//	(*(void (*)())0)();
//	//1.��0ǿ��ת��Ϊvoid (*)()���͵ĺ���ָ��
//	//2.����0��ַ�����������ָ��
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	void(*signal(int, void (*)(int)))(int);
//	//����һ��signal����������
//	//signal������������һ������������int���ͣ�һ������������void (*)(int)����ָ�����ͣ�
//	// �ú���ָ��ָ��ĺ�����һ��int���͵Ĳ������ķ���������void
//	//signal�����ķ���������void ��*����int������ָ�����ͣ��ú���ָ��ĺ�������һ��int���͵Ĳ���������������void
//	return 0;
//}

//typedef������
//#include<stdio.h>
////typedef��ָ��/ָ�뺯��/ָ������/����ָ��/����ָ���ָ�����������ʱ��Ҫ�������������ַ���*�Ա�
//typedef int (*p)[10];
//typedef int (*pf)(int ,int);
//typedef int* ptr_t;
//int main()
//{
//	int arr[10];
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//void (*signal(int, void(*)(int)))(int);
// //�������Ŀɶ���̫����Ӷ�̫��
//	//�������������Ż���
//	typedef void (*pd_t)(int);
//	pd_t signal(int, pd_t);
//	return 0;
//}

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//#include<stdio.h>
//void find_num(int arr[][3], int x ,int r,int c)
//{
//	int a = 0;
//	int b = c - 1;
//	int flag = 0;
//	while (a < r && b >= 0)
//	{
//		if (x < arr[a][b])
//		{
//			b--;
//
//		}
//		else if (x > arr[a][b])
//		{
//			a++;
//
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���arr[%d][%d]", a, b);
//			flag = 1;
//			break;
//		}
//
//	}
//	if(flag==0)
//		printf("û�ҵ�");
//}
//int main()
//{
//	//1 2 3  
//	//4 5 6 
//	//7 8 9
//	int input = 0;
//	int arr[][3] = { 1,2,3, 4,5,6, 7,8,9 };
//	scanf("%d", &input);
//	find_num(arr, input,3,3);
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ���
//����:
// abcd
// A B
// C D
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//#include<stdio.h>
//#include<string.h>
//void left_move(char x[], int ret, int len)
//{
//	ret%=len;
//	while (ret--)
//	{
//		char tmp = x[0];
//		for (int i = 0; i < len - 1; i++)
//		{
//			x[i] = x[i + 1];
//		}
//		x[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int input;
//	printf("������Ҫ�����Ĵ�����\n");
//	scanf("%d", &input);
//	left_move(arr, input, strlen(arr));
//	printf("%s\n", arr);
//	return 0;
//}

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//#include<stdio.h>
//#include<string.h>
//move_s1(char str[], int move, int input, int len)
//{
//	input %= len;
//	if (move == 1)
//	{
//		while (input--)
//		{
//			int tmp = str[0];
//			for (int i = 0; i < len - 1; i++)
//			{
//				str[i] = str[i + 1];
//			}
//			str[len - 1] = tmp;
//		}
//	}
//	else
//	{
//		while (input--)
//		{
//			int tmp = str[len - 1];
//			for (int i = 0; i < len - 1; i++)
//			{
//				str[len-1-i] = str[len-i-2];
//			}
//			str[0] = tmp;
//		}
//	}
//}
//int main()
//{
//	char str1[] = "AABCD";
//	char str2[] = "BCDAA";
//	int move, input;
//	printf("��ѡ������(1)������(2):");
//	scanf("%d", &move);
//	printf("��������ת�Ĵ���:");
//	scanf("%d", &input);
//	move_s1(str1, move, input, strlen(str1));
//	int judge = strcmp(str1, str2);
//	printf("%s\n", str1);
//	if (judge == 0)
//	{
//		printf("str1��str2��ͬ");
//	}
//	else
//		printf("str1��str2����ͬ");
//	return 0;
//}
//qsortʹ����ϰ
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int str_cmp_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
//}
//int str_cmp_age(const void* p1, const void* p2)
//{
//	return((struct stu*)p1)->age - ((struct stu* )p2)->age;
//}
//
//int char_cmp(const void* p1, const void* p2)
//{
//	return *(char*)p1 - *(char*)p2;
//}
//int int_cmp(const void* p1, const void* p2)//ʹ��void*ָ������������͵�ָ��
//{
//	return *(int*)p1 - *(int*)p2;//����
//}
//int main()
//{
//	int arr[10] = { 1,3,8,5,4,2,6,7,9,0 };
//	char arr2[] = { 'a','c','e','f','b','d','t','p' ,'o','x' };
//	struct stu s1[] = {{"zhansan",22},{"wangwu",63}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int len = sizeof(arr2) / sizeof(arr2[0]);
//	int s = sizeof(s1) / sizeof(s1[0]);
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);
//	qsort(arr2, len, sizeof(arr2[0]), char_cmp);
//	qsort(s1, s, sizeof(s1[0]), str_cmp_age);
//	for (int i = 0; i < s; i++)
//	{
//		printf("%s %d\n", s1[i].name, s1[i].age);
//	}
//	qsort(s1, s, sizeof(s1[0]), str_cmp_name);
//	for (int i = 0; i < s; i++)
//	{
//		printf("%s %d\n", s1[i].name, s1[i].age);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c ", arr2[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < s; i++)
//	{
//		printf("%s %d\n", s1[i].name, s1[i].age);
//	}
//	return 0;
//}


//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
//#include<stdio.h>
//void Swap(char* buf1, char* buf2, int size)
//{
//	char tmp = 0;
//	for (int i = 0; i < size; i++)
//	{
//		tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(char*)p1) - (*(char*)p2);
//}
//void bubble_sort(void* base, int num,int size ,int (*cmp)(const void*,const void *))
//{
//	for (int i = 0; i < num-1; i++)
//	{
//		//��
//		for (int j = 0; j < num - 1 - i; j++)
//		{
//			//ÿһ�˽��жԱȵĶ���
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				Swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//}
//int main()
//{
//	char arr[] = {'a','c','e','f','b','d','t','p' ,'o','x'};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}