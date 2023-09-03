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

//给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。
//单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。
//第一种方法:
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

//第二种方法:
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

//给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
//最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//你可以假设除了整数 0 之外，这个整数不会以零开头。
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int* plusOne(int* digits, int digitsSize, int* returnSize)
//{
//    for (int i = digitsSize - 1; i >= 0; i--)
//    {
//        if (digits[i] + 1 > 9)//判断最后一位是否大于10
//        {
//            digits[i] = 0;//如果大于10，就将当前位置赋值为0
//        }
//        else//如果不是
//        {
//            digits[i] = digits[i] + 1;//将最后一位+1
//            *returnSize = digitsSize;//返回大小为当前数组的大小
//            return digits;//返回修改后的数组
//        }
//    }
//如果出了循环就代表当前数组的内容为9、99等需要进行扩容
//    int* ret = (int*)malloc(4 * (digitsSize + 1));//开辟一块当前数组大小+1的空间
//    memset(ret, 0, 4 * (digitsSize + 1));//将开辟后的空间全部初始化为0
//    ret[0] = 1;//将开辟的空间第一位赋值为1
//    *returnSize = digitsSize + 1;//返回的大小是当前数组大小+1
//    return ret;//返回开辟的空间
//}