#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	 
//����һ���������֣�����ת����������
//int romanToInt(char* s)
//{
//    int arr[26];
//    arr['I' - 'A'] = 1;
//    arr['V' - 'A'] = 5;
//    arr['X' - 'A'] = 10;
//    arr['L' - 'A'] = 50;
//    arr['C' - 'A'] = 100;
//    arr['D' - 'A'] = 500;
//    arr['M' - 'A'] = 1000;
//    int len = strlen(s);
//    int sum = 0;
//    for (int i = 0; i < len; i++)
//    {
//        int val = arr[s[i] - 'A'];
//        if (i < len - 1 && val < arr[s[i + 1] - 'A'])
//            sum -= val;
//        else
//            sum += val;
//    }
//    return sum;
//}

//�������������� a �� b ������ a �� b �� �� ���ӵ���Ŀ��
//��� x ����ͬʱ���� a �� b ������Ϊ x �� a �� b ��һ�� ������
//int commonFactors(int a, int b)
//{
//    int min = a < b ? a : b;
//    int ret = 0;
//    for (int i = 1; i <= min; i++)
//    {
//        if (a % i == 0 && b % i == 0)
//        {
//            ret++;
//        }
//    }
//    return ret;
//}

//����һ������ n ���Զ������ַ�������ʽ���ظ������� �������ƣ�base - 2����ʾ��
//ע�⣬�����ַ������� "0"�����򷵻ص��ַ����в��ܺ���ǰ���㡣	
//char* baseNeg2(int n)
//{
//    if (n == 1)
//        return "1";
//    if (n == 0)
//        return "0";
//    char* ret = (char*)calloc(32, 1);
//    int count = 0;
//    while (n)
//    {
//        ret[count++] = (n & 1) + '0';
//        n -= n & 1;
//        n /= -2;
//    }
//    for (int i = 0, j = count - 1; i < j; i++, j--)
//    {
//        char tmp = ret[i];
//        ret[i] = ret[j];
//        ret[j] = tmp;
//    }
//    return ret;
//}