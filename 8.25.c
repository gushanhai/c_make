#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����һ���������� numbers ��һ��Ŀ��ֵ target�������������ҳ���������������Ŀ��ֵ�������±꣬���ص��±갴�������С�
//��ע�����ص������±��1��ʼ���𣬱�֤targetһ����������������2��������ӵõ���
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
//{
//    // write code here
//    static int arr[2];
//    for (int i = 0; i < numbersLen; i++)
//    {
//        if (numbers[i] > target)
//            continue;
//        for (int j = i + 1; j < numbersLen; j++)
//        {
//            if (numbers[i] + numbers[j] == target)
//            {
//                arr[0] = i + 1;
//                arr[1] = j + 1;
//                *returnSize = 2;
//                return arr;
//            }
//        }
//    }
//    *returnSize = 0;
//    return 0;
//}

//����������Ϸ��the game of master mind�����淨���¡�
//�������4���ۣ�ÿ���۷�һ������ɫ�����Ǻ�ɫ��R������ɫ��Y������ɫ��G������ɫ��B����
//���磬�����������RGGB 4�֣���1Ϊ��ɫ����2��3Ϊ��ɫ����4Ϊ��ɫ������Ϊ�û�������ͼ�³���ɫ��ϡ�
//����ȷ�������ܻ��YRGB��Ҫ�ǲ¶�ĳ���۵���ɫ������һ�Ρ����С���Ҫ��ֻ�¶���ɫ����λ�´��ˣ�����һ�Ρ�α���С���ע�⣬�����С��������롰α���С���
//����һ����ɫ���solution��һ���²�guess����дһ�����������ز��к�α���еĴ���answer������answer[0]Ϊ���еĴ�����answer[1]Ϊα���еĴ�����
//��һ�ַ�����
//int* masterMind(char* solution, char* guess, int* returnSize)
//{
//    int* ret = (int*)malloc(2 * 4);
//    memset(ret, 0, 8);
//    *returnSize = 2;
//    int right[26];
//    int wrong[26];
//    memset(right, 0, 26 * 4);
//    memset(wrong, 0, 26 * 4);
//    for (int i = 0; i < 4; i++)
//    {
//        if (solution[i] == guess[i])
//        {
//            ret[0]++;
//        }
//        else
//        {
//            right[solution[i] - 'A']++;
//            wrong[guess[i] - 'A']++;
//        }
//    }
//    for (int i = 0; i < 26; i++)
//    {
//        ret[1] += right[i] > wrong[i] ? wrong[i] : right[i];
//    }
//    return ret;
//}

//�ڶ��ַ���:
//int* masterMind(char* solution, char* guess, int* returnSize)
//{
//    int* ret = (int*)malloc(2 * 4);
//    memset(ret, 0, 8);
//    *returnSize = 2;
//    for (int i = 0; i < 4; i++)
//    {
//        if (solution[i] == guess[i])
//        {
//            ret[0]++;
//        }
//    }
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            if (solution[i] == guess[j])
//            {
//                ret[1]++;
//                solution[i] = ' ';
//                guess[j] = ' ';
//                break;
//            }
//        }
//    }
//    ret[1] -= ret[0];
//    return ret;
//}