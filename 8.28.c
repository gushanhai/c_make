#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����һ���ַ�����һ������ k ����ȡ�ַ�����ǰk���ַ������
//��һ�ַ���
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char str[1000];
//    int k;
//    char str1[1000] = { 0 };
//    gets(str);
//    scanf("%d", &k);
//    memcpy(str1, str, k);
//    printf("%s", str1);
//    return 0;
//}
//�ڶ��ַ���
//#include <stdio.h>
//int main()
//{
//    char str[1000];
//    int k;
//    gets(str);
//    scanf("%d", &k);
//    str[k] = '\0';
//    printf("%s", str);
//    return 0;
//}

//ţţ��ǰ����ʦ����õ���һ������������(x, y), ţţ�������Ǿ����Ƕ����ˡ�
//����ţţ�ǵ���ʦ���߹���x��y��������n, ����x����y���������ڵ���k��
//ţţϣ�����ܰ�������һ���ж��ٸ����ܵ����ԡ�
//#include <stdio.h>
//int main()
//{
//    long n, k = 0;
//    long count = 0;
//    while (~scanf("%ld %ld", &n, &k))
//    {
//        if (k == 0)
//        {
//            printf("%ld\n", n * n);
//            continue;
//        }
//        for (long j = k + 1; j <= n; j++)
//        {
//            long help = n % j < k ? 0 : (n % j) - k + 1;
//            count += (j - k) * (n / j) + help;
//        }
//        printf("%ld\n", count);
//    }
//    return 0;
//}