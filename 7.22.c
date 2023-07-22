#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//	FILE* pf;
//	pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("pf");
//		return 1;
//	}
//	printf("创建成功\n");
//	fclose(pf);
//	pf = NULL;
//	printf("关闭成功\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* pf;
//	pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("pf");
//		return 1;
//	}
//	printf("创建并打开成功");
//	fputc('a', pf);
//	fputc('b', pf);
//	pf = NULL;
//	return 0;
//}