#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	
//����ڽ����д�д�ַ�ת��ΪСд�ַ������Ƴ����з���ĸ�����ַ�֮�󣬶������Ŷ��ͷ��Ŷ���һ�����������Ϊ�ö�����һ�� ���Ĵ� ��
//��ĸ�����ֶ�������ĸ�����ַ���
//����һ���ַ��� s��������� ���Ĵ� ������ true �����򣬷��� false ��
//bool isPalindrome(char* s) {
//    if (*s == '\0')
//        return true;
//    int len = strlen(s);
//    int per = 0;
//    int last = len - 1;
//    for (int i = 0; i < len; i++)
//    {
//        if (!isalnum(s[per]))
//        {
//            per++;
//            continue;
//        }
//        if (!isalnum(s[last]))
//        {
//            last--;
//            continue;
//        }
//        if (isalnum(s[per]) && isalnum(s[last]))
//        {
//            if (tolower(s[per]) != tolower(s[last]))
//                return false;
//        }
//        per++;
//        last--;
//    }
//    return true;
//}

//����һ�� �ǿ� �������� nums ������ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
//�������Ʋ�ʵ������ʱ�临�Ӷȵ��㷨����������⣬�Ҹ��㷨ֻʹ�ó�������ռ䡣
//int singleNumber(int* nums, int numsSize)
//{
//    int ret = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        ret ^= nums[i];
//    }
//    return ret;
//}

//����һ������ columnNumber ���������� Excel �������Ӧ�������ơ�
//
//char* convertToTitle(int columnNumber) {
//    char* ret = (char*)malloc(27 * sizeof(char)); // �����㹻��Ŀռ�
//    int tmp = columnNumber;
//    int i = 0;
//    while (tmp)
//    {
//        ret[i++] = ((tmp - 1) % 26) + 'A';
//        tmp = (tmp - 1) / 26;
//    }
//    ret[i] = '\0';
//    for (int e = 0; e < i / 2; e++)
//    {
//        char a = ret[e];
//        ret[e] = ret[i - 1 - e];
//        ret[i - e - 1] = a;
//    }
//    return ret;
//}