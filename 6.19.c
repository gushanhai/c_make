#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//KiKi֪��ʲô���������֮���������ǲ�����Ũ�����Ȥ��
//����֪��������ǵ�ǰn�У����̰������������ǣ��������Ƕ���ʽ(a + b)��n�η�չ��������ϵ���ųɵ������Ρ�
//�����ʰ�����ÿ�еĶ˵���Ϊ1�� һ����ҲΪ1��ÿ�������������Ϸ����Ϸ�������֮�͡�
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

//KiKi��BoBo�� ���������塣Ҳ�����ھŹ����У�ֻҪ�����С��У���������Խ��������������������ͬ�����ӣ�
//���ܻ�ʤ�����������״̬���жϵ�ǰ��Ӯ��
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

//ɨ�׾����ÿһ��ÿһ�ж���һ�����֣�ÿ�����ֵĺ������뵱ǰλ�����ڵ�8�������У�
//�ж��ٸ��ף�����ͼ�У�����* ��ʾ���������ǰλ�þ����׵Ļ��������һ��* ��
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

//����д��һƪ��������ģ�������ƪ���ĵı������ж��ٸ��ַ���
//ע�⣺�����п��ܰ�����СдӢ����ĸ�������ַ����ո�ͻ��з���ͳ�Ʊ����� ����ʱ���ո�ͻ��з����������ڡ�
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

//�и����ϵͳ��¼���û���������Ϊ���û�����admin�����룺admin�����û������û��������룬�ж��Ƿ��¼�ɹ���
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

//��С��Ĵʻ�����С������ÿ����Ӣ��ѡ�����ʱ�򶼺�ͷ�ۡ��������ҵ���һ�ַ�����������֤����
//�����ַ���ȥѡ��ѡ���ʱ��ѡ�Եļ��ʷǳ���
//���ַ����ľ����������£�����maxn�ǵ����г��ִ���������ĸ�ĳ��ִ�����
//minn�ǵ����г��ִ������ٵ���ĸ�ĳ��ִ��������maxn - minn��һ��������
//��ô��С�����Ϊ���Ǹ�Lucky Word�������ĵ��ʺܿ��ܾ�����ȷ�Ĵ𰸡�
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int maxn = 0;//��ĸ���Ĵ���
//    int minn = 100;//��ĸ���ٵĴ���
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

//���� 980364535�����ǳ�����Ҫһλһλ����������Ǽ�λ��������������� ������ÿ��λ��һ�����ţ������ø��������ʶ���
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