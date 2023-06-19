#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//KiKi知道什么叫杨辉三角之后对杨辉三角产生了浓厚的兴趣，
//他想知道杨辉三角的前n行，请编程帮他解答。杨辉三角，本质上是二项式(a + b)的n次方展开后各项的系数排成的三角形。
//其性质包括：每行的端点数为1， 一个数也为1；每个数等于它左上方和上方的两数之和。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n][n];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            if (j == 0 || i == j)
//            {
//                arr[i][j] = 1;
//            }
//            else
//            {
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//KiKi和BoBo玩 “井”字棋。也就是在九宫格中，只要任意行、列，或者任意对角线上面出现三个连续相同的棋子，
//就能获胜。请根据棋盘状态，判断当前输赢。
//#include <stdio.h>
//int main()
//{
//    char arr[3][3];
//    char x;
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            scanf("%c ", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < 3; i++)
//    {
//        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ')
//            x = arr[i][0];
//        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')
//            x = arr[0][i];
//    }
//    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] != ' ')
//        x = arr[0][0];
//    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] != ' ')
//        x = arr[2][0];
//    if (x == 'B')
//        printf("BoBo wins!\n");
//    else if (x == 'K')
//        printf("KiKi wins!\n");
//    else
//        printf("No winner!\n");
//    return 0;
//}

//扫雷矩阵的每一行每一列都是一个数字，每个数字的含义是与当前位置相邻的8个方向中，
//有多少个雷（在下图中，雷用* 表示）；如果当前位置就是雷的话，仍输出一个* 。
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    getchar();
//    char arr[n + 2][m + 2];
//    for (int i = 0; i < n + 2; i++)
//    {
//        for (int j = 0; j < m + 2; j++)
//        {
//            arr[i][j] = 0;
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            scanf("%c", &arr[i][j]);
//        }
//        getchar();
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            if (arr[i][j] == '*')
//                continue;
//            else
//            {
//                int count = 0;
//                if (arr[i - 1][j - 1] == '*')
//                    count++;
//                if (arr[i - 1][j] == '*')
//                    count++;
//                if (arr[i][j - 1] == '*')
//                    count++;
//                if (arr[i + 1][j] == '*')
//                    count++;
//                if (arr[i + 1][j + 1] == '*')
//                    count++;
//                if (arr[i + 1][j - 1] == '*')
//                    count++;
//                if (arr[i][j + 1] == '*')
//                    count++;
//                if (arr[i - 1][j + 1] == '*')
//                    count++;
//                arr[i][j] = count + 48;
//            }
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            printf("%c", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//凯刚写了一篇美妙的作文，请问这篇作文的标题中有多少个字符？
//注意：标题中可能包含大、小写英文字母、数字字符、空格和换行符。统计标题字 符数时，空格和换行符不计算在内。
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[100];
//    int count = 0;
//    gets(arr);
//    for (int i = 0; i < strlen(arr); i++)
//    {
//        if (arr[i] != '\n' && arr[i] != ' ')
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}

//有个软件系统登录的用户名和密码为（用户名：admin，密码：admin），用户输入用户名和密码，判断是否登录成功。
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char arr1[10] = { 0 };
//    char arr2[10] = { 0 };
//    while ((scanf("%s %s", arr1, arr2) != EOF))
//    {
//        if (strcmp("admin", arr1) == 0 && strcmp(arr2, "admin") == 0)
//            printf("Login Success!\n");
//        else
//            printf("Login Fail!\n");
//    }
//    return 0;
//}

//笨小猴的词汇量很小，所以每次做英语选择题的时候都很头疼。但是他找到了一种方法，经试验证明，
//用这种方法去选择选项的时候选对的几率非常大！
//这种方法的具体描述如下：假设maxn是单词中出现次数最多的字母的出现次数，
//minn是单词中出现次数最少的字母的出现次数，如果maxn - minn是一个质数，
//那么笨小猴就认为这是个Lucky Word，这样的单词很可能就是正确的答案。
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int maxn = 0;//字母最多的次数
//    int minn = 100;//字母最少的次数
//    char arr[100];
//    int a = 1;
//    scanf("%s", arr);
//    int count = 0;
//    for (int i = 0; i < strlen(arr); i++)
//    {
//        count = 0;
//        for (int j = 0; j < strlen(arr); j++)
//        {
//            if (arr[i] == arr[j])
//                count++;
//        }
//        if (count < minn)
//            minn = count;
//        if (count > maxn)
//            maxn = count;
//    }
//    int m = maxn - minn;
//    for (int i = 2; i < m; i++)
//    {
//        if (m % i == 0)
//            a = 0;
//    }
//    if (a == 1 && m != 0 && m != 1) {
//        printf("Lucky Word\n%d", m);
//    }
//    else
//    {
//        printf("No Answer\n%d", m);
//    }
//    return 0;
//}

//比如 980364535，我们常常需要一位一位数这个数字是几位数，但是如果在这 个数字每三位加一个逗号，它会变得更加易于朗读。
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[20];
//    scanf("%s", arr);
//    for (int i = 1; i <= strlen(arr); i++)
//    {
//        printf("%c", arr[i - 1]);
//        if ((strlen(arr) - i) % 3 == 0 && i != strlen(arr))
//        {
//            printf(",");
//        }
//    }
//    return 0;
//}