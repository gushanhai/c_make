#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	 
//����һ���Ǹ����� rowIndex�����ء�������ǡ��ĵ� rowIndex �С�
/**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//    int* getRow(int rowIndex, int* returnSize)
//{
//    int** ret = (int**)malloc(sizeof(int*) * (rowIndex + 1));
//    for (int i = 0; i <= rowIndex; i++)
//    {
//        ret[i] = (int*)malloc(sizeof(int*) * (i + 1));
//        for (int j = 0; j <= i; j++)
//        {
//            if (i == j || j == 0)
//                ret[i][j] = 1;
//            else
//                ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
//        }
//    }
//    *returnSize = rowIndex + 1;
//    return ret[rowIndex];
//}

//����һ������ prices �����ĵ� i ��Ԫ�� prices[i] ��ʾһ֧������Ʊ�� i ��ļ۸�
//��ֻ��ѡ�� ĳһ�� ������ֻ��Ʊ����ѡ���� δ����ĳһ����ͬ������ �����ù�Ʊ�����һ���㷨�����������ܻ�ȡ���������
//��������Դ���ʽ����л�ȡ�������������㲻�ܻ�ȡ�κ����󣬷��� 0 ��
//int maxProfit(int* prices, int pricesSize)
//{
//    int min = prices[0];
//    int max = 0;
//    for (int i = 0; i < pricesSize; i++)
//    {
//        if (min > prices[i])
//            min = prices[i];
//        if (prices[i] - min > max)
//            max = prices[i] - min;
//    }
//    return max;
//}