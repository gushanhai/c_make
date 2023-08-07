#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

//第一种方法：
//typedef char STDatatype;
//typedef struct Stack
//{
//    STDatatype* a;
//    int top;
//    int capacity;
//}ST;
//void STInit(ST* phead)
//{
//    assert(phead);
//    phead->a = NULL;
//    phead->capacity = 0;
//    phead->top = 0;
//}
//void STDestory(ST* phead)
//{
//    assert(phead);
//    free(phead->a);
//    phead->a = NULL;
//    phead->capacity = 0;
//    phead->top = 0;
//}
//void STPush(ST* phead, STDatatype x)
//{
//    assert(phead);
//
//    if (phead->top == phead->capacity)
//    {
//        int newcapacity = phead->capacity == 0 ? 4 : phead->capacity * 2;
//        STDatatype* newnode = (STDatatype*)realloc(phead->a, sizeof(STDatatype) * newcapacity);
//        if (newnode == NULL)
//        {
//            perror("malloc fail");
//            exit(-1);
//        }
//        phead->a = newnode;
//        phead->capacity = newcapacity;
//    }
//    phead->a[phead->top] = x;
//    phead->top++;
//}
//void STPop(ST* phead)
//{
//    assert(phead);
//    assert(phead->top);
//    phead->top--;
//}
//
//int STSize(ST* phead)
//{
//    assert(phead);
//    return phead->top;
//}
//
//bool STEmbty(ST* phead)
//{
//    assert(phead);
//    return phead->top == 0;
//}
//
//STDatatype STTop(ST* phead)
//{
//    assert(phead);
//    assert(phead->top);
//    return phead->a[phead->top - 1];
//}
//bool isValid(char* s)
//{
//    char top;
//    if (s == NULL)
//        return NULL;
//    ST st;
//    STInit(&st);
//    while (*s)
//    {
//        switch (*s)
//        {
//        case '(':
//        case '{':
//        case '[':
//            STPush(&st, *s);
//            break;
//        case ')':
//            if (STEmbty(&st))//数量不匹配
//                return false;
//            top = STTop(&st);
//            STPop(&st);
//            if (top != '(')
//                return false;//括号不匹配
//            break;
//
//        case '}':
//            if (STEmbty(&st))
//                return false;
//            top = STTop(&st);
//            STPop(&st);
//            if (top != '{')
//                return false;
//            break;
//
//        case ']':
//            if (STEmbty(&st))
//                return false;
//            top = STTop(&st);
//            STPop(&st);
//            if (top != '[')
//                return false;
//            break;
//        }
//        s++;
//    }
//    bool ret = STEmbty(&st);
//    STDestory(&st);
//    return ret;
//}

//第二种方法：
//typedef char STDatatype;
//typedef struct Stack
//{
//    STDatatype* a;
//    int top;
//    int capacity;
//}ST;
//void STInit(ST* phead)
//{
//    assert(phead);
//    phead->a = NULL;
//    phead->capacity = 0;
//    phead->top = 0;
//}
//void STDestory(ST* phead)
//{
//    assert(phead);
//    free(phead->a);
//    phead->a = NULL;
//    phead->capacity = 0;
//    phead->top = 0;
//}
//void STPush(ST* phead, STDatatype x)
//{
//    assert(phead);
//
//    if (phead->top == phead->capacity)
//    {
//        int newcapacity = phead->capacity == 0 ? 4 : phead->capacity * 2;
//        STDatatype* newnode = (STDatatype*)realloc(phead->a, sizeof(STDatatype) * newcapacity);
//        if (newnode == NULL)
//        {
//            perror("malloc fail");
//            exit(-1);
//        }
//        phead->a = newnode;
//        phead->capacity = newcapacity;
//    }
//    phead->a[phead->top] = x;
//    phead->top++;
//}
//void STPop(ST* phead)
//{
//    assert(phead);
//    assert(phead->top);
//    phead->top--;
//}
//
//int STSize(ST* phead)
//{
//    assert(phead);
//    return phead->top;
//}
//
//bool STEmbty(ST* phead)
//{
//    assert(phead);
//    return phead->top == 0;
//}
//
//STDatatype STTop(ST* phead)
//{
//    assert(phead);
//    assert(phead->top);
//    return phead->a[phead->top - 1];
//}
//bool isValid(char* s)
//{
//    char top;
//    if (s == NULL)
//        return NULL;
//    ST st;
//    STInit(&st);
//    while (*s)
//    {
//        switch (*s)
//        {
//        case '(':
//        case '{':
//        case '[':
//            STPush(&st, *s);
//            break;
//        case ')':
//        case '}':
//        case ']':
//            if (STEmbty(&st))
//                return false;
//            top = STTop(&st);
//            STPop(&st);
//            if ((*s == ']' && top != '[') || (*s == '}' && top != '{') || (*s == ')' && top != '('))
//                return false;
//            break;
//        }
//        s++;
//    }
//    bool ret = STEmbty(&st);
//    STDestory(&st);
//    return ret;
//}

//第三种方法:
//typedef char STDatatype;
//typedef struct Stack
//{
//    STDatatype* a;
//    int top;
//    int capacity;
//}ST;
//void STInit(ST* phead)
//{
//    assert(phead);
//    phead->a = NULL;
//    phead->capacity = 0;
//    phead->top = 0;
//}
//void STDestory(ST* phead)
//{
//    assert(phead);
//    free(phead->a);
//    phead->a = NULL;
//    phead->capacity = 0;
//    phead->top = 0;
//}
//void STPush(ST* phead, STDatatype x)
//{
//    assert(phead);
//
//    if (phead->top == phead->capacity)
//    {
//        int newcapacity = phead->capacity == 0 ? 4 : phead->capacity * 2;
//        STDatatype* newnode = (STDatatype*)realloc(phead->a, sizeof(STDatatype) * newcapacity);
//        if (newnode == NULL)
//        {
//            perror("malloc fail");
//            exit(-1);
//        }
//        phead->a = newnode;
//        phead->capacity = newcapacity;
//    }
//    phead->a[phead->top] = x;
//    phead->top++;
//}
//void STPop(ST* phead)
//{
//    assert(phead);
//    assert(phead->top);
//    phead->top--;
//}
//
//int STSize(ST* phead)
//{
//    assert(phead);
//    return phead->top;
//}
//
//bool STEmbty(ST* phead)
//{
//    assert(phead);
//    return phead->top == 0;
//}
//
//STDatatype STTop(ST* phead)
//{
//    assert(phead);
//    assert(phead->top);
//    return phead->a[phead->top - 1];
//}
//bool isValid(char* s)
//{
//    char top;
//    if (s == NULL)
//        return NULL;
//    ST st;
//    STInit(&st);
//    while (*s)
//    {
//        if ((*s == '[') || (*s == '{') || (*s == '('))
//            STPush(&st, *s);
//        if ((*s == ']') || (*s == '}') || (*s == ')'))
//        {
//            if (STEmbty(&st))
//                return false;
//            top = STTop(&st);
//            STPop(&st);
//            if ((*s == ']' && top != '[') || (*s == '}' && top != '{') || (*s == ')' && top != '('))
//                return false;
//        }
//        s++;
//    }
//    bool ret = STEmbty(&st);
//    STDestory(&st);
//    return ret;
//}