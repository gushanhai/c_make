#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//������������¥�ݡ���Ҫ n ������ܵ���¥����
//ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�
//��һ�ַ���:
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

//�ڶ��ַ���:
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


//����һ���Ǹ����� numRows�����ɡ�������ǡ���ǰ numRows �С�
//�ڡ�������ǡ��У�ÿ�����������Ϸ������Ϸ������ĺ͡�
//����118��
//int** generate(int numRows, int* returnSize, int** returnColumnSizes)
//{
//    int** ret = (int**)malloc(sizeof(int*) * numRows);//���������һ��ָ�룬ÿ��ָ��ָ����ÿһ�еĿ�ͷ
//    *returnColumnSizes = (int*)malloc(4 * numRows);//���������ڱ���ÿ�и���������
//    for (int i = 0; i < numRows; i++)
//    {
//        ret[i] = (int*)malloc(4 * (i + 1));//Ϊÿ��������i+1���ռ����ڴ洢����
//        (*returnColumnSizes)[i] = i + 1;//��¼ÿһ�еĸ���
//        for (int j = 0; j <= i; j++)
//        {
//            if (i == j || j == 0)//���i==j����j==0˵����ǰ����������ǵ������У������е�ֵΪ1
//                ret[i][j] = 1;//�����������[i][j]��ֵΪ1
//            else//����ǰ��һ�еĵ�j����С����һ�е�j������һ�е�j-1���ĺ�
//            {
//                ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
//            }
//        }
//    }
//    *returnSize = numRows;//����������Ĵ�С����ΪnumRows
//    return ret;//���ط��صĶ�ά����
//}
