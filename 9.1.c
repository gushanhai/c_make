#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	 
//给定一个罗马数字，将其转换成整数。
//int romanToInt(char* s)
//{
//    int arr[26];
//    arr['I' - 'A'] = 1;
//    arr['V' - 'A'] = 5;
//    arr['X' - 'A'] = 10;
//    arr['L' - 'A'] = 50;
//    arr['C' - 'A'] = 100;
//    arr['D' - 'A'] = 500;
//    arr['M' - 'A'] = 1000;
//    int len = strlen(s);
//    int sum = 0;
//    for (int i = 0; i < len; i++)
//    {
//        int val = arr[s[i] - 'A'];
//        if (i < len - 1 && val < arr[s[i + 1] - 'A'])
//            sum -= val;
//        else
//            sum += val;
//    }
//    return sum;
//}

//给你两个正整数 a 和 b ，返回 a 和 b 的 公 因子的数目。
//如果 x 可以同时整除 a 和 b ，则认为 x 是 a 和 b 的一个 公因子
//int commonFactors(int a, int b)
//{
//    int min = a < b ? a : b;
//    int ret = 0;
//    for (int i = 1; i <= min; i++)
//    {
//        if (a % i == 0 && b % i == 0)
//        {
//            ret++;
//        }
//    }
//    return ret;
//}

//给你一个整数 n ，以二进制字符串的形式返回该整数的 负二进制（base - 2）表示。
//注意，除非字符串就是 "0"，否则返回的字符串中不能含有前导零。	
//char* baseNeg2(int n)
//{
//    if (n == 1)
//        return "1";
//    if (n == 0)
//        return "0";
//    char* ret = (char*)calloc(32, 1);
//    int count = 0;
//    while (n)
//    {
//        ret[count++] = (n & 1) + '0';
//        n -= n & 1;
//        n /= -2;
//    }
//    for (int i = 0, j = count - 1; i < j; i++, j--)
//    {
//        char tmp = ret[i];
//        ret[i] = ret[j];
//        ret[j] = tmp;
//    }
//    return ret;
//}