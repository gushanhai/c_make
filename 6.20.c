#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[20];
//    scanf("%s", arr);
//    getchar();
//    int a = 0, b = 0;
//    for (int i = 0; i < strlen(arr); i++)
//    {
//        if (arr[i] == 'A')
//            a++;
//        if (arr[i] == 'B')
//            b++;
//    }
//    if (a > b)
//        printf("A\n");
//    else if (a < b)
//        printf("B\n");
//    else
//        printf("E\n");
//    return 0;
//}


//��������Ϊn��ֻ��Сд��ĸ���ַ���s������m�β�����ÿ�ν�[l, r]��Χ������c1�ַ��ĳ�c2�������������ַ���
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    int n, m, l, r;
//    char a, b;
//    scanf("%d %d", &n, &m);
//    char arr[n];
//    scanf("%s", arr);
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d %d %c %c", &l, &r, &a, &b);
//        for (int j = l; j <= r; j++)
//        {
//            if (arr[j - 1] == a)
//            {
//                arr[j - 1] = b;
//            }
//        }
//    }
//    printf("%s", arr);
//    return 0;
//}


//�涨һ�ֶ��ڸ��ϴʵļ�д��ʽΪֻ����ÿ����ɵ��ʵ�����ĸ����������ĸ��д����������һ��
//���� ��College English Test�����Լ�д�ɡ�CET������Computer Science�����Լ�дΪ��CS������I am Bob����дΪ��IAB��
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[1000];
//    gets(arr);
//    char* p = arr;
//    while (*p)
//    {
//        if (*(p - 1) == ' ' || p == arr)
//        {
//            if (*p >= 'a' && *p <= 'z')
//                printf("%c", *p - 32);
//            else
//                printf("%c", *p);
//        }
//        p++;
//    }
//    return 0;
//}

//���� max3����Ϊ���������������ֵ���磺 max3(1, 2, 3) ���ؽ��Ϊ3��
//#include <stdio.h>
//int max3(int a, int b, int c)
//{
//    if (a > b)
//        b = a;
//    return b > c ? b : c;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%.2f", (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
//    return 0;
//}

//���[a, b]�������ж��ٸ�����λ֮��Ϊ5�ı���
//#include <stdio.h>
//int beishu(int a, int b)
//{
//    int count = 0;
//    for (int i = a; i <= b; i++)
//    {
//        int sum = i;
//        int val = 0;
//        while (sum)
//        {
//            val += sum % 10;
//            sum /= 10;
//        }
//        if (val % 5 == 0)
//            count++;
//    }
//    return count;
//}
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int x = beishu(a, b);
//    printf("%d", x);
//    return 0;
//}

//����һ�������������а�����������ɳ³ɳ³��Сħ�ɴ����������б�����������������Ļ����ͼ���������������ֱ����������Ϊֹ��
//������������ɳ³ɳ³��Сħ�ɴ��������һ��������������λ�ϵ����ֽ��мӺͣ��õ��µ�����
//�����������Ǹ�λ���Ļ�����ô������������
//#include <stdio.h>
//int bs(int a)
//{
//    int sum = 0;
//    while (a)
//    {
//        sum += a % 10;
//        a /= 10;
//    }
//    return sum;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int a = bs(n);
//    while (a > 9)
//    {
//        a = bs(a);
//    }
//    printf("%d", a);
//    return 0;
//}

//��ͳ��ĳ��������Χ[L, R]�����������У�����2���ֵĴ�����
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int count = 0;
//    for (int i = a; i <= b; i++)
//    {
//        int sum = i;
//        while (sum)
//        {
//            if (sum % 10 == 2)
//            {
//                count++;
//            }
//            sum /= 10;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//ţţ��ϲ�������ţ������õ�ͨѶ��˾���շѷ������£�
//1.ÿ�������շ�0.1Ԫ
//2.ÿ����Ϣ������������60�֣��������60�֣�������0.2Ԫ�ļ۸��շѡ�
//ţţ����·��� n �����ţ�����ţţһ��Ҫ�ɶ��ٶ��ŷ�
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    float count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] <= 60)
//        {
//            count += 0.1;
//        }
//        else
//        {
//            count += 0.2;
//        }
//    }
//    printf("%.1f", count);
//    return 0;
//}