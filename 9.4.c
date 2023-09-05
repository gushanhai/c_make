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

//给你两个二进制字符串 a 和 b ，以二进制字符串的形式返回它们的和。
//void reserve(char* s) {
//    int len = strlen(s);//计算需要翻转字符串的长度
//    for (int i = 0; i < len / 2; i++) {//进行反转
//        char t = s[i];
//        s[i] = s[len - i - 1], s[len - i - 1] = t;
//    }
//}
//char* addBinary(char* a, char* b)
//{
//    reserve(a);//反转字符串a
//    reserve(b);//反转字符串b
//    int len1 = strlen(a);//计算a的长度
//    int len2 = strlen(b);//计算b的长度
//    int max = fmax(len1, len2);//fmax函数计算两个数中的较大值
//    int len = 0;//返回数组的下标
//    int carry = 0; //carry表示进位
//    char* ret = (char*)malloc(1 * (max + 2));//动态开辟！*（max+2）的空间
//    for (int i = 0; i < max; i++)
//    {
//        carry += i < len1 ? (a[i] == '1') : 0;//先判断i是否小于len1的长度，如果小于就判断a[i]是否等于'1'，如果等于返回1，如果不等于返回0，如果i>=len1，就返回0；
//        carry += i < len2 ? (b[i] == '1') : 0;//同理
//        ret[len++] = carry % 2 + '0';//将carry%2的值赋值给返回字符串
//        carry /= 2;//如果当前carry==2，那么carry就要进一，如果！=2，那么就是0，不需要进一
//    }
//    if (carry)//判断最后一个carry是否为1
//    {
//        ret[len++] = '1';//如果是一，那么'\0'前一个的字符是‘1’
//    }
//    ret[len] = '\0';//将最后一个字置为'\0'
//    reserve(ret);//翻转需要返回的字符串
//    return ret;//返回需要返回的字符串
//}

//给你一个非负整数 x ，计算并返回 x 的 算术平方根 。
//方法1：
//int mySqrt(int x)
//{
//    long long i = 1;
//    while (i * i <= x)
//    {
//        i++;
//    }
//    return i - 1;
//}

//方法2：
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