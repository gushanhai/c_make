#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��������ת��Ϊ�������ͣ�Ҫ���������롣
//#include<stdio.h>
//int main() {
//    float a = 0;
//    while (scanf("%f", &a) != EOF)
//    {
//        printf("%.0f", a);
//    }
//}
// 

//����3�Ƴɼ���Ȼ������Ƴɼ�������ɼ�Ϊ������ʽ��
//һ�У�3�Ƴɼ����ÿո�ָ�����Χ��0~100����
//#include <stdio.h>
//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}

//��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ�
//����Ļ�������ѧ����ѧ�ţ�3�Ƴɼ���ע������ɼ�ʱ��������������ұ���2λС������
//#include <stdio.h>
//int main() {
//    int a;
//    float b, c, d;
//    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
//    return 0;
//}

//����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ������
//���У���һ��Ϊ������ݣ��ڶ���Ϊ�����·ݣ�������Ϊ�������ڡ����ʱ����·ݻ�����Ϊ1λ������Ҫ��1λ��ǰ�油0��
//#include <stdio.h>
//int main() {
//    int a, b, c;
//    scanf("%4d%2d%2d", &a, &b, &c);
//    printf("year=%d\nmonth=%02d\ndate=%02d\n", a, b, c);
//    return 0;
//}

//����������������Χ-231~231-1�������������������
//#include <stdio.h>
//int main() {
//    int a, b;
//    scanf("a=%d,b=%d", &a, &b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}

//ʵ����ĸ�Ĵ�Сдת���������������
//#include <stdio.h>
//int main()
//{
//    char a;
//    while (scanf("%c", &a) != EOF)
//    {
//        getchar();
//        putchar(a + 32);
//        printf("\n");
//    }
//    return 0;
//}

//ʵ���ַ����Ĵ�Сд��ĸ��ת��
//#include<stdio.h>
//int main()
//{
//	char ch[20];
//	gets(ch);
//	int i = 0;
//	while (ch[i])
//	{
//		if (ch[i] >= 'A' && ch[i] <= 'Z')
//		{
//			ch[i] += 32;
//		}
//		else if (ch[i] >= 'a' && ch[i] <= 'z')
//		{
//			ch[i] -= 32;
//		}
//		i++;
//	}
//	printf("%s", ch);
//	return 0;
//}

//�ж�һ������n�Ƿ�������
//#include <stdio.h>
//int main() {
//    int a;
//    scanf("%d", &a);
//    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//        printf("yes");
//    else
//        printf("no");
//    return 0;
//}

//�Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд����
//#include <stdio.h>
//
//int main() {
//    char a;
//    scanf("%c", &a);
//    if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}

//BMIָ��������������ָ�����������ع����������������ƽ���ó������֣�
//��Ŀǰ�����ϳ��õĺ����������ݳ̶��Լ��Ƿ񽡿���һ����׼��
//���磺һ���˵����Ϊ1.75�ף�����Ϊ68ǧ�ˣ�����BMI=68/(1.75^2)=22.2��ǧ��/��^2����
//��BMIָ��Ϊ18.5��23.9ʱ�������������ʾ������ڽ������ա�����ж����彡�������
//#include <stdio.h>
//#include<math.h>
//int main() {
//    float a, b;
//    scanf("%f %f", &a, &b);
//    float BMI = a / pow(b, 2);
//    if (BMI >= 18.5 && BMI <= 23.9)
//        printf("Normal");
//    else
//        printf("Abnormal");
//    return 0;
//}