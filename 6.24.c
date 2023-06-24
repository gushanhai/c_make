#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//糖和抖m在玩个游戏，规定谁输了就要请谁吃顿大餐：抖m给糖a b c三个驻， 并在a柱上放置了数量为n的圆盘，
//圆盘的大小从上到下依次增大，现在要做的事就是把a柱的圆盘全部移到c柱，移动的过程中保持小盘在上，大盘在下，
//且限定圆盘只能够移动到相邻的柱子，即a柱子上的圆盘只能够移动到b，b柱子上的圆盘只能够移动到a或者c，c同理。
//现在请你设计一个程序，计算所需移动的最小步数， 帮助糖赢得大餐
//#include <stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        int m = 1;
//        for (int i = 0; i < n; i++)
//        {
//            m *= 3;
//        }
//        printf("%d\n", m - 1);
//    }
//    return 0;
//}


//牛牛刚刚学了素数的定义：素数值指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数
//牛牛想知道输入的 n 个数分别是不是素数
//#include <stdio.h>
//int main() {
//    int n, m = 0;
//    while (scanf("%d", &n) != EOF) {
//        m++;
//        if (m != 1) {
//            int count = 0;
//            for (int i = 1; i <= n; i++) {
//                if (n % i == 0) count++;
//            }
//            if (count == 2) printf("true\n");
//            else printf("false\n");
//        }
//    }
//    return 0;
//}