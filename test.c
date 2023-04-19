#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
    //include 包含
    // c语言是一门结构化的程序设计语言
    //int 调用
    //main() 主函数 main函数是程序的入口，有且仅有一个
    //printf 在计算机上打印函数(全称为：print function)
    // 
    //“#”是指令形式 
    //printf 调用库函数中的函数（c语言本身提供的函数）
    //return 返回
    //数据类型
    //1.char 字符数据类型
    //2.short int 短整型
    //3.long 长整型
    //4.longlong 更长的整型
    //5.int 整型
    //6.float 单精度浮点型 
    //7.double双精度浮点型
    //c语言没有字符串类型
    //char 字符类型
    //%c 打印字符格式的数据
    //%d 打印整型十进制的数据
    //%f 打印浮点型书记（数字）
    //%p 以地址的形式打印
    //%x 打印十六进制数字
    //全局变量—定义在{}（代码块）之外的变量
    //局部变量—定义在{}（代码块）之内的变量
    //局部变量和全局变量的名字建议不要相同—容易误会，产生bug
    //当局部变量和全局变量相同时，局部变量优先


    //所占字节大小
    //printf(" %d\n", sizeof(char));//1
    //printf(" %d\n", sizeof(short));//2
    //printf(" %d\n", sizeof(int));//4
    //printf(" %d\n", sizeof(long));//4
    //printf(" %d\n", sizeof(long long));//8
    //printf(" %d\n", sizeof(float));//4
    //printf(" %d\n", sizeof(double));//8
    // int  一个int所占的大小为4个字节
    //输入数据使用输入函数——scanf
//int global = 2023;
//void test()
//{
//    printf("test()--%d\n", global);
//}
//int main()
//{
   /* test();
    printf("%d\n", global);*/
    //未声明的标识符需要声明(声明外部符号用extern)
    //extern int g_kkk;
    //printf("g_kkk=%d\n", g_kkk);
    //int num1 = 0;
    //int num2 = 0;
    //int sum = 0;
    //scanf("%d%d",&num1,&num2);// &取地址符号
    // scanf是c语言提供的标准而scanf_s不是c语言提供的标准（在头文件下添加#pragma warning(disable:4996)使用scanf就不会报错），像scanf_s不具有跨平台性和可移植性
    ////c语言规定，变量定义在当前代码块最前面
    ////局部变量的作用域时时当前所在的代码块
    // 全局变量的作用域是整个工程
    //sum = num1+num2;
    //printf("sum=%d\n", sum);
    //return 0;
//}
//int main()
//{
//    {
//        int a = 100;
//        printf("a=%d\n", a);//没问题的
//    }
//    printf("a=%d\n", a);//不行，会报错
//    //局部变量的生命周期是从{开始，从}从结束
//    //全局变量的生命周期和mian（）函数的生命周期是一样的，是整个程序的生命周期
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    scanf("%d%d", &num1, &num2);
//    sum = num1 + num2;
//    printf("sum=%d\n", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
    //int num = 8;//字面常量
    //printf("%d\n", num);
    //const int num = 4;//const修饰的常变量
    //printf("%d\n", num);
    //const 常属性
    //const int n = 10;//n是变量，但是又有常属性，所以我们说n为常变量
    //int arr[n] = {0};
   //return 0;
//}
//#include<stdio.h>
//#define定义的标识符常量
//#define还可以定义宏-带参数的
//#define MAX 10
//int main()
//{
//    int arr [MAX] = { 0 };
//    printf("%d\n", MAX);
//    return 0;
//}
//枚举常量（一一列举）枚举关键：enum
//#include<stdio.h>
//enum Sex
//{
//    MALE,//男
//    FEMALE,//女
//    SECRET//保密
//};
//int main()
//{
//    printf("%d\n",MALE);
//    printf("%d\n",FEMALE);
//    printf("%d\n",SECRET);
//
//    return 0;
//}
/*#include<stdio.h>
int main()
{
    char arr1[] = "abc";*///数组
    //'abc'--'a''b''c''\0'(\0是字符串的结束标志)
   /* char arr2[] = { 'a','b','c',0};
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    return 0;
}*/
//#include<stdio.h>
//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c',0};//\0的ascll编码的码值为0
//    printf("%d\n",strlen(arr1));//strlen-string length计算字符串长度的
//    printf("%d\n",strlen(arr2));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("abc\n");//\n是换行
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("c:\test\32\test.c");//\t是水平制表符（tab键）
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("Are you ok ??")// 在老版本中？？）是三字母词
//    return 0;
//}
// #include<stdio.h>
//int main()
//{
//    printf("c:\\test\\32\\test.c");//\\是表示一个\，防止\\被解释为一个转义序列符
//    return 0;
//}
//(\是用来转义其他字符的)
//#include<stdio.h>
//int main()    
//{
//    printf("%d\n", strlen("c:\test\32\test.c"));
//    //(\32是2个八进制数字)
//    //32作为八进制代表的内个十进制数字，作为ascll码值，对应的字符
//    //32转化为十进制是26，作为ascll码值代表的字符
//    return 0;
//}
//\ddd表示1~3个八进制数字
//\xdd表示2个十六进制数字 
//#include<stdio.h>
//int main()
//{
//    int input = 0;
//    printf("加入必特?\n");
//    printf("你要好好学习吗？(1/0)>:");
//    scanf("%d", &input);
//    if (input == 0)
//        printf("卖红薯");
//    else
//        printf("好offer");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int line = 0;
//    printf("加入比特\n");
//    while (line<20000)
//    {
//        line++;
//
//        printf("敲一行代码:%d\n",line);
//    }
//    if(line>=20000)
//    printf("拿到一份好offer\n");
//    return 0;
////}
//#include<stdio.h>
//int Add(int x, int y)//自定义Add函数
//{
//    int w = x+y;
//    return w;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("请输入两个数>:");
//    scanf("%d%d", &num1, &num2);
//    sum = Add(num1, num2);
//    printf("sum=%d\n", sum);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9 };//定义一个存放10个整数数字的数组
//    //printf("%d\n", arr[0]);
// 用下标的形式访问我们的元素
//    int i = 0;
//    while (i < 10)
//    {
//        printf("%d\n", arr[i]);
//        i++;
//    }
//    return 0;
//}
//#include<stdio.h> 
//int main()
//{
//    //移（二进制）位操作符
//    //    <<左移
//    //    >>右移
//    int a = 1;
//    //    整形1占4个字节-32bit位
//    //    00000000000000000000000000000001
//    int b = a << 2;
//    //b=a+1
//    printf("%d\n", b);
//    printf("%d\n", a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    //(二进制)位操作
//    //    &按位与
//    //    |按位或
//    //    ^按位异或
//    //计算规则：与：全一则一 或：有一则一 异或：有一则一全一则零
//    int a=3;
//    int b=5;
//    int c = a & b;
//    printf("%d\n", c);
//
//    return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int a = a + 10;
//    int a += 10;
//    int a = a - 10;
//    int a -= 10;
//    int a = a & 10;
//    int a &= 10;
    //复合赋值符
    //+= -= *= /= %= <<= >>= &= |= ^= 
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
    //int a = 10;
    ////sizeof：计算的是变量/类型所占空间的大小，单位是字节
    //printf("%d\n", sizeof(a));//4字节（计算的是整数变量a的大小）
    //printf("%d\n", sizeof(int));//4字节（计算的是类型int的大小）
    //printf("%d\n", sizeof a);//(sizeof计算一个变量名时可以省略（）)
    //printf("%d\n", sizeof int);//(sizeof计算一个类型时不可以省略（）)
//    int arr[10] = {0};
//    int geshu = 0;
//    printf("%d\n",sizeof(arr));//计算数组总大小
//    geshu = sizeof(arr) / sizeof(arr[0]);//给予计算数组个数的公式
//    printf("geshu=%d\n", geshu);//输出数组个数
//    return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    int a = 2;
//    int b = -a;
//    int c = 6;
//    //单目操作符(运算符只对一个变量进行操作)例如：正 负
//    int d = a + c;
//    //双目操作符（运算符对两个变量进行操作）例如：加 减 乘 除 
//    //三目操作符或者条件操作符（运算符对三个变量进行操作）例如：(a>b?a:b)
//    // !表示逻辑反操作符
//    int g = !c;
//    int h = +6;//+号表示正值，一般省略
//    int p = -55;//-负值
//    printf("%d\n", g);//输出值为0
//    return 0;
//}
//EOF是文件结束标志：end of line 值是：-1
//数组的大小（[]里面的）得用常量来指定
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 30;
//    if (a > b)
//        printf("两个数的较大值是：%d\n", a);
//    else
//        printf("两个数的较大值是:%d\n", b);
//
//    return 0;
//}
//#include<stdio.h>
//int F(int x , int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("a=请输入第1个数字>:\n");
//    printf("b=请输入第2个数字>:\n");
//    scanf("%d%d", &a, &b);
//
//    int f = 0;
//    f = F(a, b);
//    printf("较大值是：%d\n", f);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 0,1,2,3,4,5,6,7 };
//    printf("%d\n", sizeof(arr));
//    printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//    printf("%d\n", sizeof(int));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = ~a;//~是按（二进制）位取反,b是有符号位的整形,最高位是符号位，0代表为正数，1代表为负数
// //原码 反码 补码
// //    11111111111111111111111111111111（补码）
// //    11111111111111111111111111111110（反码）
// //    10000000000000000000000000000001（原码）
// //原码符号位不变其他位按位取反得到反码，反码+1得到补码
// //补码-1得到反码，反码符号位不变其他位按位取反得到原码
// 只要是整数，内存中保存的都是二进制的补码
// 整数的原码，反码，补码相同
// 负数保存的是补码
// 原码是按照正负写出的二进制序列
// 反码是原码的符号位不变，其他位按位取反得到的
// 补码是按照反码+1得到的
//    printf("%d\n", b);//使用的，打印的是这个数的原码
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    //int b = a++;
// 后置++，先将a的值赋给b，再将a++运算得到a=11（后置++，先使用，后++）
//    //printf("a=%d\nb=%d\n", a, b);//a=11 b=10
//    int c = ++a;
// 前置++，先将a++运算得到a=11，再将a的值赋给c（前置++，先++，后使用）
//    printf("a=%d\nc=%d\n", a, c);//a=11 c=11
//    int d = a--;
// 后置--，先使用，后--
//    printf("a=%d\nd=%d\n", a, d);//a=9 b=10
//    int f = --a;
// 前置--，先--，后使用 
//    printf("a=%d\nf=%d\n", a, f);//a=9 b=9
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = (int)3.14;//()代表强制类型转换，在该例题中（）将double数据类型强制转换为int数据类型,如果能不转换就不转换
//    printf("%d\n", a);//a=3
//    return 0;
// c语言中：非0--真，0--假
//}
//#include<stdio.h>
//int main()
//{
//    int a = 5;
//    int b = 0;
//    int c = a && b;
//    printf("%d\n", c);
//    //    && 逻辑与，全一则一,|| 逻辑或，有一则一
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 11;
//    int b = 111;
//    int max = 0;;
//    max = (a > b ? a : b);//(a>b?a:b)是一个条件表达式，他的执行是：如果a大于b，结果为真，取表达式里的a，如果为假取表达式里的b
//    printf("%d\n", max);
//    return 0;
//}
//逗号表达式：有逗号隔开的表达式
//#include<stdio.h>
//int ADD(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main()
//{
////    int arr[10] = { 0 };
////    printf("%d\n", arr[4]);//[]下标引用操作符
//    int a = 11;
//    int v = 22;
//    int sum = 0;
//    sum = ADD(a,v);//()函数调用操作符
//    printf(" %d\n ", sum);
//    return 0;
//}
//& * . ->
//#include<stdio.h>
//int main()
//{
//    //int a = 0;//局部变量
//    //int a =0； 完整写是：auto int a = 0;局部变量前都有auto（自动变量），一般情况下省略auto因为局部变量前都会加auto（局部变量都是自动变量）
//    //register int a = 0;//register是把a变成一个寄存器变量
//    //int 定义的变量是由符号的，int 完整的写是signed int
//    //unsigned int 定义的是无符号的变量（定义的全是正数）
//    //struct--结构体关键字
//    //union--联合体、共用体
//    //void--无、空
//    //typedef--类型定义--类型重定义
//    typedef unsigned int u_int;//将unsigned int重新定义为    u_int 
//    unsigned int sum1= 10;
//    u_int sum2 = 10;
//    printf("%d\n%d", sum1, sum2);
//    return 0;
//}
//#include<stdio.h>
//1.static修饰局部变量，是局部变量的生命周期变长
//1.1static修饰局部变量时,修饰的局部变量只初始化一次，从而延长了局部变量的生命周期,直到程序结束后才释放
//2.static也可以修饰全局变量
//2.1改变了变量的作用域，让静态的变量只能在自己所在的源文件内部使用，出了源文件就没法使用了(不可跨文件使用)
//3.static修饰函数,也是改变了函数的作用域或者说static修饰函数改变了函数之间的链接属性
//3.1普通的函数是具有外部链接属性的，static修饰的函数是将函数所具有的外部链接属性改变成了内部链接属性
//void test()
//{
//    static int a = 1;//加一个static，这个a变量就是一个静态的局部变量
//    a++;
//    printf("a=%d\n", a);
//}
//int main()
//{
//    int i = 0;
//    while (i < 5)
//    {
//        test();
//        i++;
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    extern  int g_kkk;//extern声明外部符号
//    printf("g_kkk=%d\n", g_kkk);
//    return 0;
//}
//#include<stdio.h>
//extern int Add(int,int);//声明外部函数
//int main()
//{
//    int a = 12;
//    int b = 55;
//    int sum = Add(a,b);
//    printf("sum=%d\n", sum);
//    return 0;
//}


//#include<stdio.h>
////函数的方式
//int Max(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = Max(a, b);
//    printf("max=%d\n", max);
//    return 0;
//}


//宏的方式（
//#include<stdio.h>
//#define Max(x,y) (x>y?x:y)(个人理解在该代码中宏==三目操作符)
//int main()
//{
//    int a = 22;
//    int b = 666;
//    int max = Max(a, b);
//    printf("max=%d\n", max);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 10;
//    //*p;//*--解引用操作符/间接访问操作符(对p进行解引用操作，找到它所指向的对象)
//    *p解引用是拿出存放在地址里的内容，&是取出地址
//    int* p = &b;//p是指针变量--有一种变量是用来存放地址的 p的类型是int*
//    printf("%p\n", &a);//%p是打印变量的地址的，%d是打印整形的变量只打印第一个初始地址，其他三个地址和第一个初始地址时连续的
//    //已知地址去求值是不可以的，相当于已知门牌号，但是楼还没有建好
//    printf("%p\n", p);
//    printf("%d\n", sizeof(p));
//    return 0;
//}
//#include<stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return(a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double a = 3.14;
//    double* od = &a;
//    //*od=666;
//    printf("%lf\n", a);
//    printf("%lf\n", *od);
//    printf("%d\n", sizeof(od));//不管什么样的指针类型，他的大小都是一样的
//    return 0;
//}
//struct 结构体关键字
//结构体：复杂对象--结构体--我们创造出来的一种类型
//#include<stdio.h>
//创建一种结构体类型
//struct Book
//{
//    char name[20];//给书籍取名字
//    short price;//price是定价
//};//;代表结束
//int main()
//{
    //利用创建好的结构体类型创建一个该类型的结构体变量
    //struct Book b1 = { "c语言程序设计",55 };
    // 如果要改书名，则需要用strcpy（）
    // strcpy--string copy字符串拷贝--库函数--头文件是string.h
    // 无法使用b1.name修改;原因：b1.name本质上是一个数组，b1.name是数组名
    // strcpy(b1.name,"c++");
    //printf("书名:%s\n", b1.name);
    //printf("价格:%d\n", b1.price);
    //b1.price = 50;
    //printf("修改后的价格:%d\n", b1.price);
    //struct Book* pb = &b1;
    //printf("%s\n",(*pb).name);
    //printf("%d\n", (*pb).price);
    //printf("%s\n", pb->name);
    //printf("%d\n", pb->price);
    //.  结构体变量去找成员
    //-> 结构体指针去找成员
    //return 0;
//}   
    // c语言是一门结构化的程序设计语言
    // 生活中有三种结构：顺序结构、选择结构、循环结构
//单分支写法
    //#include<stdio.h>
//int main()
//{
//    int a = 22;
//    if (a < 18)
//        printf("还未成年！");
//    else
//        printf("已经成年了！");
//    return 0;
//}
// 多分支常规写法
//#include<stdio.h>
//int main()
//{
//    int age = 30;
//    if (age < 18)
//        printf("未成年");
//    else if (age>=18&&age<28)//这里一定要用&&，否则计算机将多次判断（先判断age是否符合第一个判断条件，在利用第一个判断条件的值去判断是否符合第二个判断条件）
//        printf("青年");
//    else
//        printf("中年");
//    return 0;
//}


//多分支利用代码块（{}）写法
//#include<stdio.h>
//int main()
//{
//    int age = 16;
//    if (age < 18)
//    {
//        printf("未成年\n");
//        printf("不能谈对象");
//    }
//    else
//    {
//        if (age < 28 && age >= 18)
//            printf("成年");
//        else if (age < 60 && age >= 28)
//            printf("壮年");
//        else if (age < 90 && age >= 60)
//            printf("老年");
//        else if ("age>=90")
//            printf("长寿");
//    }
//    return 0;
//}
//悬空else （else和离他最近的未匹配的if进行匹配）
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//    else
//            printf("haha\n");
//    return 0;
//}
//如果想让悬空else发挥正常作用:只需要利用代码块进行改写
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//    }
//     else
//            printf("haha\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 4;
//    if (5=a)//=是赋值，==是等于
//    {
//        printf("hehe ");
//    }
//    return 0;
//}
//判断一个数是奇数还是偶数
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    printf("请输入一个数>：\n");
//    scanf("%d", &a);
//    if (0==a%2)
//        printf("是偶数");
//    else
//        printf("是奇数");
//    return 0;
//}
//输出1-100之间的奇数
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (a < 100)
//    {
//        if (1== a % 2)
//            printf("奇数是：%d\n", a);
//        a++;
//    }
// return 0;
//}
//switch(整形表达式)语句
//{
// //语句项:case整形常量表达式:
// 语句;
//}
//#include<stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d\n", &day);
//    switch (day)
//    {
//    case 1:
//        printf("星期1\n");
//        break;
//    case 2:
//        printf("星期2\n");
//        break;
//    case 3:
//        printf("星期3\n");
//        break;
//    case 4:
//        printf("星期4\n");
//        break;
//    case 5:
//        printf("星期5\n");
//        break;
//    case 6:
//        printf("星期6\n");
//        break;
//    case 7:
//        printf("星期7\n");
//        break;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d\n", &day);
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("工作日\n");
//    case 6:
//    case 7:
//        printf("休息日\n");
//        break;
//    default://用来处理非法情况
//        printf("你有病啊，输出星期%d干嘛",day);
//    }
//    return 0;
//}
// 利用continue跳出本次循环写一个非5的1-10的序列
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    while (i<10)
//    {
//        i++;
//        if(i==5)
//            continue;   
//        printf("%d ", i);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = getchar();//getchar获取一个字符
//    putchar(a);//打印一个字符，和printf（）效果相同
//    printf("%c\n", a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int ch = 0;//int ch 是因为getchar获取的是asc11码值而不是字符，所以用int
//    while ((ch = getchar()) != EOF)//getchar接收一个字符传到ch里面去,并且查看ch里面的字符是否和EOF相同
//        //EOF是文件结束标志--end of file,EOF本质是-1
//    {
//        putchar(ch);
//    }
//    return 0;
//}
/*#include<stdio.h>
int main()
{
    int ret = 0;
    int ch = 0;
    char password[20] = { 0 };
    printf("请输入密码:");
    scanf("%s", password);
    while((ch = getchar())!='\n')
    {
        ;
    }
    printf("请确认(y/n):>");
    ret = getchar();
    if (ret == 'y')
    {
        printf("确认成功");
    }
    else
    {
        printf("确认取消");
    }
    return 0;
}*/
//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch>'9')
//            continue;
//        putchar(ch);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    //for(表达式1；表达式2；表达式3；)
//    // 表达式1表示：初始化部分，用于初始化循环变量；表达式2表示：条件判断部分，用于表示判断何时结束；表达式3表示：调整部分，用于循环条件的调整
//    //循环语句；
//    int i = 0;
//    //  初始化  判断      调整
//    for(i = 1 ; i <= 10 ; i++)
//    {  
//        printf("%d ",i);
//    }
//    return 0;
//}


//不可在for循环体内修改循环变量，防止for循环失去控制(如果看不懂记得调试)
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (i = 5)
//             printf("hehe\n");
//     printf("haha\n");
//    }
//    return 0;
//}
// 
// 
// 
// 
//如果要在i==5时打印hehe，其他小于10时打印哈哈，正确方法如下：
//#include<stdio.h>
//int main()
//{
//    int i = -1;
//    while (i < 10)
//    {
//        i++;
//        {
//            if (i == 5)
//                printf("hehe\n");
//            else
//                printf("haha\n");
//        }
//        if (i >= 10)
//            break;
//    }
//    return 0;
//}
//for循环建议使用前闭后开区间的写法 
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int i = 0;
//    for (i = 0; i < 10; i++)//不要写成:for(i=0;i<=9;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//for循环中不要轻易省略初始化，判断条件，调整
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//
//    for (i=0; i < 10; i++)
//    {
//        for(;j<10;j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}


//  ++x和x++有区别：x++代表先使用，后++;++x代表：先++，在使用
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int a = 0;
//    a=i++;
//    printf("%d\n", a);//a的值：0
//    int c = 0;
//    int f = 0;
//    f = ++c;
//    printf("%d\n", f);//f的值：1
//}




//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0, j = 0; j = 0; i ++,j ++ )
//        j++;
//    return 0;
//}


//do....while（）循环
//特点是至少循环一次
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    do
//    {
//        printf("%d ", i);
//        i++;
//    }
//    while (i <=10);
//    return 0;
//}
//假如要计算5的阶乘，他的阶乘的值就是5*4*3*2*1
//#include<stdio.h>
//
//int main()
//{
//    int a = 0;//要算的阶乘的值
//    int b = 0;//for循环中公式的一部分
//    int ret = 1;//for循环中公式的一部分
//    scanf("%d", &a);//输入要算的阶乘的数字
//    for (b = 1; b <= a; b++)
//    {
//        ret = ret * b;//for循环计算阶乘的具体公式
//    }
//    printf("ret=%d\n", ret);
//    return 0;
//}
// 
// 
// 
// 
//完整的计算1的阶乘到10的阶乘的和
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int set = 1;
//    int sum = 0;
//   /* printf("a=请输入要计算的阶乘的数：");
//    scanf("%d", &a);*/
//    for (a = 1; a <= 10; a++)
//    {
//        int set = 1;
//        for (b=1; b <= a; b++)
//        {
//            set = set * b;
//        }
//        sum = sum + set;
//    }
//  
//    //printf("阶乘=%d\n", set);
//    printf("sum=%d", sum);
//    return 0;
//}



//更加简洁的方式计算1的阶乘到10的阶乘的和
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int set = 1;
//    int sum = 0;
//    /* printf("a=请输入要计算的阶乘的数：");
//     scanf("%d", &a);*/
//    for (a = 1; a <= 10; a++)
//    {
//   
//        set = set * a;
//        sum = sum + set;
//    }
//
//    //printf("阶乘=%d\n", set);
//    printf("sum=%d", sum);
//    return 0;
//}



//找到有序的数组中的一个元素
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int a = 8;
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        if (a == arr[i])
//        {
//            printf("找到了，下标为%d", i);
//            break;
//        }
//        if (a == sz)
//        {
//            printf("未找到");
//        }
//
//    }
//    return 0;
//}

//
//二分法写在有序的数组中查找指定的一个元素
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,10,11 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//    int f = 9;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] < f)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > f)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("找到了，下标为：%d", mid);
//            break;
//        }
//        if (left > right)
//        {
//            printf("未找到");
//    }
//    }
//    return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
//#include<stdio.h>
//#include<string.h>//执行strlen函数的头文件（调用strlen库函数）
//#include<windows.h>//执行Sleep函数的头文件
//#include<stdlib.h>//执行system函数的头文件
//int main()
//{
//    char arr1[] = "welcome to bit !!!!";
//    char arr2[] = "###################";
//    //int sz = sizeof(arr1) / sizeof(arr2[0]);//如果用sizeof计算字符串大小，计算出来的长度会计算/0，会比用strlen计算字符串长度多一位
//    //整形数组无需考虑计算/0，但是字符串或者字符数组需要考虑/0是否会引起下标+1
//    int sz = strlen(arr1);
//    int left = 0;
//    int right=sz-1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);//让打印的在屏幕上停留1秒，Sleep是停留，单位是毫秒，1000毫秒==1秒
//        if(left<right)
//        {
//            system("cls");//system是执行系统命令的函数，cls是清空屏幕的函数
//        }
//        else if (left == right)
//        {
//            break;
//        }
//        left++;
//        right--;
//    }
//    return 0;
//}

//编写代码，模拟用户登录情景，并且只能登录三次密码（只允许输入三次密码，如果密码正确，则登录成功，如果三次密码均错误，则登录失败退出程序）
//方法一：
//#include<stdio.h>
//int main()
//{
//    int password = 123456;
//    int b = 0;
//    int c = 1;
//    for (c = 1; c <=3; c++)
//    {
//        printf("请输入密码：");
//        scanf("%d", &b);
//        if (password == b)
//        {
//            printf("登录成功！");
//            break;
//        }
//        else if (c == 3)
//        {
//            printf("密码输入错误次数过多，退出系统！");
//        }
//    }
//    return 0;
//}
//
//方法二
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char password[20] = {0};
//    int c = 1;
//    for (c = 0; c < 3; c++)
//    {
//        printf("请输入密码：");
//        scanf("%s", &password);
//        if (strcmp(password,"123456") == 0)//字符串比较是否相同不能使用==，要使用函数strcmp
//        {
//            printf("登录成功！\n");
//            break;
//        }
//        else
//        {
//            printf("密码错误!\n");
//        }
//    }
//     if (c == 3)
//     {
//         printf("密码输入错误次数过多，退出系统！");
//     }
//    return 0;
//}


//比较三个数的较大值，并且一次打印
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int i = 2;
//    printf("请输入要比较的数：");
//    scanf("%d%d%d", &a,&b,&c);
//    if (a < b)
//    {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a < c)
//    %{
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if (b < c)
//    {
//        int tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("%d%d%d", a, b, c);
//    return 0;
//}


//打印1-100内所有三的倍数
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int a = 1;
//    for (i = 1; i < 101; i++)
//    {
//        a++;
//        if (a % 3 == 0)
//        {
//            printf("%d,", a);
//        }
//    }
//    return 0;
//}

//计算出两数之间的最大公约数
//#include<stdio.h>
//int main()
//{
//    int b = 0; 
//    int c = 0;
//    int a = 0;
//    scanf("%d%d", &b, &c);
//    while (a=b%c)
//    {
//        b = c;
//        c = a;
//    }
//    printf("%d\n", c);
//    return 0;
//}

//计算出1000年--2000年之间的闰年
// 第一种写法（比较复杂）
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    int count = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if (year % 4 == 0 && year % 100 != 0)
//        {
//            printf("%d ",  year);
//            count++;
//        }
//        else if (year % 400 == 0)
//        {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("\ncount=%d\n", count);
//    return  0;
//}


//第二种写法（简单）
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    int count = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//        {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("\n%d\n", count);
//    return 0;
//}

//计算100-200之间的素数
//第一种：试除法（将100-200之间的所有数挨个试一次）
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    for (i = 100;i <= 200; i++)
//    {
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        if (j==i)
//        {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("\ncount=%d\n", count);
//    return 0;
//}

//第二种写法： 只需要计算出要计算的素数的一半的值或者计算出要计算素数的开平方的值,在判断这个区间内是否可以被需要判断素数的数整除
//sqrt-开平方的数学库函数，要引用math.h头文件
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int j = 0;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        if (j > sqrt(i))
//        {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("\ncount=%d\n", count);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        if (i == j)
//        {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("\ncount=%d\n", count);
//    return 0;
//}




//计算出a的值
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        if (b >= 20)break;
//        if (b % 3 == 1)
//        {
//            b = b + 3;
//            continue;
//        }
//        b = b - 5;
//    }
//    printf("a=%d b=%d",a,b);
//    return 0;
//}


//计算出1-100之间出现了多少个9
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 10 == 9 || i / 10 == 9)
//        {
//            printf("%d ", i);
//        }
//    }
//    printf("\ncount=%d", count);
//    return 0;
//}

//计算1-100之间出现了多少次9
//#include<stdio.h>
//int main()
//{
//    int count = 0;
//    int a = 0;
//    for (a = 1; a <= 100; a++)
//    {
//        if (a % 10 == 9)
//        {
//            count++;
//        }
//        if (a / 10 == 9)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}




//计算出1/1-1/2+1/3-...+1/99-1/100的值，并且打印出来
//#include<stdio.h>
//int main()
//{
//    double b = 0.0;
//    int a = 0;
//    int flat = 1;
//    for (a = 1; a <= 100; a++)
//    {
//        b += flat*1.0/a;
//        flat = -flat;
//    }
//    printf("%f\n", b);
//    return 0;
//}

//求出10个整型中最大的数并且打印出来
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int a = 0;
//    int max = arr[0];
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (a = 0; a < sz; a++)
//    {
//        if(arr [a] > max)
//        {
//            max = arr[a];
//        }
//    }
//    printf("max=%d\n", max);
//    return 0;
//}

//写出9*9乘法口诀表
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    for (a = 1; a <= 9; a++)
//    {
//        int b = 0;
//        for (b = 1; b <= a; b++)
//        {
//            printf("%d*%d=%-2d ", a, b, a * b);//%2d向前补齐，%-2d向后补齐
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//    int left = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int right = sz - 1;
//    int f = 18;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid]<f)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid]>f)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("找到了，下表是:%d", mid);
//            break;
//        }
//        if (left > right)
//        {
//            printf("没找到");
//        }
//    }
//    return 0;
//}

//猜数字游戏
//#include<stdlib.h >
//#include<stdio.h>
//#include<time.h>
//void game()
//{
//    1.生成一个随机数
//     rand()--生成随机数函数
//    2.猜数字
//    int a = 0;
//    int b = 0;
//    拿时间戳来设置随机函数的生成起始点
//    时间戳
//    是当前计算机的时间减去计算机的起始时间（1970.1.1.0：0：0）=（xxx）秒
//   时间戳用time函数表示,time用来获取当前计算机的时间，返回的时间戳的类型是time_t
//    a = rand() % 100 + 1;//生成一个随机数字
//    while (1)
//    {
//        printf("请输入猜测的数字：>");
//        scanf("%d", &b);
//        if (b < a)
//        {
//            printf("猜小了\n");
//        }
//        else if (b > a)
//        {
//            printf("猜大了\n");
//        }
//        else
//        {
//            printf("猜对了\n");
//            break;
//        }
//    }
//
//}
//
//RAND_MAX
//rand()函数的在0-0x7FFF之间（0x代表十六进制）（转换为十进制就是在0--32767之间）
//使用rand（）函数必须加#inclulde<stdlib.h>头文件
//void menu()
//{
//    printf("*********************\n");
//    printf("****1.play 0.exit****\n");
//    printf("*********************\n");
//}
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("请选择：>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 0:
//            printf("退出系统");
//            break;
//        case 1:
//            game();
//            break;
//        default:
//            printf("选择错误\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}

//逻辑：1.先写出主函数，在主函数中写出最少执行一次的循环，在循环中判断是否进入游戏还是退出系统还是输入错误
//2.写出菜单模块
//3.写出游戏模块

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//    printf("****************************\n");
//    printf("****1.play    0.exit    ****\n");
//    printf("****************************\n");
//}
//void game()
//{
//    int b = 0;
//    int c = 0;
//    b = rand() % 100 + 1;
//    while (1)
//    {
//        printf("请猜测: >");
//        scanf("%d", &c);
//        if (c < b)
//        {
//            printf("猜小了\n");
//        }
//        else if (c > b)
//        {
//            printf("猜大了\n");
//        }
//        else
//        {
//            printf("猜对了\n");
//            break;
//        }
//    }
//}
//int main()
//{
//    int a = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("是否进入游戏：>");
//        scanf("%d", &a);
//        switch (a)
//        {
//        case 0:
//            printf("退出系统\n");
//            break;
//        case 1:
//            game();
//            break;
//        default:
//            printf("选择错误\n");
//            break;
//        }
//    } while (a);
//    return 0;
//}

//goto语句：使用goto跳转到标记的标号
//尽量少使用goto语句
//#include<stdio.h>
//int main()
//{
//again:
//    printf("dkjfksd\n");
//    goto again;
//    return 0;
//}
//如果在一个深层次的嵌套中一次性跳出多层循环
//如果灾难发生，跳出循环去解决灾难
//#include<stdio.h>
//int main()
//{
//    for
//    {
//            for
//            {
//                if (disaster)//disaster灾难
//                    goto error;
//            }
//    }
//error:
//    if(disaster)
//    return 0;
//}
//使用  goto写一个关机程序
//1.先写一个主函数，在主函数中写一个60s后关机命令模块
//2.再写一个循环，再循环中写如果输入“我是猪”
//写一个对比输入模块，如果相同就取消关机程序，如果不同就继续关机
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    char a[20] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("电脑将在60s后关机，如果不想关机，请在60s内输入:我是猪\n");
//    scanf("%s", &a);
//    if (strcmp(a, "我是猪") == 0)//strcmp--比较两个字符串的内容是否相同
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//
//    }
//    return 0;
//}

//使用循环写一个不用goto的关机程序
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    int a[20] = { 0 };
//    system("shutdown -s -t 60");
//    while (1)
//    {
//        printf("请注意，电脑将在60s后关机，如果不想电脑关机，请输入我是猪>:\n");
//        scanf("%s", &a);
//            if (strcmp(a, "我是猪") == 0)
//            {
//                system("shutdown -a");
//                break;
//            }
//    }
//    return 0;
//}


//函数是一个大型程序中的部分代码，有一个或多个语句块组成，负责完成某项特定任务。
//c语言中函数分两类：1.库函数--C语言本身自带的函数提供给我们使用
//2.自定义函数--自己
//c语言常用库函数：
//io函数--input函数，output函数
//字符串操作函数--操作字符串的函数--strlen(字符串长度):string length ;strcpy(字符串拷贝):string copy
// 字符操作函数--判断一个字符是否大写，将大写转为小写，将小写转为大写
// 内存操作函数--memset
// 日期/时间函数--time（）
//数学函数--math（）——（sqrt（开平方函数））
//其他库函数
//#include<stdio.h>
//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("请输入要计算的数字：>");
//    scanf("%d%d", &a, &b);
//    int sum = Add(a, b);
//    printf("sum=%d",sum);
//    return 0;
//}
//使用strcpy(目的地数组,源文件)时会将/0也copy
//使用%s打印时在遇到/0时会停止打印
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//    char arr1[] = "bit";//确保你的目的地大小一定要比源文件大，否则会溢出，变为bug
//    char arr2[20] = "##########";
//    strcpy(arr2, arr1);
//    printf("%s\n", arr2);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    //memset--memory（内存） set（设置）：将指向ptr的num个字节空间变成value
//    char arr[] = "hello world";
//    memset(arr, '*', 5);//'*'在内存中使用asc11来存储的，asc11是整数
//    printf("%s\n", arr);
//    return 0;
//}
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
////主函数，菜单中询问进入游戏还是退出系统，如果进入游戏，则跳转至游戏
//
//void menu()
//{
//    printf("#######################################\n");
//    printf("####  1.play                 0.exit####\n");
//    printf("#######################################\n");
//}
//void game()
//{
//    int b = 0;
//    int c = 0;
//    b = rand() % 100 + 1;
//    while (1)
//    {
//        printf("请猜测：>");
//        scanf("%d", &c);
//        if (c < b)
//        {
//            printf("猜小了\n");
//        }
//        else if (c > b)
//        {
//            printf("猜大了\n");
//        }
//        else
//        {
//            printf("猜对了\n");
//            break;
//        }
//    }
//}
//int main()
//{
//    int a = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("是否进入游戏：>");
//        scanf("%d", &a);
//        switch (a)
//        {
//        case 0:
//            printf("退出系统\n");
//            break;
//        case 1:
//            game();
//            break;
//        default:
//            printf("选择错误\n");
//            break;
//        }
//    } while (a);
//    return 0;
//}
//#include<stdio.h>
//交换两个整型变量的内容
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("请输入两个数:");
//    scanf("%d%d", &a, &b);
//    printf("a=%d b=%d\n", a, b);
//
//    int tmp = 0;//创建一个临时变量
//    tmp = a;//使临时变量的值变为a的值
//    a = b;
//    b = tmp;
//    printf("a=%d b=%d\n", a, b);
//    return 0;
//}
//#include<stdio.h>
//void的意思是没有返回值
//这种swap的值不会返回x，y的值，a，b的值在swap中进行交换后没有返回，a，b的值不变
//void Swap(int x, int y)
//{
//    int tmp = 0;
//    tmp = x;
//    x = y;
//    y = tmp;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("请输入两个数：");
//    scanf("%d%d", &a, &b);
//    Swap(a, b);
//    printf("a=%d b=%d",a,b);
//    return 0;
//}

//*a使用解引用（指针）拿出a的地址里的内容，&是取出a的地址
//#include<stdio.h>
//void Swap(int* x, int* y)
//{
//    int tmp = 0;
//    tmp = *x;
//    *x = *y;
//    *y = tmp;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    Swap(&a, &b);
//    printf("a=%d b=%d", a, b);
//    return 0;
//}

//1.主函数，至少执行一次，判断是否进入游戏，
//3.进入游戏，生成1-100之间的随机数
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void game()
//{
//    int b = 0;
//    int c = 0;
//    b = rand() % 100 + 1;
//    while (1)
//    {
//        printf("请猜测数字:");
//        scanf("%d", &c);
//        if (c > b)
//        {
//            printf("猜大了\n");
//        }
//        else if (c < b)
//        {
//            printf("猜小了\n");
//        }
//        else
//        {
//            printf("猜对了\n");
//            break;
//        }
//    }
//}
//void menu()
//{
//    printf("****************************\n");
//    printf("****1.paly        0.exit****\n");
//    printf("****************************\n");
//}
//int main()
//{
//    int a = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("请选择：");
//        scanf("%d", &a);
//        switch (a)
//        {
//        case 0:
//            printf("退出系统\n");
//            break;
//        case 1:
//            game();
//            break;
//        default:
//            printf("输入有误\n");
//            break;
//        }
//    } while (a);
//    return 0;
//}
//形参--形式参数--形式上的参数--一般情况下时不存在的
// 形参:形式参数只有在被调用的时候也才会实例化（分配内存，开拓一片内存出来供形参使用，等函数调用完成后就会自动销毁,因此，形参只在函数中有效）
//形参：指函数名后括号内的变量，例如：int Add(int x,int y)里的x，y。
//实参：真实传给函数的参数，例如：Swap(a,b)；和Swap(&a,&b。(Swap是自定义函数)
//无论实参时何种类型的量（常量，变量，函数，表达式等），在进行调用时都必须要有确定的值
//当实参的值传给形参时，形参就相当于临时拷贝的一份实参，形参的修改时不会改变是实参的值 
//#include<stdio.h>
//void Add(int* x, int *y)
//{
//    int tmp = 0;
//    tmp = *x;
//    *x = *y;
//    *y = tmp;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    Add(&a,&b);   //传址调用：将实参的地址传过去，这种方式会改变实参的值。通过函数内部来改变外部变量的值需要传址
//    printf("a=%d b=%d", a, b);
//    return 0;
//}
//#include<stdio.h>
//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sum=Add(a, b);        //传值调用：将实参的值传过去，实参和形参占用不同的内存块，对形参的修改不会影响实参的值  
//    printf("sum=%d", sum);
//    return 0;
//}
// 使用函数计算100-200之间的素数
//#include<stdio.h>
//#include<math.h>
//int is_prime(int x)
//{
//    int y = 0;
//    for(y=2;y<x;y++)
//    {
//        if (x % y == 0)
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int a = 0;
//    int count = 0;
//    for (a = 100; a <= 200; a++)
//    {
//        if (is_prime(a) == 1)
//        {
//            count++;
//            printf("%d ", a);
//        }
//    }
//    printf("count=%d", count);
//    return 0;
//}
//#include<stdio.h>
//int is_prime(int x)
//{
//    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//    {
//        return 1;
//    }
//    else
//        return 0;
//
//}
//int main()
//{
//    int year = 0;
//    int count = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if (is_prime(year) == 1)
//        {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("count=%d", count);
//    return 0;
//}
// 受用函数写二分法
//#include<stdio.h>
//int cz(int arr[], int y, int h)//实际上数组arr是一个指针
//{
//    int left = 0;
//    int right = h - 1;
//    while (left<=right)
//    {
//        int mid = (left + right) / 2;
//        if (y > arr[mid])
//        {
//            left = mid+1;
//        }
//        else if (y < arr[mid])
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//    int a = 13;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int c = 0;
//    c=cz(arr, a,sz);//传过去的是数组arr的首元素地址 
//    if(c==-1)
//    {
//        printf("没找到");
//    }
//    else
//    {
//       printf("找到了，下标是%d", c);
//    }
//    return 0;
//}
// 每调用一次num，num的值+1
//#include<stdio.h>
//void Add(int* x)
//{
//    (*x)++;//++的优先级比较高，先计算x++在解引用，所以是(*x)++
//}
//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("num=%d", num);
//    return 0;
//}
//嵌套调用
//#include<stdio.h>
//void cs()
//{
//    printf("hehe\n");
//}
//int main()
//{
//    int i = 0;
//    for(i=1;i<=3;i++)
//    {
//        cs();
//    }
//    return 0;
//}
//使用链式访问计算一个字符串的长长度
// 将一个函数的返回值当作另一个函数的参数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    printf("%d", strlen("sdljfsjdfldsjf"));//14   
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    //printf(返回值是屏幕上打印字符的个数)
//    printf("%d", printf("%d", printf("%d", 43)));//43 ,2 ,1
//    return 0;
//}
//函数声明：告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体存不存在无关紧要
//函数的声明要放在函数的开头使用，要满足先声明后使用。
//函数声明一般要放在头文件中。
// 例如：独立写一个模块：加减乘除模块，在主函数中进行声明使用。
// 防止函数内部杂乱
// 
//函数的定义：函数的定义是指函数的具体实现，交代函数的功能实现。
//#include<stdio.h>
//#include "add.h"
//int main()
//{
//    int a = 0;
//    int b =0;
//    printf("请输入两个数:");
//    scanf("%d%d", &a, &b);
//    int sum = Add(a, b);
//    printf("sum=%d",sum);
//    return 0;
//}
//#include<stdio.h>
////递归常见的错误--stack overflow：栈溢出
// 递归如果没有限制将会陷入死递归
// //递归有两个条件：1.递归必须有限制条件
// //2.每递归调用后必须越来越接近限制条件
////栈溢出是将栈区内存用完
////内存大概分为三个区域：栈区，堆区，静态区
////栈区放局部变量，函数的形参
////堆区放动态开辟的内存
////静态区放static修饰的变量和全局变量
////unsigned int:无符号整型，只能取正值，不能取负值
//int main()
//{
//    printf("hehe\n");
//    main();
//    return 0;
//}
// 用递归每次打印出一个数字
//#include<stdio.h>
//void print(int x)
//{    
//    if (x > 9)
//    {
//        print(x / 10);
//    }   
//    printf("%d ", x%10);
//}
//int main()
//{
//    unsigned int a = 0;
//    printf("请输入:");
//    scanf("%d", &a);
//    print(a);
//    return 0;
//}
// 用循环计算数组长度
//#include<stdio.h>
//int my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main()
//{
//    char a[] = "djkfjkdjf";
//    int len = my_strlen(a);
//    printf("%d", len);
//    return 0;
//}
// 用递归计算数组长度
//#include<stdio.h>
//int my_strlen(char* str)
////将事情简单化，大事化小，小事化了
////my_strlen("bit")
////1+my_strlen("it")
////1+1+mystrlen("t")
////1+1+1+my_strlen("/0")
////1+1+1+0
//{//
//
//    if (*str != '\0')
//    {
//        return 1 + my_strlen(++str);
//    }
//    else
//        return 0;
//}
//int main()
//{
//    char arr[] = "djkfjkdjf";
//    int len = my_strlen(arr);
//    printf("len=%d\n", len);
//    return 0;
//}              

//用递归计算数组长度
//#include<stdio.h>
//int str_len(char* str)
//{
//    if (*str != '\0')
//        return 1 + str_len(str+1);
//    else
//        return 0;
//}
//int main()
//{
//    char arr[] = "dksflkdsfskdf" ;
//    int ss=str_len(arr);
//    printf("%d", ss);
//    return 0;
//}
// 
// 用循环计算阶乘
//#include<stdio.h>
//int Fac(int x)
//{
//    int a = x;
//    int ret = 1;
//    for (a = x; a >=1; a--)
//    {
//        ret *= a;
//    }
//    return ret;
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    printf("请输入要计算的数:");
//    scanf("%d", &n);
//    ret=Fac(n);
//    printf("%d", ret);
//    return 0;
//}

//用递归计算阶乘
//#include<stdio.h>
//int Fac(int x)
//{
//    if (x > 1)
//        return x = x * Fac(x - 1);
//    else
//        return 1;
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    printf("请输入要计算的数:");
//    scanf("%d", &n);
//    ret = Fac(n);
//    printf("%d", ret);
//    return 0;
//}

//斐波那契数列
// 1 1 2 3 5 8 13 21 34 55 89
//TDD--测试驱动开发：先去想如何实现这个函数，再去想怎么去写
// 使用递归解决斐波那契数列效率太低
//#include<stdio.h>
//int count = 0;
//int Fib(int x)
//{
//    if (x == 3)//计算第三个斐波那契数列的次数
//    { 
//        count++;
//    }
//    if (x <= 2)
//        return 1;
//    else
//        return Fib(x - 1) + Fib(x - 2);
//}
//int main()
//{
//    int a = 0;
//    int ret = 0;
//    printf("请输入：");
//    scanf("%d", &a);
//    ret=Fib(a);
//    printf("%d", ret);
//    printf("\ncount=%d\n", count);
//    return 0;

//}
//使用循环解决斐波那契数列效率更高，速度更快但是循环容易出现栈溢出问题
//#include<stdio.h>
//int Fib(int x)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (x > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        x--;
//    }
//    return c;
//}
//int main()
//{
//    int a = 0;
//    int ret = 0;
//    printf("请输入:");
//    scanf("%d", &a);
//    ret = Fib(a);
//    printf("ret=%d", ret);
//    return 0;
//}
//虽然递归有限制条件，每次递归接近限制条件，但还是会陷入栈溢出，因为栈区内存被分完了
//#include<stdio.h>
//test(int x)
//{
//    if (x < 10000)
//    {
//        test(x + 1);
//    }
//}
//int main()
//{
//    test(1);
//    return 0;
//}
//汉诺塔问题
// 先将a柱上的最小的挪到c柱，再将a柱上最小的挪到b柱，再将c柱上的挪到b柱，

//青蛙跳问题
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4 };//不完全初始化，剩下的元素初始化默认为0
//    int arr2[5] = { 'a','b' };//arr2和arr3的存储结果是相同的，但是存储方式不同，arr2只有两个字符a，b
//    int arr3[5] = "ab";//arr3有三个字符a，b，/0
//    //strlen是计算字符串长度的，只能针对字符串求长度--是库函数--需要strlen.h头文件
//    //sizeof是计算变量、数组、类型的大小，单位是字节--操作符
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c' };
//    printf("%d\n", sizeof(arr1));
//    printf("%d\n", sizeof(arr2));
//    printf("%d\n", strlen(arr1));
//    printf("%d\n", strlen(arr2));//因为strlen只能计算字符串长度，并且要找到/0才能结束，所以是随机值 
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//    int i = 1;
//    int sz = sizeof(arr) / sizeof(arr[0]);//打印数组中每个元素对应的地址
//    for (i = 0; i < sz; i++)
//    {
//        printf("arr[%d]=%d\n", i, &arr[i]);
//    }
//    return 0;
//}
// 二维数组
//#include<stdio.h>
//int main()
//{
//           几行 几列   第一行数组元素 第二行数组元素
//    int arr[3][4] = { {1,2,3},{4,5} };
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[3][4] = { {1,2,3,},{1,9,5,7} };
//    int a = 0;
//    for (a = 0; a < 3; a++)
//    {
//        int b = 0;
//        for (b = 0; b < 4; b++)
//        {
//            printf("%d",arr[a][b]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//冒泡排序
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//    int a = 0;
//    for (a = 0; a < sz-1; a++)//走几次
//    {
//        int b = 0;
//        for (b = 0; b < sz - 1-a; b++)//每次检查数组的几个元素
//        {
//            if (arr[b] > arr[b + 1])//比较数组两个数的大小
//            {
//                int tmp = arr[b];//进行交换
//                arr[b] = arr[b+1];
//                arr[b + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int c = 0;
//    int arr[] = { 10,9,8,45,55,6,8,9,1,4,3,2,1 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble_sort(arr,sz);
//    for (c = 0; c < sz; c++)
//    {
//        printf("%d ", arr[c]);
//    }
//    return 0;
//}
//数组名一般指数组的首元素地址，两个例外：
//1.sizeof（arr）：是指整个数组，sizeof（arr）是计算整个数组的大小
//2.&数组名，数组名代表整个数组，&数组名取得是整个数组的地址
//&数组名实际打印出的结果和数组的第一个元素的地址相同，这是因为&数组名只显示整个元素的起始地址
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7 };
//    printf("%p\n", arr);
//    printf("%p\n", arr + 1);
//
//    printf("%p\n", &arr[0]);//打印数组第一个 元素地址
//    printf("%p\n", &arr[0] + 1);//打印数组第二个元素地址  
//
//    printf("%p\n", &arr);
//    printf("%p\n", &arr + 1);//&arr+1是跳过了整个数组，打印出的地址是末元素地址-首元素地址（大小是元素）
//    return 0;
//}
//对于移位操作符，不要移动负数位，并且只能作用于整数
// int num=1；
// num>>-1;
// 这种是wei是标准未定义的
//右移位移操作符
//1.算术操作符
// 右边丢弃，左边补原符号位
//2.逻辑操作符
// 右边丢弃，左边补0
//正数三码合一，负数的内存保存是补码，打印的是原码
//反码是原码的符号位不变，其他位取反
//补码是反码的最后一位+1
//左移操作符
//左边丢弃，右边补0
//#include<stdio.h>
//int main()
//{
    //int a = -1;
    //int b = a >> 1;
    //printf("%d", b);//-1
    //int a = 8;
    //int b = a >> 1;
    //printf("%d", b);//4
    //int a = -1;
    //int b = a << 1;
    //printf("%d", b);//-2


//}
//#include<stdio.h>
//int main()
//{
//    //设置临时变量进行交换
//    //int a = 5;
//    //int b = 3;
//    //int tmp = 0;
//    //tmp = a;
//    //a = b;
//    //b = tmp;
//     
//     
//    //使用加减法进行交换
//    //加减法进行交换可能会溢出（因为会产生进位）
//    //int a = 5;
//    //int b = 3;
//    //a = a + b;
//    //b = a - b;
//    //a = a - b;
//
//    //使用异或
//    //异或不会产生进位，不会溢出
//    //异或是加密解密的过程，可以理解为密码00
//    //异或不会使用，1.代码效率低（没有设置临时变量来的快）2.可读性差
//    int a = 5;//101
//    int b = 3;//011
//    a = a ^ b;//110
//    b = a ^ b;//101
//    a = a ^ b;//011
//    printf("a=%d b=%d", a, b);
//    return 0;
//}
//计算一个数的二进制有多少个1
//使用%2在/2得到这个数的二进制位
//这种算法不能计算负数 
//#include<stdio.h>
//int main()
//{
//    int num = 0;
//    printf("请输入一个整数:");
//    scanf("%d", &num);
//    int a = 0;
//    while (num)
//    {
//        if (num%2==1)
//        {
//            a++;
//        }
//        num = num / 2;
//    }
//    printf("%d", a);
//    return 0;
//}
// 使用按位与计算一个数的二进制中含有几个1
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    printf("请输入:");
//    scanf("%d", &a);
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (1 == ((a >> i) & 1))
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
    //使用sizeof计算大小时变量可以省略（），类型不能省略（）
    // sizeof内部的表达式不参与计算
    //int a = 10;
    //a = a + 2;
    ////符合赋值符
    //int a = 10;
    //a += 2;
    //int arr[10] = { 0 };
    //printf("%d\n", sizeof(int[10]));//数组去掉名字剩下的就是类型
    //printf("%d\n", sizeof(arr));
    //逻辑取反
    //int a = 0;
    //00000000000000000000000000000000--a的补码
    //11111111111111111111111111111111--取反后a的补码
    //11111111111111111111111111111110--取反后a的反码
    //10000000000000000000000000000001--取反后a的原码
    //printf("%d", ~a);

    //int a = 11;
    ////000000000000000000001011
    ////000000000000000000001111
    ////000000000000000000000001
    //a = a | (1 << 2);
    //printf("%d\n", a);
    //a = a & (~(1 << 2));
    //printf("%d\n", a);
    //return 0;
    //&&逻辑与--只要一个为假，就不计算后面的
    //||逻辑或--只要一个为真，就不计算后面的
//}
//#include<stdio.h>
//struct stu
//{
//    //成员变量
//    char name[20];
//    int age;
//    char id[20];
//};
//int main()
//{
//    struct stu s1 = { "笨蛋",19,"2022010999" };
//    struct stu *ps=&s1;
//    printf("name=%s\n", s1.name);
//    printf("age=%d\n", s1.age);
//    printf("id=%s\n", s1.id);
//    printf("%s\n", (*ps).name);
//    printf("%s\n", ps->id);
//    //ps->name和*ps.name完全一样
//    //结构体变量.成员名
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a = 3;
//    //a的补码:00000000000000000000000000000011
//    //截断：00000011
//    char b = 127;
//    //b的补码:00000000000000000000000001111111
//    //截断:10000010
//    char c = a + b;
//    //a+b
//    //00000011
//    //01111111
//    //11111110
//    //整位提升是按照变量的数据类型的符号位来提升的：整数高位补0；负数高位补1；
//    //表达式中的字符类型和短整型在使用之前必须进行整位提升
//    // :111111111111111111111111100000010--补码
//    //因为是负数，反码：10000001
//    //原码：01111110
//    printf("%d\n", c); 
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a = 1;
//    printf("%u\n", sizeof(a));
//    printf("%u\n", sizeof(+a));
//    printf("%u\n", sizeof(!a));       
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("%d\n", ret);//gcc编译器中ret：10；vs编译器中ret：12
//    printf("%d\n", i);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    int b = 0x11223344;
//    int* pp = &b;
//    *pp = 0;
//    //指针类型决定了指针进行解引用操作时，能够访问空间的大小；
//    //p时int*类型指针，认为他只占用了4个字节大小，在解引用时只访问4个字节的大小
//    //一旦进行销毁，指针变量就会
//
//    char* pa = &a;
//    *pa = 0;
//    //char* pb = &a;
//    printf("%p\n", pa);
//    printf("%p\n", pa + 1);
//    printf("%p\n", pp);
//    printf("%p\n", pp + 1);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    char* p = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(p + i) = 1;
//    }
//    printf("%p\n", arr);
//    return 0;
//}
//#include<stdio.h>
//int* test()
//{
//    int a = 10;
//    return &a;
//}
//int main()
//{
//    int* x = test();
//    printf("%d\n", *x);//虽然打印出的值没问题但是代码有问题
//    //等别人申请这块空间后，这块空间内部的值就会被初始化 
//    //test中的变量a是局部变量，在test函数结束时a的空间也就释放了
//    //在主函数中*x中保存的虽然是a的地址，但a的空间已经不存在
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int* p = &a;
//    int* pa = NULL;
//    //当不知道指针指向谁时，可以让他指向NULL（空）
//    //NULL是用来给指针赋值的，
//    p = NULL; 
//    //不想使用指针p时将指针p即时的置为NULL；
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    //pa = NULL;    
//    //*pa=10;
//    //当指针置为NULL时，在将10付给指针，
//    *pa = NULL;
//    printf("%d\n", *pa);
//    *pa = 10;
//    printf("%d\n", *pa);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int* p = &arr;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", *p);//对指针进行限制，防止越界访问
//        p++; 
//    }
//    return 0;
//}
//#include<stdio.h>
//#define N_VALUES 5//宏定义
//int main()
//{
//    float values[N_VALUES];//定义了单精度浮点型数组
//    float* vp;//定义了单精度浮点型指针vp
//    for (vp = &values[0]; vp < &values[N_VALUES];)//定义了定义了指针vp指向数组首元素；定义了vp小于宏定义
//    {
//        printf("%p\n", vp);//
//        *vp++ = 0;//++优先级最高，先运算vp++，在运算*vp；因为vp++是后置++，在当前这一步还是当前的值；
//        //vp++得到当前数组【+1】，在进行解引用，在将解引用的值赋0
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    char arr1[5] = { 0 };
//    int z=&arr[9] - &arr[0];
//    int y = &arr1[5] - &arr[0];//指针相减只能同种类型之间进行相减并且是同一块空间的进行相减
//    printf("%d\n", z);
//    printf("%d\n", y);//如果不是同一块空间并且不是同一种类型相减结果是随机数
//    return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//    char* start = str;
//    char* end = str;
//    while (*end != '\0') 
//    {
//        end++;
//    }
//    return end - start;
//}
//int main()
//{
//    char arr[] = "bit";
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//
//    return 0;
//}
// 要避免下方的操作
// 虽然可以顺利执行，但是还是要避免这中操作，因为标准并不可执行
// 标准规定：允许指向数组的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。
//#include<stdio.h>
//#define N_VALUES 5
//int main()
//{
//    float VALUES[N_VALUES];
//    float* vp;
//    for (vp = &VALUES[N_VALUES - 1]; vp >= &VALUES[0]; vp--)
//    {
//        *vp = 0;
//    }
//    return 0;
//}
//#include<stdio.h>
////通过指针来访问数组
//int main()
//{
//    int arr[10] = { 0 };
//    int* z = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(z + i) = i;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%p\n", z+i);
//        printf("%d\n", *(z+i));
//    }
//    return 0;
//}

//二级指针
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    int** ppa = &pa;
//    //int* * ppa是二级指针；int* * ppa:最右边的*告诉我们ppa这是一个指针，int*告诉我们ppa指向的对象类型为int*
//    int*** pppa = &ppa;
//    //int***pppa是三级指针；int***pppa：最右边的*告诉我们pppa这是一个指针，int**告诉我们pppa指向的对象的类型为int**
//    printf("%p\n", ppa);
//    printf("%p\n", **ppa);
//    printf("%p\n", pa);
//    printf("%p\n", *pa);
//    return 0;
//}
//指针数组
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    int* arr[] = { &a,&b,&c };//指针数组
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d ", *arr[i]);
//    }
//    return 0;
//}

//抽奖游戏
//1.主函数：是否进入游戏菜单和选择菜单
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//menu()
//{
//    printf("#####################################\n");
//    printf("####1.play                 2.exit####\n");
//    printf("#####################################\n");
//}
//game()
//{
//    int x = 0;
//    printf("一次五元，请选择抽奖次数:");
//
//    scanf("%d", &x);
//    int i = 0;
//    int a = 0;
//    a = rand() %100+1;
//    int b = 29;
//    int c = 64;
//    int d = 65;
//    int e = 67;
//    int f = 88;
//    int j = 97;
//    int h = 38;
//    int k = 37;
//    int* arr[] = { &b,&c,&d,&e,&f,&j,&h,&i };
//    for (i = 0; i < x; i++)
//    {
//        if (*arr[0] == a)
//            printf("一等奖\n");
//        else if (*arr[1] == a ||* arr[2] == a|| *arr[3] == a)
//            printf("二等奖\n");
//        else if (*arr[4] == a || *arr[5] == a || *arr[6] == a || *arr[7] == a)
//            printf("三等奖\n");
//        else
//            printf("在尝试\n");
//    }
//}
//
//int main()
//{
//    int a = 0;
//    do
//    {
//        menu();
//        srand((unsigned )time(NULL));
//        printf("是否进入？");
//        scanf("%d", &a);
//        switch (a)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("退出系统\n");
//            break;
//        default:
//            printf("输入错误，请重新输入\n");
//            break;
//        }
//    } while (a);
//    return 0;
//} 

//#include<stdio.h>
//int my_strlen(char* str)
//{
//    int a = 0;
//    while (*str != '\0')
//    {
//        str++;
//        a++;
//    }
//    return a;
//}
//void aa_aa(char* str)
//{
//    int left = 0;
//    int right = my_strlen(str) - 1;
//    while (left < right)
//    {
//        char tmp = str[left];
//        str[left] = str[right];
//        str[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[] = "abcdef";
//    aa_aa(arr);
//    printf("%s", arr);
//    return 0;
//}
// 将字符串逆序
//#include<stdio.h>
//int my_strlen(char* str)
//{
//    if (*str != '\0')
//    {
//        str++;
//        return 1 + my_strlen(str++);
//    }
//    else
//        return 0;
//}
//void aa_aa(char* str)
//{
//    char tmp = *str;//将字符串的首元素地址拿出来
//    int len = my_strlen(str);//计算出字符串长度
//    *str = *(str + len - 1);//将字符串末尾元素的值赋给字符串首元素
//    *(str + len - 1) = '\0';//将最后的位置赋给‘\0’
//    if (my_strlen(str + 1) >= 2)
//    {
//        aa_aa(str+1);//调用
//
//    }
//    *(str + len - 1) = tmp;//将字符串首元素放到数组中
//}
//int main()
//{
//    char arr[] = "sdkljfklsd";
//    aa_aa(arr);
//    printf("%s", arr);
//    return 0;
//}
// 计算n的k次方
//#include<stdio.h>
//double pow(n, k)
//{
//    if (k == 0)
//        return 1.0;
//    else if (k > 0)
//        return n * pow(n, k - 1);
//    else
//        return 1.0 / (pow(n , -k));
//}
//int main()
//{
//    int n = 0;
//    int k = 0;
//    printf("请输入:");
//    scanf("%d %d", &n, &k);
//    double x=pow(n, k);
//    printf("%lf\n", x);
//    return 0;
//}
// 1.将数组逆序
// 2.将数组打印
// 3.将数组初始化为0
//#include<stdio.h>
//void print_v(int arr[], int a)
//{
//
//    int c = 0;
//    for (c = 0; c < a; c++)
//    {
//        int left = 0+c;
//        int right = a- (c+1);
//        if (right - left >= 2)
//        {
//            int tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}
//void print_a(int arr[], int a)
//{
//    int c = 0;
//    for (c = 0; c < a; c++)
//    {
//        printf("%d ", arr[c]);
//    }
//}
//void print_aa(int arr[], int a)
//{
//    int i = 0;
//    for (i = 0; i < a; i++)
//    {
//        arr[i] = 0;
//    }
//    printf("\n");
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//    int a = sizeof(arr) / sizeof(arr[0]);
//    print_v(arr,a);
//    print_a(arr, a);
//    print_aa(arr, a);
//    print_a(arr, a);
//
//    return 0;
//}
// 将数组的内容初始化为0；将数组的内容打印；将arr1和arr2中的元素进行调换
//#include<stdio.h>
//int main()
//{
//    int arr1[] = {1,3,5,7,9};
//    int arr2[] = { 2,4,6,8,10 };
//    int a = sizeof(arr1) /sizeof(arr1[0]);
//    int x = 0;
//    for (x = 0; x < a; x++)
//    {
//        int tmp = arr1[x];
//        arr1[x] = arr2[x];
//        arr2[x] = tmp;
//    }
//    int i = 0;
//    for (i = 0; i < a; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    int t = 0;
//    printf("\n"); 
//    for (t = 0; t < a;t++)
//    {
//        printf("%d ", arr2[t]);
//    }
//    return 0;
//}
//#include<Stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* a = (short*)arr;
//    int x = 0;
//    for (x = 0; x < 4; x++)
//    {
//        *(a + x) = 0;
//    }
//    for (x = 0; x < 5; x++)
//    {
//        printf("%d ", arr[x]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    printf("请输入要查找的数");
//    scanf("%d", &a);
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] < a)
//            left = mid + 1;
//        else if (arr[mid] > a)
//            right = mid - 1;
//        else
//            printf("找到了,下标为%d",mid);
//            break;
//    }
//    if (left > right)
//        printf("未找到");
//    return 0;
//}
//#include<stdio.h>
//int i;//未初始化的全局变量默认为0
//int main()
//{
//    i--;
//    //i:10000000000000000000000000000001
//    //  01111111111111111111111111111110
//    //  11111111111111111111111111111111
//
//    if (i > sizeof(i))//sizeof计算的是无符号数，将i变为无符号数
//    {
//        printf(">");
//    }
//    else
//    {
//        printf("<");
//    }
//    return 0;
//}
// 打印出一个数二进制位中的1
// 1.循环
//#include<stdio.h>
//#include<stdlib.h>
//int count_bit_one(unsigned int a)
//{
//    int count = 0;
//    while (a)
//    {
//        if (a % 2 == 1)
//        {
//            count++;
//        }
//        a /= 2;
//    }
//    return count;
//}
//int main()
//{
//    int a = 0;
//    printf("请输入:");
//    scanf("%d", &a);
//    int x=count_bit_one(a);
//    printf("%d的二进制中有%d个1",a, x);
//    //system("pause");//system库函数-执行系统命令-pause暂停
//    return 0;         
//}
//2.利用原码补码反码的按位与
//#include<stdio.h>
//int count_bit_one(int a)
//{
//    int x = 0;
//    int count = 0;
//    for (x = 0; x < 32; x++)
//    {
//        if (1 == ((a >> x) & 1))
//        {
//            count++;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int a = 0;
//    printf("请输入:");
//    scanf("%d", &a);
//    int x=count_bit_one(a);
//    printf("%d", x);
//    return 0;
//}
// 3.
//#include<stdio.h>
//int count_bit_one(int a)
//{
//    int count = 0;
//    while (a)
//    {
//        a = a & (a - 1);
//        count++;
//    }
//    return count;
//
//}
//int main()
//{
//    int a = 0;
//    printf("请输入:");
//    scanf("%d", &a);
//    int x=count_bit_one(a);
//    printf("%d", x);
//    return 0;
//}
// 在两个int型数的二进制位中一共有多少个不同的数
// 2299和1999有7个
// 1.使用按位异或解决（相同则0，不同则1）
// 1.1效率较低
//#include<stdio.h>
//int count_bit_dif(int a, int b)
//{
//    int tmp = a ^ b;
//    int count = 0;
//    for (int c = 0; c < 32; c++)
//    {
//        if (1 == ((tmp >> c) & 1))
//        {
//            count++;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("请输入整数:");
//    scanf("%d%d", &a, &b);
//    int x=count_bit_dif(a, b);
//    printf("%d", x);
//    return 0; 
//}
// 1.2效率更高
//#include<stdio.h>
//int count_bit_one(int a)
//{
//    int count = 0;
//    while (a)
//    {
//        a = a & (a - 1);
//        count++;
//    }
//    return count;
//}
//count_bit_dif(int a, int b)
//{
//    int tmp = a ^ b;
//    return count_bit_one(tmp);
//}
//int main()
//{
//    int a, b;
//    printf("请输入:");
//    scanf("%d%d", &a, &b);
//    int c=count_bit_dif(a, b);
//    printf("%d",c);
//    return 0;
//}
// 2.使用位移解决
//#include<stdio.h>
//int count_bit_dif(int a, int b)
//{
//    int count = 0;
//    for (int x = 0; x < 31; x++)
//    {
//        if (((a >> x) & 1) != ((b >> x) & 1))
//        {
//            count++;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int a, b;
//    printf("请输入:");
//    scanf("%d%d", &a, &b);
//    int c = count_bit_dif(a, b);
//    printf("%d", c);
//    return 0;
//}
//#include<stdio.h>
//void print(int a)
//{
//    for (int x = 30; x >=0; x -= 2)
//    {
//        printf("%d ", ((a >> x) & 1));
//    }
//    printf("\n");
//    for (int z = 31; z >=1; z -= 2)
//    { 
//        printf("%d ", ((a >> z) & 1));
//    }
//    printf("\n");
//}
// 使用异或进行交换两个数
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("%d %d", a, b);
//    return 0;
//}
//不使用下标进行打印数组中每一个元素
//#include<stdio.h>
//void cc_a(int a,int sz)
//{
//    for (int g = 0; g < sz; g++)
//    {
//        printf("%d ", * ( a+ g));
//    }
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,67,8,9,6,7 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    cc_a(arr,sz);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int count = 0;
//    for (int a = 100; a <= 200; a++)
//    {
//        int x = 0;
//        for (x = 2; x < a; x++)
//        {
//            if (a % x == 0)
//            {
//                break;
//            }
//        }
//        if (x == a)
//        {
//            count++;
//            printf("%d ", a);
//        }
//    }
//    printf("\n%d", count);
//    return 0;
//}
//#include<stdio.h>
//int a_a(int a)
//{
//    int c = 1;
//    for (int x = 1; x <= a; x++)
//    {
//        c = c * x;
//    }
//    return c;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int v=a_a(a);
//    printf("%d", v);
//    return 0;
//}
//#include<stdio.h>
//int a_a(int a)
//{
//    if(a>0)
//        return a * a_a(a - 1);
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int c=a_a(a);
//    printf("%d", c);
//    return 0;
//}
// 数组逆序（不使用库函数)
//#include<stdio.h>
//int str_a(char* arr)
//{
//    if (*arr != '\0')
//    {
//        return 1 + str_a(arr+1);
//    }
//
//}
//void j_h(char arr[])
//{
//    int left = 0;
//    int right =str_a(arr) - 1;
//    while(left < right)
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] =tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[] = "asdfghjkl";
//    j_h(arr);
//    printf("%s\n", arr);
//}
//#include<stdio.h>
//int sz_a(char* arr)
//{
//    if (*arr != '\0')
//        return 1 + sz_a(arr + 1);
//}
//void a_a(char arr[])
//{
//    int right = sz_a(arr) - 1;
//    char tmp = arr[0];
//    arr[0] = arr[right];
//    arr[right] = '\0';
//    if (sz_a(arr) >= 2)
//        a_a(arr + 1);
//    arr[right] = tmp;
//}
//int main()
//{
//    char arr[] = "skfjsl";
//    a_a(arr);
//    printf("%s", arr);
//    return 0;
//}
//#include<stdio.h>
//int szs_a(char* arr)
//{
//    if (*arr != '\0')
//        return 1 + szs_a(arr + 1);
//}
//void a_a(char arr[])
//{
//    int c = szs_a(arr) - 1;
//    int x = c/2;
//    while (x >= 2)
//    {
//        for (int a = 0; a < c; a++)
//        {
//            char tmp = arr[a];
//            arr[a] = arr[c-a
//              ];
//            arr[c] = tmp;
//        }
//    }
//}
//int main()
//{
//    char arr[] = "asdfghjkl";
//    a_a(arr);
//    return 0;
//}
//#include <stdio.h>
////杨辉三角
//int main()
//{
//    int n;
//    printf("请输入要打印的行数：");
//    scanf("%d", &n);
//
//    int a[100][100];
//    for (int i = 0; i < n; i++)
//    {
//        a[i][0] = 1;
//        a[i][i] = 1;   
//    }
//
//    for (int i = 2; i < n; i++)      
//    {
//        for (int j = 1; j < i; j++)
//        {
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//        }
//    }
//
//
//    for (int i = 0; i < n; i++)    
// 
// 
// 
// 
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//}
//#include<stdio.h>
//int main()
//{
//
//    return 0;
//}
//#include<stdio.h>
//int a_a(int a)
//{
//    int x = 0;
//    if (a > 10)
//    {
//        x = a % 10;
//        a = a / 10;
//        return x + a_a(a);
//    }
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int c=a_a(a);
//    printf("%d", c);
//    return 0;
//}
//将一个无符号整型的每一位进行相加
//#include<stdio.h>
//int a_a(unsigned int a)
//{
//    if (a > 9)
//    {
//        return a % 10 + a_a(a / 10);
//    }
//    else
//        return a;
//}
//int main()
//{
//    unsigned int a = 0;
//    scanf("%d", &a);
//    int c = a_a(a);
//    printf("%d", c);
//    return 0;
//}
//实现n的k次方
//#include<stdio.h> 
//int a_a(int n,int k)
//{
//    int c = 1;
//    for (int a = 1; a <= k; a++)
//    {
//         c= c * n;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d%d", &n,&k);
//    int c=a_a(n,k);
//    printf("%d", c);
//    return 0;
//}
//#include<stdio.h> 
//double a_a(int n, int k)
//{
//    if (k < 0)
//        return (1.0 / a_a(n, -k));
//    else if (k == 0)
//        return 1;
//    else
//        return n * a_a(n, k - 1);
//}
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d%d", &n, &k);
//    double c = a_a(n, k);
//    printf("%lf", c);
//    return 0;
//}
//#include<stdio.h>
//struct stu
////struct—结构体关键字；stu—结构体标签；struct stu—结构体类型
//{
//    //成员变量
//    //定义了一个结构体类型
//    char name[20];
//    short age;
//    char tel[12];
//    char sex[3];
//};
//
////typedef struct stu
////{
////    char name[20];
////    short age;
////    char tel[12];
////    char sex[3];
////}stu;//typedef将struct stu重命名为stu
//
////struct stu
////{
////    char name[20];
////    short age;
////    char tel[12];
////    char sex[3];
////}s1, s2, s3;//定义了三个全局的结构体变量
//struct T
//{
//    char a[20];
//    struct stu s1;
//    int *pc;
//};
//int main()
//{
//    //struct stu s1;//创建了一个局部的结构体变量
//    int a = 123;
// 
//    struct T t = { "shfh",{ "张三",18,15212341234,"男" },a };
//    printf("%d",t.pc);
//    return 0;
//}
//#include<stdio.h>
//typedef struct s
//{
//    char naem[20];
//    int age;
//    char sex[5];
//    char tele[12];
//}stu;
//print1(stu* s)
//{
//    printf("姓名:%s\n", s->naem);
//    printf("年龄:%d\n", s->age);
//    printf("性别:%s\n", s->sex);
//    printf("手机号:%s\n", s->tele);
//}
//print(stu s)
//{
//    printf("name: %s\n", s.naem);
//    printf("age: %d\n", s.age);
//    printf("sex: %s\n", s.sex);
//    printf("tele: %s\n", s.tele);
//}
////优先使用print1，参数是需要压栈的
////如果传递一个结构体对象时，结构体过大，参数压栈的系统开销(内存空间)比较大，会导致性能的下降
//int main()
//{
//    stu s= { "张三",18,"男","12345678901"};
//    print1(&s);
//    print(s);
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    //printf("%p\n", &i); 
//    //printf("%p\n", arr);
//    //system("pause");
//    for (i = 0;i<=12;i++)
//    {
//        printf("hehe\n");
//        arr[i] = 0; 
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    for (a = 0; a <= 100; a++)
//    {
//        printf("%d ", a);
//
//    }
//    for (a = 0; a <= 100; a++)
//    {
//        printf("%d ", 10-a); 
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int sum = 0;
//    int n = 0;
//    scanf("%d", &a);
//    for (n = 1; n <= a; n++)
//    {
//        int ret = 1;
//        int j = 0;
//        for (j = 1; j <= n; j++)
//        {
//            ret *= j;
//        }
//        sum += ret;
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include<assert.h>
//#include<stdio.h>
//void my_strcpy(char* arr1, char* arr2)
//{
//    while (*arr2 != '\0')
//    {
//        *arr1 = *arr2;
//        arr1++;
//        arr2++;
//    }
//    *arr1 = *arr2;
//}
//char* my_strcpy(char* arr1, const char* arr2)
//{
//    char* ret = arr1;
//    assert(arr1 != NULL);
//    //assert断言：判断条件的正确性
//    //如果出错会抛出问题，并且提示问题所在行数
//    assert(arr2 != NULL);
//    while (*arr1++ = *arr2++)
//    {
//        ;
//    }
//    return ret;
//}
//int main()
//{
//    char arr1[] = "###########";
//    char arr2[] = "bit";
//    printf("%s\n", my_strcpy(arr1, arr2));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    const int a = 10;
//    const int* p = &a;
//    //const放在指针变量*的左边时，const修饰的是*p，不能通过修改p的值来改变*p（a）的值
//    //const放在指针变量*的右边时，const修饰的是指针变量p本身，p不能被改变
//    int b = 100;
//    p = &b;
//    *p = 20;
//    printf("%d,%d", a,b);
//    return 0;
//}
//写一段代码，告诉我们现在是大端存储还是小端存储

//#include<stdio.h>
//int main()
//{
//    int a = 1;
//    char* x = (char*) & a;
//    printf("%d", *x);
//    if (*x == 1)
//    {
//        printf("这是小段存储");
//    }
//    else
//        printf("这是大端存储");
//    return 0;
//}
//#include<stdio.h>
//int check_sys(int a)
//{
//    return *(char*)&a;
//}
//int main()
//{
//    int a = 1;
//    int c=check_sys(a);
//    if (c == 1)
//    {
//        printf("小段");
//    }
//    else 
//    {
//        printf("大端");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = -20;
//    //有符号整型
//    //10000000 00000000 00000000 00010100 -原码
//    //11111111 11111111 11111111 11101011 -反码
//    //11111111 11111111 11111111 11101100 -补码
//    unsigned int x = 10;
//    //无符号整型-原码反码补码相同
//    //11111111 11111111 11111111 11101100 -(-20)补码
//    //00000000 00000000 00000000 00001010 -(10)补码   
//    //11111111 11111111 11111111 11110110 -结果的补码
//    //11111111 11111111 11111111 11110101 -反码
//    //10000000 00000000 00000000 00001010 -原码
//    printf("%d", a + x);
//    return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    unsigned int a;
//    for (a = 9; a >= 0; a--)
//    {
//        printf("%u\n", a);
//        if (a == 10)
//        {
//            break;
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char arr[1000];
//    //arr[1000]的范围是0-999
//    int a = 0;
//    for (a = 0; a < 1000; a++)
//    //for从0-999循环
//    {
//        arr[a] = -1 - a;
//        //从-1开始
//        //到-128，再到127，再到0
//    }
//    printf("%d\n", strlen(arr));
//    //因为arr是char类型，只能存放-128-127之间的数字
//    //strlen统计的是'\0'之前的字符数量，,因为整型数组没有'\0'
//    //'\0'的ascii码值是0，所以统计0之前的数字数量
//    return 0;
//}
//#include<stdio.h>
//#include<float.h>
//unsigned int a = 0;
//int main()
//{
//    for (a = 0; a <= 255; a++)
//    {
//        printf("hello world\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 9;
//    float* a = (float*)&n;
//    printf("%d\n", n);
//    //00000000000000000000000000001001
//    printf("%f\n", *a);
//    //(-1)^0 *00000000000000000001001 *2^-126
//    *a = 9.0;
//    printf("%d\n", n);
//    //01000001000100000000000000000000
//    //(-1)^0 *1.001 *2^3
//    printf("%f\n", *a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    const char* p = "skdjfkds";
//    //"skdjfkds"是一个常量字符串
//    //*p = 'w';
//    //这里在gcc上会出现segmentation fault
//    //segmentation fault -段错误
//    //访问非法内存会报的错误
//    printf("%s", p);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char p[] = "asdfghj";
//    char q[] = "asdfghj";
//    //数组p和数组q虽然存放的内容相同，但是两个数组的起始地址不同
//    const char* a1 = "asdfghj";
//    const char* a2 = "asdfghj";
//    printf("%p\n", &p);
//    printf("%p\n", &q);
//    printf("%p\n", &a1);
//    printf("%p\n", &a2);
//    //指针a1和指针a2指向了同一块内存中的字符串；
//    //虽然是两个指针，但是指向的内容相同
//    //修改a1和a2的值并不会影响另外一个的值
//    if(p==q)
//    {
//        printf("1");
//    }
//    else
//        printf("0");
//    return 0;
//}
// //指针数组的用法（第一种傻逼采用指针数组）\
// //第一种
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    int d = 40;
//    int* arr[4] = { &a,&b,&c,&d };
//    for (int i = 0; i < 4; i++)
//    {
//        printf("%d\n", *arr[i]);
//    }
//    return 0;
//}
// 
// //第二种
//#include<stdio.h>
//int main()
//{
//    int arr1[] = { 1,2,3,4,5,6 };
//    int arr2[] = { 2,3,4,5,6,7 };
//    int arr3[] = { 3,4,5,6,7,8 };
//    int* parr[] = { arr1,arr2,arr3 };
//    for (int i = 0; i < 3; i++)
//    {
//        int a = 0;
//        for (a = 0; a < 6; a++)
//        {
//            printf("%d ", *(parr[i] + a));
//        }
//        printf("\n");
//    }
//    return 0;
//}

//数组指针 
//#include<stdio.h>
//int main()
//{
//    int a[8];
//    int(*p)[8] = &a;
//    //数组指针
//    //（*p）代表这是一个指针
//    //int[5] -指针类型（数组指针，数组中的每个元素的类型是int，数组有五个元素）
//    //（*p）用（）括起来是因为害怕p先和[]结合
//    char* arr[5];
//    char* (*pa)[5] = &arr;
//    //指针指向指针数组  
//    //（*pa）代表这是一个指针
//    //因为pa指向的一个数组，数组中有5个元素，每个元素的类型是int*
//    //所以当前指针的类型就是int*[5]
//    return 0;
//}

//数组指针不是这样用的
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int(*p)[10] = &arr;
//    for (int a = 0; a < 10; a++)
//    {
//        printf("%d ", *(*p + a));
//    }
//    return 0;
//}

//对于一维指针数组指针太过于麻烦
//数组指针一般用于二维数组以上
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int* p = arr;
//    for (int a = 0; a < 10; a++)
//    {
//        printf("%d ", *(p + a));
//    }
//    return 0;
//}
//#include<stdio.h>
//void print(int (*p)[5], int x, int y)
//{
//    int a = 0;
//    for (a = 0; a < x; a++)
//    {
//        int c = 0;
//        for (c = 0; c < y; c++)
//        {
//            *(p + a);
//            printf("%d ", p[a][c]);
//            //printf("%d ", *(*(p + a) + c));
//            ////下面这几种打印效果相同
//            ////arr[a] == *(arr+a) == *(p+a) == p[a]
//            ////看那个容易理解
//            //printf("%d ", (*(p + a))[c]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//    print(arr, 3, 5);
//    return 0;
//}

