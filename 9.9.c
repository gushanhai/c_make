#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//�ߵ������� 32 λ�޷��������Ķ�����λ��
//uint32_t reverseBits(uint32_t n)
//{
//    uint32_t ret = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        ret |= (n & 1) << (31 - i);
//        n >>= 1;
//    }
//    return ret;
//}

//��дһ��������������һ���޷����������Զ����ƴ�����ʽ��������������Ʊ��ʽ������λ��Ϊ '1' �ĸ�����Ҳ����Ϊ������������
//int hammingWeight(uint32_t n)
//{
//    int count_1 = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        count_1 += (n & 1);
//        n >>= 1;
//    }
//    return count_1;
//}

//���������ַ��� s �� t ���ж������Ƿ���ͬ���ġ�
//��� s �е��ַ����԰�ĳ��ӳ���ϵ�滻�õ� t ����ô�������ַ�����ͬ���ġ�
//ÿ�����ֵ��ַ���Ӧ��ӳ�䵽��һ���ַ���ͬʱ���ı��ַ���˳�򡣲�ͬ�ַ�����ӳ�䵽ͬһ���ַ��ϣ���ͬ�ַ�ֻ��ӳ�䵽ͬһ���ַ��ϣ��ַ�����ӳ�䵽�Լ�����
//bool isIsomorphic(char* s, char* t)
//{
//    int len1 = strlen(s);
//    int len2 = strlen(t);
//    if (len1 != len2)
//        return false;
//    char haximap1[256] = { 0 };
//    char haximap2[256] = { 0 };
//    for (int i = 0; i < len1; i++)
//    {
//        if (haximap1[s[i]] == 0)//���s[i]��ֵ�Ƿ���haximap1�л�δ����
//            haximap1[s[i]] = t[i];//�����û���֣��ͽ�haximap1�е�ֵ�滻Ϊt[i]
//        else//������ֹ�
//        {
//            if (haximap1[s[i]] != t[i])//��haximap1[s[i]]�н��д洢��ֵ��t[i]���жԱ�
//                return false;//�����ͬ�ͷ���false
//        }
//    }
//    for (int i = 0; i < len1; i++)
//    {
//        if (haximap2[t[i]] == 0)
//            haximap2[t[i]] = s[i];
//        else
//        {
//            if (haximap2[t[i]] != s[i])
//                return false;
//        }
//    }
//    return true;
//}