#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10,sizeof(int));
// if(p==NULL)
// {
//		perror("calloc");
//		return;
// }
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n",*( p + i));
//	}
//  free(p);
//  p=NULL;
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
// / if(p==NULL)
// {
//		perror("calloc");
//		return;
// }
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
// 	free(p);
//  p = NULL;
//	return 0;
//}

//第一种情况
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	p = (int*)realloc(p, 80);
//	if (p == NULL)
//	{
//		perror("relloc");
//		return;
//	}
//	for (int i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//第二种
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr!= NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("relloc");
//		return;
//	}
//	for (int i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
