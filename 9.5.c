#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
//第一种方法:
//int palouti(int n)
//{
//    if (n < 3)
//        return n;
//    int num = 0;
//    int arr[n];
//    arr[0] = 1;
//    arr[1] = 2;
//    for (int i = 0; i < n; i++)
//    {
//        if (i < 2)
//            num = arr[i];
//        else
//        {
//            arr[i] = arr[i - 1] + arr[i - 2];
//            num = arr[i];
//        }
//    }
//    return num;
//}
//int climbStairs(int n)
//{
//    int ret = palouti(n);
//    return ret;
//}

//第二种方法:
//int climbStairs(int n)
//{
//    int ret = 1;
//    int a = 0;
//    int b = 0;
//    int i = 0;
//    while (i < n)
//    {
//        a = b;
//        b = ret;
//        ret = a + b;
//        i++;
//    }
//    return ret;
//}


//给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。
//在「杨辉三角」中，每个数是它左上方和右上方的数的和。
//力扣118题
//int** generate(int numRows, int* returnSize, int** returnColumnSizes)
//{
//    int** ret = (int**)malloc(sizeof(int*) * numRows);//创建了五个一级指针，每个指针指向了每一行的开头
//    *returnColumnSizes = (int*)malloc(4 * numRows);//创建了用于保存每行个数的数组
//    for (int i = 0; i < numRows; i++)
//    {
//        ret[i] = (int*)malloc(4 * (i + 1));//为每行申请了i+1个空间用于存储数据
//        (*returnColumnSizes)[i] = i + 1;//记录每一行的个数
//        for (int j = 0; j <= i; j++)
//        {
//            if (i == j || j == 0)//如果i==j或者j==0说明当前处于杨辉三角的最外行，这两行的值为1
//                ret[i][j] = 1;//将返回数组的[i][j]赋值为1
//            else//否则当前这一行的第j个大小是上一行第j个和上一行第j-1个的和
//            {
//                ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
//            }
//        }
//    }
//    *returnSize = numRows;//将返回数组的大小设置为numRows
//    return ret;//返回返回的二维数组
//}
