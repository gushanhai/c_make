#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	
//#include<stdio.h>
//#define DEBUG_PRINTR2 printf("file:%s\t\
//							  line:%d\t\
//							  date:%s\ttime:%s\t\n",\
//								__FILE__,__LINE__,__DATE__,__TIME__)
//#define DEBUG_PRINTR printf("file:%s\nline:%d\ndate:%s\ttime:%s\t\n",__FILE__,__LINE__,__DATE__,__TIME__)
//int main()
//{
//	DEBUG_PRINTR;
//	printf("\n\n");
//	DEBUG_PRINTR2;
//	return 0;
//}

//#include<stdio.h>
//#define M 100;
//int main()
//{
//	printf("%d", M);
//	return 0;
//}

//���������������ַ��� a �� b ���Զ������ַ�������ʽ�������ǵĺ͡�
//void reserve(char* s) {
//    int len = strlen(s);//������Ҫ��ת�ַ����ĳ���
//    for (int i = 0; i < len / 2; i++) {//���з�ת
//        char t = s[i];
//        s[i] = s[len - i - 1], s[len - i - 1] = t;
//    }
//}
//char* addBinary(char* a, char* b)
//{
//    reserve(a);//��ת�ַ���a
//    reserve(b);//��ת�ַ���b
//    int len1 = strlen(a);//����a�ĳ���
//    int len2 = strlen(b);//����b�ĳ���
//    int max = fmax(len1, len2);//fmax���������������еĽϴ�ֵ
//    int len = 0;//����������±�
//    int carry = 0; //carry��ʾ��λ
//    char* ret = (char*)malloc(1 * (max + 2));//��̬���٣�*��max+2���Ŀռ�
//    for (int i = 0; i < max; i++)
//    {
//        carry += i < len1 ? (a[i] == '1') : 0;//���ж�i�Ƿ�С��len1�ĳ��ȣ����С�ھ��ж�a[i]�Ƿ����'1'��������ڷ���1����������ڷ���0�����i>=len1���ͷ���0��
//        carry += i < len2 ? (b[i] == '1') : 0;//ͬ��
//        ret[len++] = carry % 2 + '0';//��carry%2��ֵ��ֵ�������ַ���
//        carry /= 2;//�����ǰcarry==2����ôcarry��Ҫ��һ�������=2����ô����0������Ҫ��һ
//    }
//    if (carry)//�ж����һ��carry�Ƿ�Ϊ1
//    {
//        ret[len++] = '1';//�����һ����ô'\0'ǰһ�����ַ��ǡ�1��
//    }
//    ret[len] = '\0';//�����һ������Ϊ'\0'
//    reserve(ret);//��ת��Ҫ���ص��ַ���
//    return ret;//������Ҫ���ص��ַ���
//}

//����һ���Ǹ����� x �����㲢���� x �� ����ƽ���� ��
//����1��
//int mySqrt(int x)
//{
//    long long i = 1;
//    while (i * i <= x)
//    {
//        i++;
//    }
//    return i - 1;
//}

//����2��
//int mySqrt(int x)
//{
//    if (x == 1)
//        return x;
//    long long left = 1;
//    long long right = x / 2;
//    while (left <= right)
//    {
//        long long mid = (left + right) / 2;
//        if (mid * mid < x)
//            left = mid + 1;
//        else if (mid * mid > x)
//            right = mid - 1;
//        else
//            return mid;
//    }
//    return left - 1;
//}