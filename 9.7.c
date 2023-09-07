#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	
//如果在将所有大写字符转换为小写字符、并移除所有非字母数字字符之后，短语正着读和反着读都一样。则可以认为该短语是一个 回文串 。
//字母和数字都属于字母数字字符。
//给你一个字符串 s，如果它是 回文串 ，返回 true ；否则，返回 false 。
//bool isPalindrome(char* s) {
//    if (*s == '\0')
//        return true;
//    int len = strlen(s);
//    int per = 0;
//    int last = len - 1;
//    for (int i = 0; i < len; i++)
//    {
//        if (!isalnum(s[per]))
//        {
//            per++;
//            continue;
//        }
//        if (!isalnum(s[last]))
//        {
//            last--;
//            continue;
//        }
//        if (isalnum(s[per]) && isalnum(s[last]))
//        {
//            if (tolower(s[per]) != tolower(s[last]))
//                return false;
//        }
//        per++;
//        last--;
//    }
//    return true;
//}

//给你一个 非空 整数数组 nums ，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
//你必须设计并实现线性时间复杂度的算法来解决此问题，且该算法只使用常量额外空间。
//int singleNumber(int* nums, int numsSize)
//{
//    int ret = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        ret ^= nums[i];
//    }
//    return ret;
//}

//给你一个整数 columnNumber ，返回它在 Excel 表中相对应的列名称。
//
//char* convertToTitle(int columnNumber) {
//    char* ret = (char*)malloc(27 * sizeof(char)); // 分配足够大的空间
//    int tmp = columnNumber;
//    int i = 0;
//    while (tmp)
//    {
//        ret[i++] = ((tmp - 1) % 26) + 'A';
//        tmp = (tmp - 1) / 26;
//    }
//    ret[i] = '\0';
//    for (int e = 0; e < i / 2; e++)
//    {
//        char a = ret[e];
//        ret[e] = ret[i - 1 - e];
//        ret[i - e - 1] = a;
//    }
//    return ret;
//}