#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��һ������һ�������� n ��ʾ�ַ�����ĳ��ȣ��ĸ����ַ��ֱ� a1 �� a2 �� a3 �� a4��
//��ʾ���ַ������� a1 ȫ���滻�� a2��Ȼ��� a3 ȫ���滻�� a4������a1�滻�������a2����a3�������
//�ڶ�������һ������Ϊ n ���ַ�����
//#include <stdio.h>
//int main()
//{
//    int n;
//    char a1, a2, a3, a4;
//    scanf("%d %c %c %c %c\n", &n, &a1, &a2, &a3, &a4);
//    char arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%c", &arr[i]);
//        if (arr[i] == a1)
//            arr[i] = a2;
//        if (arr[i] == a3)
//            arr[i] = a4;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}

//ţţ���ѧ��ˮ�ɻ���������������ϲ��ˮ�ɻ��������׼�����[l, r] �����ڵ���Ҷõ������
//��Ҷõ������һ�������ĸ�λ�õ����ֵ��Ĵη����������������λ�����������
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int l, r;
//    scanf("%d %d", &l, &r);
//    for (int i = l; i <= r; i++)
//    {
//        int x = i;
//        int count = 0;
//        while (x)
//        {
//            count += pow(x % 10, 4);
//            x /= 10;
//        }
//        if (count == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//��������10���ˣ�1���Ƕ������Ƶģ���һ��Ĳ��������Ƶġ�ţţ�ǵ�10���ˣ�������Ƕ������Ƶġ�
//ţţ�Ѷ��������ֳ����֣�һ���� 1 ��������ż���ģ�ţţ��֮Ϊ 1 ����һ���� 0 ��������ż���ģ�
//ţţ��֮Ϊ 0 �������һ����ͬʱ�� 1 ���� 0 �����ǳ�֮Ϊ 10 ����
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        int a_0 = 0, a_1 = 0;
//        int e = arr[i];
//        while (e)
//        {
//            if (e % 2 == 0)
//                a_0++;
//            else
//                a_1++;
//            e /= 2;
//        }
//        if (a_0 % 2 != 0 && a_1 % 2 == 0)
//            printf("1 ");
//        else if (a_0 % 2 == 0 && a_1 % 2 != 0)
//            printf("0 ");
//        else if (a_0 % 2 == 0 && a_1 % 2 == 0)
//            printf("10 ");
//        else
//            printf("100 ");
//    }
//    return 0;
//}

//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
//#include <stdio.h>
//int fib(int a)
//{
//    return a <= 2 ? a : fib(a - 1) + fib(a - 2);
//}
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    printf("%d", fib(a));
//    return 0;
//}

//��дһ������ long long factorial(int n)�����ڼ��� n �Ľ׳ˡ���Ҫ��ʹ�õݹ�ʵ�֣�
//#include <iostream>
//using namespace std;
//
//long long factorial(int n);
//
//int main() {
//
//    int n;
//    scanf("%d", &n);
//    printf("%lld", factorial(n));
//    return 0;
//}
//
//long long factorial(int n) {
//
//    // write your code here......
//    if (n == 1)
//        return 1;
//    return n * factorial(n - 1);
//}

//�������ģ��һ��������㡣 ���� 1 + 2 + 3.... + n - 1 + n)
//#include <stdio.h>
//long long jie(int n)
//{
//    if (n == 1)
//        return 1;
//    return n + jie(n - 1);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%lld", jie(n));
//    return 0;
//}

//ţţ����˽⵽�������İ�����(Ackmann)������
//������������һ����������Ѹ�ٵĺ���������һ�����������ݽṹ--���鼯�����Ÿ��Ӷȱ���Դﵽ�����������ķ���������
//������㰢���������ļ�������������Ľ����
//#include <stdio.h>
//int ackmann(long long  m, long long n)
//{
//    if (m == 0)
//        return n + 1;
//    if (m > 0 && n == 0)
//        return ackmann(m - 1, 1);
//    if (m > 0 && n > 0)
//        return ackmann(m - 1, ackmann(m, n - 1));
//    return 0;
//}
//int main()
//{
//    long long  n, m;
//    scanf("%lld %lld", &n, &m);
//    printf("%lld", ackmann(m, n));
//    return 0;
//}

//ţţ������һ������ digit(x, i) ����ʾ����� x �ĺ� i λ�����֡�
//#include <stdio.h>
//#include<math.h>
//int fl(int x, int i)
//{
//    if (i == 1)
//        return x % 10;
//    else
//        return fl(x / 10, i - 1) * 10 + x % 10;
//}
//int main()
//{
//    int x, i;
//    scanf("%d %d", &x, &i);
//    printf("%d", fl(x, i));
//    return 0;
//}