#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	
//#include<stdio.h>
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __DATE__);
//	//printf("%d\n", __STDC__);
//	printf("%d", x);
//	return 0;
//}
//#include<stdio.h>
//#define x 10
//#define e 20
////#define ADD(a,b) a+b
//#define str "askfjlsdfl"
//#define s 's'
//int main()
//{
//	printf("%d\n", 10);
//	printf("%d\n", 20);
//	//printf("%d\n", ADD(x,e));
//	printf("%s\n", "askfjlsdfl");
//	printf("%c\n", 's');
//	return 0;
//}
//
//#include<stdio.h>
//#define ADD(a,b) a+b
//int main()
//{
//	printf("%d\n", ADD(10, 20));
//	return 0;
//}

//����һ���ַ��� s�������ɵ�����ɣ�����ǰ����һЩ�ո��ַ������������ַ����� ���һ�� ���ʵĳ��ȡ�
//���� ��ָ������ĸ��ɡ��������κοո��ַ���������ַ�����
//��һ�ַ���:
//int lengthOfLastWord(char* s)
//{
//    char* start = s;
//    char* end = s;
//    while (*s)
//    {
//        if (*s == ' ')
//        {
//            while (*s == ' ')
//            {
//                s++;
//            }
//            if (*s == '\0')
//                break;
//            start = s;
//        }
//        if (*s != ' ')
//            end = s;
//        s++;
//    }
//    int count = 0;
//    while (start!=end)
//    {
//        count++;
//        start++;
//    }
//    return count+1;
//}

//�ڶ��ַ���:
//int lengthOfLastWord(char* s)
//{
//    char* start = NULL;
//    char* end = NULL;
//    start = strtok(s, " ");
//    while (start)
//    {
//        end = start;
//        start = strtok(NULL, " ");
//    }
//    return strlen(end);
//}

//����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
//���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
//����Լ���������� 0 ֮�⣬��������������㿪ͷ��
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int* plusOne(int* digits, int digitsSize, int* returnSize)
//{
//    for (int i = digitsSize - 1; i >= 0; i--)
//    {
//        if (digits[i] + 1 > 9)//�ж����һλ�Ƿ����10
//        {
//            digits[i] = 0;//�������10���ͽ���ǰλ�ø�ֵΪ0
//        }
//        else//�������
//        {
//            digits[i] = digits[i] + 1;//�����һλ+1
//            *returnSize = digitsSize;//���ش�СΪ��ǰ����Ĵ�С
//            return digits;//�����޸ĺ������
//        }
//    }
//�������ѭ���ʹ���ǰ���������Ϊ9��99����Ҫ��������
//    int* ret = (int*)malloc(4 * (digitsSize + 1));//����һ�鵱ǰ�����С+1�Ŀռ�
//    memset(ret, 0, 4 * (digitsSize + 1));//�����ٺ�Ŀռ�ȫ����ʼ��Ϊ0
//    ret[0] = 1;//�����ٵĿռ��һλ��ֵΪ1
//    *returnSize = digitsSize + 1;//���صĴ�С�ǵ�ǰ�����С+1
//    return ret;//���ؿ��ٵĿռ�
//}