#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//颠倒给定的 32 位无符号整数的二进制位。
//uint32_t reverseBits(uint32_t n)
//{
//    uint32_t ret = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        ret |= (n & 1) << (31 - i);
//        n >>= 1;
//    }
//    return ret;
//}

//编写一个函数，输入是一个无符号整数（以二进制串的形式），返回其二进制表达式中数字位数为 '1' 的个数（也被称为汉明重量）。
//int hammingWeight(uint32_t n)
//{
//    int count_1 = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        count_1 += (n & 1);
//        n >>= 1;
//    }
//    return count_1;
//}

//给定两个字符串 s 和 t ，判断它们是否是同构的。
//如果 s 中的字符可以按某种映射关系替换得到 t ，那么这两个字符串是同构的。
//每个出现的字符都应当映射到另一个字符，同时不改变字符的顺序。不同字符不能映射到同一个字符上，相同字符只能映射到同一个字符上，字符可以映射到自己本身。
//bool isIsomorphic(char* s, char* t)
//{
//    int len1 = strlen(s);
//    int len2 = strlen(t);
//    if (len1 != len2)
//        return false;
//    char haximap1[256] = { 0 };
//    char haximap2[256] = { 0 };
//    for (int i = 0; i < len1; i++)
//    {
//        if (haximap1[s[i]] == 0)//检查s[i]的值是否在haximap1中还未出现
//            haximap1[s[i]] = t[i];//如果还没出现，就将haximap1中的值替换为t[i]
//        else//如果出现过
//        {
//            if (haximap1[s[i]] != t[i])//将haximap1[s[i]]中进行存储的值和t[i]进行对比
//                return false;//如果不同就返回false
//        }
//    }
//    for (int i = 0; i < len1; i++)
//    {
//        if (haximap2[t[i]] == 0)
//            haximap2[t[i]] = s[i];
//        else
//        {
//            if (haximap2[t[i]] != s[i])
//                return false;
//        }
//    }
//    return true;
//}