#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给出一个整型数组 numbers 和一个目标值 target，请在数组中找出两个加起来等于目标值的数的下标，返回的下标按升序排列。
//（注：返回的数组下标从1开始算起，保证target一定可以由数组里面2个数字相加得到）
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
//{
//    // write code here
//    static int arr[2];
//    for (int i = 0; i < numbersLen; i++)
//    {
//        if (numbers[i] > target)
//            continue;
//        for (int j = i + 1; j < numbersLen; j++)
//        {
//            if (numbers[i] + numbers[j] == target)
//            {
//                arr[0] = i + 1;
//                arr[1] = j + 1;
//                *returnSize = 2;
//                return arr;
//            }
//        }
//    }
//    *returnSize = 0;
//    return 0;
//}

//珠玑妙算游戏（the game of master mind）的玩法如下。
//计算机有4个槽，每个槽放一个球，颜色可能是红色（R）、黄色（Y）、绿色（G）或蓝色（B）。
//例如，计算机可能有RGGB 4种（槽1为红色，槽2、3为绿色，槽4为蓝色）。作为用户，你试图猜出颜色组合。
//打个比方，你可能会猜YRGB。要是猜对某个槽的颜色，则算一次“猜中”；要是只猜对颜色但槽位猜错了，则算一次“伪猜中”。注意，“猜中”不能算入“伪猜中”。
//给定一种颜色组合solution和一个猜测guess，编写一个方法，返回猜中和伪猜中的次数answer，其中answer[0]为猜中的次数，answer[1]为伪猜中的次数。
//第一种方法：
//int* masterMind(char* solution, char* guess, int* returnSize)
//{
//    int* ret = (int*)malloc(2 * 4);
//    memset(ret, 0, 8);
//    *returnSize = 2;
//    int right[26];
//    int wrong[26];
//    memset(right, 0, 26 * 4);
//    memset(wrong, 0, 26 * 4);
//    for (int i = 0; i < 4; i++)
//    {
//        if (solution[i] == guess[i])
//        {
//            ret[0]++;
//        }
//        else
//        {
//            right[solution[i] - 'A']++;
//            wrong[guess[i] - 'A']++;
//        }
//    }
//    for (int i = 0; i < 26; i++)
//    {
//        ret[1] += right[i] > wrong[i] ? wrong[i] : right[i];
//    }
//    return ret;
//}

//第二种方法:
//int* masterMind(char* solution, char* guess, int* returnSize)
//{
//    int* ret = (int*)malloc(2 * 4);
//    memset(ret, 0, 8);
//    *returnSize = 2;
//    for (int i = 0; i < 4; i++)
//    {
//        if (solution[i] == guess[i])
//        {
//            ret[0]++;
//        }
//    }
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            if (solution[i] == guess[j])
//            {
//                ret[1]++;
//                solution[i] = ' ';
//                guess[j] = ' ';
//                break;
//            }
//        }
//    }
//    ret[1] -= ret[0];
//    return ret;
//}