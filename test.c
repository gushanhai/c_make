#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
    //include ����
    // c������һ�Žṹ���ĳ����������
    //int ����
    //main() ������ main�����ǳ������ڣ����ҽ���һ��
    //printf �ڼ�����ϴ�ӡ����(ȫ��Ϊ��print function)
    // 
    //��#����ָ����ʽ 
    //printf ���ÿ⺯���еĺ�����c���Ա����ṩ�ĺ�����
    //return ����
    //��������
    //1.char �ַ���������
    //2.short int ������
    //3.long ������
    //4.longlong ����������
    //5.int ����
    //6.float �����ȸ����� 
    //7.double˫���ȸ�����
    //c����û���ַ�������
    //char �ַ�����
    //%c ��ӡ�ַ���ʽ������
    //%d ��ӡ����ʮ���Ƶ�����
    //%f ��ӡ��������ǣ����֣�
    //%p �Ե�ַ����ʽ��ӡ
    //%x ��ӡʮ����������
    //ȫ�ֱ�����������{}������飩֮��ı���
    //�ֲ�������������{}������飩֮�ڵı���
    //�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������ᣬ����bug
    //���ֲ�������ȫ�ֱ�����ͬʱ���ֲ���������


    //��ռ�ֽڴ�С
    //printf(" %d\n", sizeof(char));//1
    //printf(" %d\n", sizeof(short));//2
    //printf(" %d\n", sizeof(int));//4
    //printf(" %d\n", sizeof(long));//4
    //printf(" %d\n", sizeof(long long));//8
    //printf(" %d\n", sizeof(float));//4
    //printf(" %d\n", sizeof(double));//8
    // int  һ��int��ռ�Ĵ�СΪ4���ֽ�
    //��������ʹ�����뺯������scanf
//int global = 2023;
//void test()
//{
//    printf("test()--%d\n", global);
//}
//int main()
//{
   /* test();
    printf("%d\n", global);*/
    //δ�����ı�ʶ����Ҫ����(�����ⲿ������extern)
    //extern int g_kkk;
    //printf("g_kkk=%d\n", g_kkk);
    //int num1 = 0;
    //int num2 = 0;
    //int sum = 0;
    //scanf("%d%d",&num1,&num2);// &ȡ��ַ����
    // scanf��c�����ṩ�ı�׼��scanf_s����c�����ṩ�ı�׼����ͷ�ļ������#pragma warning(disable:4996)ʹ��scanf�Ͳ��ᱨ������scanf_s�����п�ƽ̨�ԺͿ���ֲ��
    ////c���Թ涨�����������ڵ�ǰ�������ǰ��
    ////�ֲ�������������ʱʱ��ǰ���ڵĴ����
    // ȫ�ֱ���������������������
    //sum = num1+num2;
    //printf("sum=%d\n", sum);
    //return 0;
//}
//int main()
//{
//    {
//        int a = 100;
//        printf("a=%d\n", a);//û�����
//    }
//    printf("a=%d\n", a);//���У��ᱨ��
//    //�ֲ����������������Ǵ�{��ʼ����}�ӽ���
//    //ȫ�ֱ������������ں�mian��������������������һ���ģ��������������������
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
    //int num = 8;//���泣��
    //printf("%d\n", num);
    //const int num = 4;//const���εĳ�����
    //printf("%d\n", num);
    //const ������
    //const int n = 10;//n�Ǳ������������г����ԣ���������˵nΪ������
    //int arr[n] = {0};
   //return 0;
//}
//#include<stdio.h>
//#define����ı�ʶ������
//#define�����Զ����-��������
//#define MAX 10
//int main()
//{
//    int arr [MAX] = { 0 };
//    printf("%d\n", MAX);
//    return 0;
//}
//ö�ٳ�����һһ�о٣�ö�ٹؼ���enum
//#include<stdio.h>
//enum Sex
//{
//    MALE,//��
//    FEMALE,//Ů
//    SECRET//����
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
    char arr1[] = "abc";*///����
    //'abc'--'a''b''c''\0'(\0���ַ����Ľ�����־)
   /* char arr2[] = { 'a','b','c',0};
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    return 0;
}*/
//#include<stdio.h>
//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c',0};//\0��ascll�������ֵΪ0
//    printf("%d\n",strlen(arr1));//strlen-string length�����ַ������ȵ�
//    printf("%d\n",strlen(arr2));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("abc\n");//\n�ǻ���
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("c:\test\32\test.c");//\t��ˮƽ�Ʊ����tab����
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("Are you ok ??")// ���ϰ汾�У�����������ĸ��
//    return 0;
//}
// #include<stdio.h>
//int main()
//{
//    printf("c:\\test\\32\\test.c");//\\�Ǳ�ʾһ��\����ֹ\\������Ϊһ��ת�����з�
//    return 0;
//}
//(\������ת�������ַ���)
//#include<stdio.h>
//int main()    
//{
//    printf("%d\n", strlen("c:\test\32\test.c"));
//    //(\32��2���˽�������)
//    //32��Ϊ�˽��ƴ�����ڸ�ʮ�������֣���Ϊascll��ֵ����Ӧ���ַ�
//    //32ת��Ϊʮ������26����Ϊascll��ֵ������ַ�
//    return 0;
//}
//\ddd��ʾ1~3���˽�������
//\xdd��ʾ2��ʮ���������� 
//#include<stdio.h>
//int main()
//{
//    int input = 0;
//    printf("�������?\n");
//    printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//    scanf("%d", &input);
//    if (input == 0)
//        printf("������");
//    else
//        printf("��offer");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int line = 0;
//    printf("�������\n");
//    while (line<20000)
//    {
//        line++;
//
//        printf("��һ�д���:%d\n",line);
//    }
//    if(line>=20000)
//    printf("�õ�һ�ݺ�offer\n");
//    return 0;
////}
//#include<stdio.h>
//int Add(int x, int y)//�Զ���Add����
//{
//    int w = x+y;
//    return w;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("������������>:");
//    scanf("%d%d", &num1, &num2);
//    sum = Add(num1, num2);
//    printf("sum=%d\n", sum);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9 };//����һ�����10���������ֵ�����
//    //printf("%d\n", arr[0]);
// ���±����ʽ�������ǵ�Ԫ��
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
//    //�ƣ������ƣ�λ������
//    //    <<����
//    //    >>����
//    int a = 1;
//    //    ����1ռ4���ֽ�-32bitλ
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
//    //(������)λ����
//    //    &��λ��
//    //    |��λ��
//    //    ^��λ���
//    //��������룺ȫһ��һ ����һ��һ �����һ��һȫһ����
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
    //���ϸ�ֵ��
    //+= -= *= /= %= <<= >>= &= |= ^= 
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
    //int a = 10;
    ////sizeof��������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
    //printf("%d\n", sizeof(a));//4�ֽڣ����������������a�Ĵ�С��
    //printf("%d\n", sizeof(int));//4�ֽڣ������������int�Ĵ�С��
    //printf("%d\n", sizeof a);//(sizeof����һ��������ʱ����ʡ�ԣ���)
    //printf("%d\n", sizeof int);//(sizeof����һ������ʱ������ʡ�ԣ���)
//    int arr[10] = {0};
//    int geshu = 0;
//    printf("%d\n",sizeof(arr));//���������ܴ�С
//    geshu = sizeof(arr) / sizeof(arr[0]);//���������������Ĺ�ʽ
//    printf("geshu=%d\n", geshu);//����������
//    return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    int a = 2;
//    int b = -a;
//    int c = 6;
//    //��Ŀ������(�����ֻ��һ���������в���)���磺�� ��
//    int d = a + c;
//    //˫Ŀ��������������������������в��������磺�� �� �� �� 
//    //��Ŀ����������������������������������������в��������磺(a>b?a:b)
//    // !��ʾ�߼���������
//    int g = !c;
//    int h = +6;//+�ű�ʾ��ֵ��һ��ʡ��
//    int p = -55;//-��ֵ
//    printf("%d\n", g);//���ֵΪ0
//    return 0;
//}
//EOF���ļ�������־��end of line ֵ�ǣ�-1
//����Ĵ�С��[]����ģ����ó�����ָ��
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 30;
//    if (a > b)
//        printf("�������Ľϴ�ֵ�ǣ�%d\n", a);
//    else
//        printf("�������Ľϴ�ֵ��:%d\n", b);
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
//    printf("a=�������1������>:\n");
//    printf("b=�������2������>:\n");
//    scanf("%d%d", &a, &b);
//
//    int f = 0;
//    f = F(a, b);
//    printf("�ϴ�ֵ�ǣ�%d\n", f);
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
//    int b = ~a;//~�ǰ��������ƣ�λȡ��,b���з���λ������,���λ�Ƿ���λ��0����Ϊ������1����Ϊ����
// //ԭ�� ���� ����
// //    11111111111111111111111111111111�����룩
// //    11111111111111111111111111111110�����룩
// //    10000000000000000000000000000001��ԭ�룩
// //ԭ�����λ��������λ��λȡ���õ����룬����+1�õ�����
// //����-1�õ����룬�������λ��������λ��λȡ���õ�ԭ��
// ֻҪ���������ڴ��б���Ķ��Ƕ����ƵĲ���
// ������ԭ�룬���룬������ͬ
// ����������ǲ���
// ԭ���ǰ�������д���Ķ���������
// ������ԭ��ķ���λ���䣬����λ��λȡ���õ���
// �����ǰ��շ���+1�õ���
//    printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    //int b = a++;
// ����++���Ƚ�a��ֵ����b���ٽ�a++����õ�a=11������++����ʹ�ã���++��
//    //printf("a=%d\nb=%d\n", a, b);//a=11 b=10
//    int c = ++a;
// ǰ��++���Ƚ�a++����õ�a=11���ٽ�a��ֵ����c��ǰ��++����++����ʹ�ã�
//    printf("a=%d\nc=%d\n", a, c);//a=11 c=11
//    int d = a--;
// ����--����ʹ�ã���--
//    printf("a=%d\nd=%d\n", a, d);//a=9 b=10
//    int f = --a;
// ǰ��--����--����ʹ�� 
//    printf("a=%d\nf=%d\n", a, f);//a=9 b=9
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = (int)3.14;//()����ǿ������ת�����ڸ������У�����double��������ǿ��ת��Ϊint��������,����ܲ�ת���Ͳ�ת��
//    printf("%d\n", a);//a=3
//    return 0;
// c�����У���0--�棬0--��
//}
//#include<stdio.h>
//int main()
//{
//    int a = 5;
//    int b = 0;
//    int c = a && b;
//    printf("%d\n", c);
//    //    && �߼��룬ȫһ��һ,|| �߼�����һ��һ
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 11;
//    int b = 111;
//    int max = 0;;
//    max = (a > b ? a : b);//(a>b?a:b)��һ���������ʽ������ִ���ǣ����a����b�����Ϊ�棬ȡ���ʽ���a�����Ϊ��ȡ���ʽ���b
//    printf("%d\n", max);
//    return 0;
//}
//���ű��ʽ���ж��Ÿ����ı��ʽ
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
////    printf("%d\n", arr[4]);//[]�±����ò�����
//    int a = 11;
//    int v = 22;
//    int sum = 0;
//    sum = ADD(a,v);//()�������ò�����
//    printf(" %d\n ", sum);
//    return 0;
//}
//& * . ->
//#include<stdio.h>
//int main()
//{
//    //int a = 0;//�ֲ�����
//    //int a =0�� ����д�ǣ�auto int a = 0;�ֲ�����ǰ����auto���Զ���������һ�������ʡ��auto��Ϊ�ֲ�����ǰ�����auto���ֲ����������Զ�������
//    //register int a = 0;//register�ǰ�a���һ���Ĵ�������
//    //int ����ı������ɷ��ŵģ�int ������д��signed int
//    //unsigned int ��������޷��ŵı����������ȫ��������
//    //struct--�ṹ��ؼ���
//    //union--�����塢������
//    //void--�ޡ���
//    //typedef--���Ͷ���--�����ض���
//    typedef unsigned int u_int;//��unsigned int���¶���Ϊ    u_int 
//    unsigned int sum1= 10;
//    u_int sum2 = 10;
//    printf("%d\n%d", sum1, sum2);
//    return 0;
//}
//#include<stdio.h>
//1.static���ξֲ��������Ǿֲ��������������ڱ䳤
//1.1static���ξֲ�����ʱ,���εľֲ�����ֻ��ʼ��һ�Σ��Ӷ��ӳ��˾ֲ���������������,ֱ�������������ͷ�
//2.staticҲ��������ȫ�ֱ���
//2.1�ı��˱������������þ�̬�ı���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û��ʹ����(���ɿ��ļ�ʹ��)
//3.static���κ���,Ҳ�Ǹı��˺��������������˵static���κ����ı��˺���֮�����������
//3.1��ͨ�ĺ����Ǿ����ⲿ�������Եģ�static���εĺ����ǽ����������е��ⲿ�������Ըı�����ڲ���������
//void test()
//{
//    static int a = 1;//��һ��static�����a��������һ����̬�ľֲ�����
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
//    extern  int g_kkk;//extern�����ⲿ����
//    printf("g_kkk=%d\n", g_kkk);
//    return 0;
//}
//#include<stdio.h>
//extern int Add(int,int);//�����ⲿ����
//int main()
//{
//    int a = 12;
//    int b = 55;
//    int sum = Add(a,b);
//    printf("sum=%d\n", sum);
//    return 0;
//}


//#include<stdio.h>
////�����ķ�ʽ
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


//��ķ�ʽ��
//#include<stdio.h>
//#define Max(x,y) (x>y?x:y)(��������ڸô����к�==��Ŀ������)
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
//    //*p;//*--�����ò�����/��ӷ��ʲ�����(��p���н����ò������ҵ�����ָ��Ķ���)
//    *p���������ó�����ڵ�ַ������ݣ�&��ȡ����ַ
//    int* p = &b;//p��ָ�����--��һ�ֱ�����������ŵ�ַ�� p��������int*
//    printf("%p\n", &a);//%p�Ǵ�ӡ�����ĵ�ַ�ģ�%d�Ǵ�ӡ���εı���ֻ��ӡ��һ����ʼ��ַ������������ַ�͵�һ����ʼ��ַʱ������
//    //��֪��ַȥ��ֵ�ǲ����Եģ��൱����֪���ƺţ�����¥��û�н���
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
//    printf("%d\n", sizeof(od));//����ʲô����ָ�����ͣ����Ĵ�С����һ����
//    return 0;
//}
//struct �ṹ��ؼ���
//�ṹ�壺���Ӷ���--�ṹ��--���Ǵ��������һ������
//#include<stdio.h>
//����һ�ֽṹ������
//struct Book
//{
//    char name[20];//���鼮ȡ����
//    short price;//price�Ƕ���
//};//;�������
//int main()
//{
    //���ô����õĽṹ�����ʹ���һ�������͵Ľṹ�����
    //struct Book b1 = { "c���Գ������",55 };
    // ���Ҫ������������Ҫ��strcpy����
    // strcpy--string copy�ַ�������--�⺯��--ͷ�ļ���string.h
    // �޷�ʹ��b1.name�޸�;ԭ��b1.name��������һ�����飬b1.name��������
    // strcpy(b1.name,"c++");
    //printf("����:%s\n", b1.name);
    //printf("�۸�:%d\n", b1.price);
    //b1.price = 50;
    //printf("�޸ĺ�ļ۸�:%d\n", b1.price);
    //struct Book* pb = &b1;
    //printf("%s\n",(*pb).name);
    //printf("%d\n", (*pb).price);
    //printf("%s\n", pb->name);
    //printf("%d\n", pb->price);
    //.  �ṹ�����ȥ�ҳ�Ա
    //-> �ṹ��ָ��ȥ�ҳ�Ա
    //return 0;
//}   
    // c������һ�Žṹ���ĳ����������
    // �����������ֽṹ��˳��ṹ��ѡ��ṹ��ѭ���ṹ
//����֧д��
    //#include<stdio.h>
//int main()
//{
//    int a = 22;
//    if (a < 18)
//        printf("��δ���꣡");
//    else
//        printf("�Ѿ������ˣ�");
//    return 0;
//}
// ���֧����д��
//#include<stdio.h>
//int main()
//{
//    int age = 30;
//    if (age < 18)
//        printf("δ����");
//    else if (age>=18&&age<28)//����һ��Ҫ��&&����������������жϣ����ж�age�Ƿ���ϵ�һ���ж������������õ�һ���ж�������ֵȥ�ж��Ƿ���ϵڶ����ж�������
//        printf("����");
//    else
//        printf("����");
//    return 0;
//}


//���֧���ô���飨{}��д��
//#include<stdio.h>
//int main()
//{
//    int age = 16;
//    if (age < 18)
//    {
//        printf("δ����\n");
//        printf("����̸����");
//    }
//    else
//    {
//        if (age < 28 && age >= 18)
//            printf("����");
//        else if (age < 60 && age >= 28)
//            printf("׳��");
//        else if (age < 90 && age >= 60)
//            printf("����");
//        else if ("age>=90")
//            printf("����");
//    }
//    return 0;
//}
//����else ��else�����������δƥ���if����ƥ�䣩
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
//�����������else������������:ֻ��Ҫ���ô������и�д
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
//    if (5=a)//=�Ǹ�ֵ��==�ǵ���
//    {
//        printf("hehe ");
//    }
//    return 0;
//}
//�ж�һ��������������ż��
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    printf("������һ����>��\n");
//    scanf("%d", &a);
//    if (0==a%2)
//        printf("��ż��");
//    else
//        printf("������");
//    return 0;
//}
//���1-100֮�������
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (a < 100)
//    {
//        if (1== a % 2)
//            printf("�����ǣ�%d\n", a);
//        a++;
//    }
// return 0;
//}
//switch(���α��ʽ)���
//{
// //�����:case���γ������ʽ:
// ���;
//}
//#include<stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d\n", &day);
//    switch (day)
//    {
//    case 1:
//        printf("����1\n");
//        break;
//    case 2:
//        printf("����2\n");
//        break;
//    case 3:
//        printf("����3\n");
//        break;
//    case 4:
//        printf("����4\n");
//        break;
//    case 5:
//        printf("����5\n");
//        break;
//    case 6:
//        printf("����6\n");
//        break;
//    case 7:
//        printf("����7\n");
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
//        printf("������\n");
//    case 6:
//    case 7:
//        printf("��Ϣ��\n");
//        break;
//    default://��������Ƿ����
//        printf("���в������������%d����",day);
//    }
//    return 0;
//}
// ����continue��������ѭ��дһ����5��1-10������
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
//    int a = getchar();//getchar��ȡһ���ַ�
//    putchar(a);//��ӡһ���ַ�����printf����Ч����ͬ
//    printf("%c\n", a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int ch = 0;//int ch ����Ϊgetchar��ȡ����asc11��ֵ�������ַ���������int
//    while ((ch = getchar()) != EOF)//getchar����һ���ַ�����ch����ȥ,���Ҳ鿴ch������ַ��Ƿ��EOF��ͬ
//        //EOF���ļ�������־--end of file,EOF������-1
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
    printf("����������:");
    scanf("%s", password);
    while((ch = getchar())!='\n')
    {
        ;
    }
    printf("��ȷ��(y/n):>");
    ret = getchar();
    if (ret == 'y')
    {
        printf("ȷ�ϳɹ�");
    }
    else
    {
        printf("ȷ��ȡ��");
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
//    //for(���ʽ1�����ʽ2�����ʽ3��)
//    // ���ʽ1��ʾ����ʼ�����֣����ڳ�ʼ��ѭ�����������ʽ2��ʾ�������жϲ��֣����ڱ�ʾ�жϺ�ʱ���������ʽ3��ʾ���������֣�����ѭ�������ĵ���
//    //ѭ����䣻
//    int i = 0;
//    //  ��ʼ��  �ж�      ����
//    for(i = 1 ; i <= 10 ; i++)
//    {  
//        printf("%d ",i);
//    }
//    return 0;
//}


//������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����(����������ǵõ���)
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
//���Ҫ��i==5ʱ��ӡhehe������С��10ʱ��ӡ��������ȷ�������£�
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
//forѭ������ʹ��ǰ�պ������д�� 
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int i = 0;
//    for (i = 0; i < 10; i++)//��Ҫд��:for(i=0;i<=9;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//forѭ���в�Ҫ����ʡ�Գ�ʼ�����ж�����������
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


//  ++x��x++������x++������ʹ�ã���++;++x������++����ʹ��
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int a = 0;
//    a=i++;
//    printf("%d\n", a);//a��ֵ��0
//    int c = 0;
//    int f = 0;
//    f = ++c;
//    printf("%d\n", f);//f��ֵ��1
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


//do....while����ѭ��
//�ص�������ѭ��һ��
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
//����Ҫ����5�Ľ׳ˣ����Ľ׳˵�ֵ����5*4*3*2*1
//#include<stdio.h>
//
//int main()
//{
//    int a = 0;//Ҫ��Ľ׳˵�ֵ
//    int b = 0;//forѭ���й�ʽ��һ����
//    int ret = 1;//forѭ���й�ʽ��һ����
//    scanf("%d", &a);//����Ҫ��Ľ׳˵�����
//    for (b = 1; b <= a; b++)
//    {
//        ret = ret * b;//forѭ������׳˵ľ��幫ʽ
//    }
//    printf("ret=%d\n", ret);
//    return 0;
//}
// 
// 
// 
// 
//�����ļ���1�Ľ׳˵�10�Ľ׳˵ĺ�
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int set = 1;
//    int sum = 0;
//   /* printf("a=������Ҫ����Ľ׳˵�����");
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
//    //printf("�׳�=%d\n", set);
//    printf("sum=%d", sum);
//    return 0;
//}



//���Ӽ��ķ�ʽ����1�Ľ׳˵�10�Ľ׳˵ĺ�
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int set = 1;
//    int sum = 0;
//    /* printf("a=������Ҫ����Ľ׳˵�����");
//     scanf("%d", &a);*/
//    for (a = 1; a <= 10; a++)
//    {
//   
//        set = set * a;
//        sum = sum + set;
//    }
//
//    //printf("�׳�=%d\n", set);
//    printf("sum=%d", sum);
//    return 0;
//}



//�ҵ�����������е�һ��Ԫ��
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
//            printf("�ҵ��ˣ��±�Ϊ%d", i);
//            break;
//        }
//        if (a == sz)
//        {
//            printf("δ�ҵ�");
//        }
//
//    }
//    return 0;
//}

//
//���ַ�д������������в���ָ����һ��Ԫ��
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
//            printf("�ҵ��ˣ��±�Ϊ��%d", mid);
//            break;
//        }
//        if (left > right)
//        {
//            printf("δ�ҵ�");
//    }
//    }
//    return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���
//#include<stdio.h>
//#include<string.h>//ִ��strlen������ͷ�ļ�������strlen�⺯����
//#include<windows.h>//ִ��Sleep������ͷ�ļ�
//#include<stdlib.h>//ִ��system������ͷ�ļ�
//int main()
//{
//    char arr1[] = "welcome to bit !!!!";
//    char arr2[] = "###################";
//    //int sz = sizeof(arr1) / sizeof(arr2[0]);//�����sizeof�����ַ�����С����������ĳ��Ȼ����/0�������strlen�����ַ������ȶ�һλ
//    //�����������迼�Ǽ���/0�������ַ��������ַ�������Ҫ����/0�Ƿ�������±�+1
//    int sz = strlen(arr1);
//    int left = 0;
//    int right=sz-1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);//�ô�ӡ������Ļ��ͣ��1�룬Sleep��ͣ������λ�Ǻ��룬1000����==1��
//        if(left<right)
//        {
//            system("cls");//system��ִ��ϵͳ����ĺ�����cls�������Ļ�ĺ���
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

//��д���룬ģ���û���¼�龰������ֻ�ܵ�¼�������루ֻ���������������룬���������ȷ�����¼�ɹ����������������������¼ʧ���˳�����
//����һ��
//#include<stdio.h>
//int main()
//{
//    int password = 123456;
//    int b = 0;
//    int c = 1;
//    for (c = 1; c <=3; c++)
//    {
//        printf("���������룺");
//        scanf("%d", &b);
//        if (password == b)
//        {
//            printf("��¼�ɹ���");
//            break;
//        }
//        else if (c == 3)
//        {
//            printf("�����������������࣬�˳�ϵͳ��");
//        }
//    }
//    return 0;
//}
//
//������
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char password[20] = {0};
//    int c = 1;
//    for (c = 0; c < 3; c++)
//    {
//        printf("���������룺");
//        scanf("%s", &password);
//        if (strcmp(password,"123456") == 0)//�ַ����Ƚ��Ƿ���ͬ����ʹ��==��Ҫʹ�ú���strcmp
//        {
//            printf("��¼�ɹ���\n");
//            break;
//        }
//        else
//        {
//            printf("�������!\n");
//        }
//    }
//     if (c == 3)
//     {
//         printf("�����������������࣬�˳�ϵͳ��");
//     }
//    return 0;
//}


//�Ƚ��������Ľϴ�ֵ������һ�δ�ӡ
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int i = 2;
//    printf("������Ҫ�Ƚϵ�����");
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


//��ӡ1-100���������ı���
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

//���������֮������Լ��
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

//�����1000��--2000��֮�������
// ��һ��д�����Ƚϸ��ӣ�
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


//�ڶ���д�����򵥣�
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

//����100-200֮�������
//��һ�֣��Գ�������100-200֮���������������һ�Σ�
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

//�ڶ���д���� ֻ��Ҫ�����Ҫ�����������һ���ֵ���߼����Ҫ���������Ŀ�ƽ����ֵ,���ж�����������Ƿ���Ա���Ҫ�ж�������������
//sqrt-��ƽ������ѧ�⺯����Ҫ����math.hͷ�ļ�
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




//�����a��ֵ
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


//�����1-100֮������˶��ٸ�9
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

//����1-100֮������˶��ٴ�9
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




//�����1/1-1/2+1/3-...+1/99-1/100��ֵ�����Ҵ�ӡ����
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

//���10�����������������Ҵ�ӡ����
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

//д��9*9�˷��ھ���
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    for (a = 1; a <= 9; a++)
//    {
//        int b = 0;
//        for (b = 1; b <= a; b++)
//        {
//            printf("%d*%d=%-2d ", a, b, a * b);//%2d��ǰ���룬%-2d�����
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
//            printf("�ҵ��ˣ��±���:%d", mid);
//            break;
//        }
//        if (left > right)
//        {
//            printf("û�ҵ�");
//        }
//    }
//    return 0;
//}

//��������Ϸ
//#include<stdlib.h >
//#include<stdio.h>
//#include<time.h>
//void game()
//{
//    1.����һ�������
//     rand()--�������������
//    2.������
//    int a = 0;
//    int b = 0;
//    ��ʱ������������������������ʼ��
//    ʱ���
//    �ǵ�ǰ�������ʱ���ȥ���������ʼʱ�䣨1970.1.1.0��0��0��=��xxx����
//   ʱ�����time������ʾ,time������ȡ��ǰ�������ʱ�䣬���ص�ʱ�����������time_t
//    a = rand() % 100 + 1;//����һ���������
//    while (1)
//    {
//        printf("������²�����֣�>");
//        scanf("%d", &b);
//        if (b < a)
//        {
//            printf("��С��\n");
//        }
//        else if (b > a)
//        {
//            printf("�´���\n");
//        }
//        else
//        {
//            printf("�¶���\n");
//            break;
//        }
//    }
//
//}
//
//RAND_MAX
//rand()��������0-0x7FFF֮�䣨0x����ʮ�����ƣ���ת��Ϊʮ���ƾ�����0--32767֮�䣩
//ʹ��rand�������������#inclulde<stdlib.h>ͷ�ļ�
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
//        printf("��ѡ��>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 0:
//            printf("�˳�ϵͳ");
//            break;
//        case 1:
//            game();
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}

//�߼���1.��д��������������������д������ִ��һ�ε�ѭ������ѭ�����ж��Ƿ������Ϸ�����˳�ϵͳ�����������
//2.д���˵�ģ��
//3.д����Ϸģ��

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
//        printf("��²�: >");
//        scanf("%d", &c);
//        if (c < b)
//        {
//            printf("��С��\n");
//        }
//        else if (c > b)
//        {
//            printf("�´���\n");
//        }
//        else
//        {
//            printf("�¶���\n");
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
//        printf("�Ƿ������Ϸ��>");
//        scanf("%d", &a);
//        switch (a)
//        {
//        case 0:
//            printf("�˳�ϵͳ\n");
//            break;
//        case 1:
//            game();
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (a);
//    return 0;
//}

//goto��䣺ʹ��goto��ת����ǵı��
//������ʹ��goto���
//#include<stdio.h>
//int main()
//{
//again:
//    printf("dkjfksd\n");
//    goto again;
//    return 0;
//}
//�����һ�����ε�Ƕ����һ�����������ѭ��
//������ѷ���������ѭ��ȥ�������
//#include<stdio.h>
//int main()
//{
//    for
//    {
//            for
//            {
//                if (disaster)//disaster����
//                    goto error;
//            }
//    }
//error:
//    if(disaster)
//    return 0;
//}
//ʹ��  gotoдһ���ػ�����
//1.��дһ��������������������дһ��60s��ػ�����ģ��
//2.��дһ��ѭ������ѭ����д������롰������
//дһ���Ա�����ģ�飬�����ͬ��ȡ���ػ����������ͬ�ͼ����ػ�
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    char a[20] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("���Խ���60s��ػ����������ػ�������60s������:������\n");
//    scanf("%s", &a);
//    if (strcmp(a, "������") == 0)//strcmp--�Ƚ������ַ����������Ƿ���ͬ
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

//ʹ��ѭ��дһ������goto�Ĺػ�����
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    int a[20] = { 0 };
//    system("shutdown -s -t 60");
//    while (1)
//    {
//        printf("��ע�⣬���Խ���60s��ػ������������Թػ���������������>:\n");
//        scanf("%s", &a);
//            if (strcmp(a, "������") == 0)
//            {
//                system("shutdown -a");
//                break;
//            }
//    }
//    return 0;
//}


//������һ�����ͳ����еĲ��ִ��룬��һ������������ɣ��������ĳ���ض�����
//c�����к��������ࣺ1.�⺯��--C���Ա����Դ��ĺ����ṩ������ʹ��
//2.�Զ��庯��--�Լ�
//c���Գ��ÿ⺯����
//io����--input������output����
//�ַ�����������--�����ַ����ĺ���--strlen(�ַ�������):string length ;strcpy(�ַ�������):string copy
// �ַ���������--�ж�һ���ַ��Ƿ��д������дתΪСд����СдתΪ��д
// �ڴ��������--memset
// ����/ʱ�亯��--time����
//��ѧ����--math����������sqrt����ƽ����������
//�����⺯��
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
//    printf("������Ҫ��������֣�>");
//    scanf("%d%d", &a, &b);
//    int sum = Add(a, b);
//    printf("sum=%d",sum);
//    return 0;
//}
//ʹ��strcpy(Ŀ�ĵ�����,Դ�ļ�)ʱ�Ὣ/0Ҳcopy
//ʹ��%s��ӡʱ������/0ʱ��ֹͣ��ӡ
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//    char arr1[] = "bit";//ȷ�����Ŀ�ĵش�Сһ��Ҫ��Դ�ļ��󣬷�����������Ϊbug
//    char arr2[20] = "##########";
//    strcpy(arr2, arr1);
//    printf("%s\n", arr2);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    //memset--memory���ڴ棩 set�����ã�����ָ��ptr��num���ֽڿռ���value
//    char arr[] = "hello world";
//    memset(arr, '*', 5);//'*'���ڴ���ʹ��asc11���洢�ģ�asc11������
//    printf("%s\n", arr);
//    return 0;
//}
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
////���������˵���ѯ�ʽ�����Ϸ�����˳�ϵͳ�����������Ϸ������ת����Ϸ
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
//        printf("��²⣺>");
//        scanf("%d", &c);
//        if (c < b)
//        {
//            printf("��С��\n");
//        }
//        else if (c > b)
//        {
//            printf("�´���\n");
//        }
//        else
//        {
//            printf("�¶���\n");
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
//        printf("�Ƿ������Ϸ��>");
//        scanf("%d", &a);
//        switch (a)
//        {
//        case 0:
//            printf("�˳�ϵͳ\n");
//            break;
//        case 1:
//            game();
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (a);
//    return 0;
//}
//#include<stdio.h>
//�����������ͱ���������
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("������������:");
//    scanf("%d%d", &a, &b);
//    printf("a=%d b=%d\n", a, b);
//
//    int tmp = 0;//����һ����ʱ����
//    tmp = a;//ʹ��ʱ������ֵ��Ϊa��ֵ
//    a = b;
//    b = tmp;
//    printf("a=%d b=%d\n", a, b);
//    return 0;
//}
//#include<stdio.h>
//void����˼��û�з���ֵ
//����swap��ֵ���᷵��x��y��ֵ��a��b��ֵ��swap�н��н�����û�з��أ�a��b��ֵ����
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
//    printf("��������������");
//    scanf("%d%d", &a, &b);
//    Swap(a, b);
//    printf("a=%d b=%d",a,b);
//    return 0;
//}

//*aʹ�ý����ã�ָ�룩�ó�a�ĵ�ַ������ݣ�&��ȡ��a�ĵ�ַ
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

//1.������������ִ��һ�Σ��ж��Ƿ������Ϸ��
//3.������Ϸ������1-100֮��������
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
//        printf("��²�����:");
//        scanf("%d", &c);
//        if (c > b)
//        {
//            printf("�´���\n");
//        }
//        else if (c < b)
//        {
//            printf("��С��\n");
//        }
//        else
//        {
//            printf("�¶���\n");
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
//        printf("��ѡ��");
//        scanf("%d", &a);
//        switch (a)
//        {
//        case 0:
//            printf("�˳�ϵͳ\n");
//            break;
//        case 1:
//            game();
//            break;
//        default:
//            printf("��������\n");
//            break;
//        }
//    } while (a);
//    return 0;
//}
//�β�--��ʽ����--��ʽ�ϵĲ���--һ�������ʱ�����ڵ�
// �β�:��ʽ����ֻ���ڱ����õ�ʱ��Ҳ�Ż�ʵ�����������ڴ棬����һƬ�ڴ�������β�ʹ�ã��Ⱥ���������ɺ�ͻ��Զ�����,��ˣ��β�ֻ�ں�������Ч��
//�βΣ�ָ�������������ڵı��������磺int Add(int x,int y)���x��y��
//ʵ�Σ���ʵ���������Ĳ��������磺Swap(a,b)����Swap(&a,&b��(Swap���Զ��庯��)
//����ʵ��ʱ�������͵��������������������������ʽ�ȣ����ڽ��е���ʱ������Ҫ��ȷ����ֵ
//��ʵ�ε�ֵ�����β�ʱ���βξ��൱����ʱ������һ��ʵ�Σ��βε��޸�ʱ����ı���ʵ�ε�ֵ 
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
//    Add(&a,&b);   //��ַ���ã���ʵ�εĵ�ַ����ȥ�����ַ�ʽ��ı�ʵ�ε�ֵ��ͨ�������ڲ����ı��ⲿ������ֵ��Ҫ��ַ
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
//    int sum=Add(a, b);        //��ֵ���ã���ʵ�ε�ֵ����ȥ��ʵ�κ��β�ռ�ò�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�ε�ֵ  
//    printf("sum=%d", sum);
//    return 0;
//}
// ʹ�ú�������100-200֮�������
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
// ���ú���д���ַ�
//#include<stdio.h>
//int cz(int arr[], int y, int h)//ʵ��������arr��һ��ָ��
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
//    c=cz(arr, a,sz);//����ȥ��������arr����Ԫ�ص�ַ 
//    if(c==-1)
//    {
//        printf("û�ҵ�");
//    }
//    else
//    {
//       printf("�ҵ��ˣ��±���%d", c);
//    }
//    return 0;
//}
// ÿ����һ��num��num��ֵ+1
//#include<stdio.h>
//void Add(int* x)
//{
//    (*x)++;//++�����ȼ��Ƚϸߣ��ȼ���x++�ڽ����ã�������(*x)++
//}
//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("num=%d", num);
//    return 0;
//}
//Ƕ�׵���
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
//ʹ����ʽ���ʼ���һ���ַ����ĳ�����
// ��һ�������ķ���ֵ������һ�������Ĳ���
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
//    //printf(����ֵ����Ļ�ϴ�ӡ�ַ��ĸ���)
//    printf("%d", printf("%d", printf("%d", 43)));//43 ,2 ,1
//    return 0;
//}
//�������������߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ���治�����޹ؽ�Ҫ
//����������Ҫ���ں����Ŀ�ͷʹ�ã�Ҫ������������ʹ�á�
//��������һ��Ҫ����ͷ�ļ��С�
// ���磺����дһ��ģ�飺�Ӽ��˳�ģ�飬���������н�������ʹ�á�
// ��ֹ�����ڲ�����
// 
//�����Ķ��壺�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ�֡�
//#include<stdio.h>
//#include "add.h"
//int main()
//{
//    int a = 0;
//    int b =0;
//    printf("������������:");
//    scanf("%d%d", &a, &b);
//    int sum = Add(a, b);
//    printf("sum=%d",sum);
//    return 0;
//}
//#include<stdio.h>
////�ݹ鳣���Ĵ���--stack overflow��ջ���
// �ݹ����û�����ƽ����������ݹ�
// //�ݹ�������������1.�ݹ��������������
// //2.ÿ�ݹ���ú����Խ��Խ�ӽ���������
////ջ����ǽ�ջ���ڴ�����
////�ڴ��ŷ�Ϊ��������ջ������������̬��
////ջ���žֲ��������������β�
////�����Ŷ�̬���ٵ��ڴ�
////��̬����static���εı�����ȫ�ֱ���
////unsigned int:�޷������ͣ�ֻ��ȡ��ֵ������ȡ��ֵ
//int main()
//{
//    printf("hehe\n");
//    main();
//    return 0;
//}
// �õݹ�ÿ�δ�ӡ��һ������
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
//    printf("������:");
//    scanf("%d", &a);
//    print(a);
//    return 0;
//}
// ��ѭ���������鳤��
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
// �õݹ�������鳤��
//#include<stdio.h>
//int my_strlen(char* str)
////������򵥻������»�С��С�»���
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

//�õݹ�������鳤��
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
// ��ѭ������׳�
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
//    printf("������Ҫ�������:");
//    scanf("%d", &n);
//    ret=Fac(n);
//    printf("%d", ret);
//    return 0;
//}

//�õݹ����׳�
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
//    printf("������Ҫ�������:");
//    scanf("%d", &n);
//    ret = Fac(n);
//    printf("%d", ret);
//    return 0;
//}

//쳲���������
// 1 1 2 3 5 8 13 21 34 55 89
//TDD--����������������ȥ�����ʵ�������������ȥ����ôȥд
// ʹ�õݹ���쳲���������Ч��̫��
//#include<stdio.h>
//int count = 0;
//int Fib(int x)
//{
//    if (x == 3)//���������쳲��������еĴ���
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
//    printf("�����룺");
//    scanf("%d", &a);
//    ret=Fib(a);
//    printf("%d", ret);
//    printf("\ncount=%d\n", count);
//    return 0;

//}
//ʹ��ѭ�����쳲���������Ч�ʸ��ߣ��ٶȸ��쵫��ѭ�����׳���ջ�������
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
//    printf("������:");
//    scanf("%d", &a);
//    ret = Fib(a);
//    printf("ret=%d", ret);
//    return 0;
//}
//��Ȼ�ݹ�������������ÿ�εݹ�ӽ����������������ǻ�����ջ�������Ϊջ���ڴ汻������
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
//��ŵ������
// �Ƚ�a���ϵ���С��Ų��c�����ٽ�a������С��Ų��b�����ٽ�c���ϵ�Ų��b����

//����������
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4 };//����ȫ��ʼ����ʣ�µ�Ԫ�س�ʼ��Ĭ��Ϊ0
//    int arr2[5] = { 'a','b' };//arr2��arr3�Ĵ洢�������ͬ�ģ����Ǵ洢��ʽ��ͬ��arr2ֻ�������ַ�a��b
//    int arr3[5] = "ab";//arr3�������ַ�a��b��/0
//    //strlen�Ǽ����ַ������ȵģ�ֻ������ַ����󳤶�--�ǿ⺯��--��Ҫstrlen.hͷ�ļ�
//    //sizeof�Ǽ�����������顢���͵Ĵ�С����λ���ֽ�--������
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
//    printf("%d\n", strlen(arr2));//��Ϊstrlenֻ�ܼ����ַ������ȣ�����Ҫ�ҵ�/0���ܽ��������������ֵ 
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//    int i = 1;
//    int sz = sizeof(arr) / sizeof(arr[0]);//��ӡ������ÿ��Ԫ�ض�Ӧ�ĵ�ַ
//    for (i = 0; i < sz; i++)
//    {
//        printf("arr[%d]=%d\n", i, &arr[i]);
//    }
//    return 0;
//}
// ��ά����
//#include<stdio.h>
//int main()
//{
//           ���� ����   ��һ������Ԫ�� �ڶ�������Ԫ��
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
//ð������
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//    int a = 0;
//    for (a = 0; a < sz-1; a++)//�߼���
//    {
//        int b = 0;
//        for (b = 0; b < sz - 1-a; b++)//ÿ�μ������ļ���Ԫ��
//        {
//            if (arr[b] > arr[b + 1])//�Ƚ������������Ĵ�С
//            {
//                int tmp = arr[b];//���н���
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
//������һ��ָ�������Ԫ�ص�ַ���������⣺
//1.sizeof��arr������ָ�������飬sizeof��arr���Ǽ�����������Ĵ�С
//2.&�������������������������飬&������ȡ������������ĵ�ַ
//&������ʵ�ʴ�ӡ���Ľ��������ĵ�һ��Ԫ�صĵ�ַ��ͬ��������Ϊ&������ֻ��ʾ����Ԫ�ص���ʼ��ַ
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7 };
//    printf("%p\n", arr);
//    printf("%p\n", arr + 1);
//
//    printf("%p\n", &arr[0]);//��ӡ�����һ�� Ԫ�ص�ַ
//    printf("%p\n", &arr[0] + 1);//��ӡ����ڶ���Ԫ�ص�ַ  
//
//    printf("%p\n", &arr);
//    printf("%p\n", &arr + 1);//&arr+1���������������飬��ӡ���ĵ�ַ��ĩԪ�ص�ַ-��Ԫ�ص�ַ����С��Ԫ�أ�
//    return 0;
//}
//������λ����������Ҫ�ƶ�����λ������ֻ������������
// int num=1��
// num>>-1;
// ������wei�Ǳ�׼δ�����
//����λ�Ʋ�����
//1.����������
// �ұ߶�������߲�ԭ����λ
//2.�߼�������
// �ұ߶�������߲�0
//���������һ���������ڴ汣���ǲ��룬��ӡ����ԭ��
//������ԭ��ķ���λ���䣬����λȡ��
//�����Ƿ�������һλ+1
//���Ʋ�����
//��߶������ұ߲�0
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
//    //������ʱ�������н���
//    //int a = 5;
//    //int b = 3;
//    //int tmp = 0;
//    //tmp = a;
//    //a = b;
//    //b = tmp;
//     
//     
//    //ʹ�üӼ������н���
//    //�Ӽ������н������ܻ��������Ϊ�������λ��
//    //int a = 5;
//    //int b = 3;
//    //a = a + b;
//    //b = a - b;
//    //a = a - b;
//
//    //ʹ�����
//    //��򲻻������λ���������
//    //����Ǽ��ܽ��ܵĹ��̣��������Ϊ����00
//    //��򲻻�ʹ�ã�1.����Ч�ʵͣ�û��������ʱ�������Ŀ죩2.�ɶ��Բ�
//    int a = 5;//101
//    int b = 3;//011
//    a = a ^ b;//110
//    b = a ^ b;//101
//    a = a ^ b;//011
//    printf("a=%d b=%d", a, b);
//    return 0;
//}
//����һ�����Ķ������ж��ٸ�1
//ʹ��%2��/2�õ�������Ķ�����λ
//�����㷨���ܼ��㸺�� 
//#include<stdio.h>
//int main()
//{
//    int num = 0;
//    printf("������һ������:");
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
// ʹ�ð�λ�����һ�����Ķ������к��м���1
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    printf("������:");
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
    //ʹ��sizeof�����Сʱ��������ʡ�ԣ��������Ͳ���ʡ�ԣ���
    // sizeof�ڲ��ı��ʽ���������
    //int a = 10;
    //a = a + 2;
    ////���ϸ�ֵ��
    //int a = 10;
    //a += 2;
    //int arr[10] = { 0 };
    //printf("%d\n", sizeof(int[10]));//����ȥ������ʣ�µľ�������
    //printf("%d\n", sizeof(arr));
    //�߼�ȡ��
    //int a = 0;
    //00000000000000000000000000000000--a�Ĳ���
    //11111111111111111111111111111111--ȡ����a�Ĳ���
    //11111111111111111111111111111110--ȡ����a�ķ���
    //10000000000000000000000000000001--ȡ����a��ԭ��
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
    //&&�߼���--ֻҪһ��Ϊ�٣��Ͳ���������
    //||�߼���--ֻҪһ��Ϊ�棬�Ͳ���������
//}
//#include<stdio.h>
//struct stu
//{
//    //��Ա����
//    char name[20];
//    int age;
//    char id[20];
//};
//int main()
//{
//    struct stu s1 = { "����",19,"2022010999" };
//    struct stu *ps=&s1;
//    printf("name=%s\n", s1.name);
//    printf("age=%d\n", s1.age);
//    printf("id=%s\n", s1.id);
//    printf("%s\n", (*ps).name);
//    printf("%s\n", ps->id);
//    //ps->name��*ps.name��ȫһ��
//    //�ṹ�����.��Ա��
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a = 3;
//    //a�Ĳ���:00000000000000000000000000000011
//    //�ضϣ�00000011
//    char b = 127;
//    //b�Ĳ���:00000000000000000000000001111111
//    //�ض�:10000010
//    char c = a + b;
//    //a+b
//    //00000011
//    //01111111
//    //11111110
//    //��λ�����ǰ��ձ������������͵ķ���λ�������ģ�������λ��0��������λ��1��
//    //���ʽ�е��ַ����ͺͶ�������ʹ��֮ǰ���������λ����
//    // :111111111111111111111111100000010--����
//    //��Ϊ�Ǹ��������룺10000001
//    //ԭ�룺01111110
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
//    printf("%d\n", ret);//gcc��������ret��10��vs��������ret��12
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
//    //ָ�����;�����ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С��
//    //pʱint*����ָ�룬��Ϊ��ֻռ����4���ֽڴ�С���ڽ�����ʱֻ����4���ֽڵĴ�С
//    //һ���������٣�ָ������ͻ�
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
//    printf("%d\n", *x);//��Ȼ��ӡ����ֵû���⵫�Ǵ���������
//    //�ȱ����������ռ�����ռ��ڲ���ֵ�ͻᱻ��ʼ�� 
//    //test�еı���a�Ǿֲ���������test��������ʱa�Ŀռ�Ҳ���ͷ���
//    //����������*x�б������Ȼ��a�ĵ�ַ����a�Ŀռ��Ѿ�������
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int* p = &a;
//    int* pa = NULL;
//    //����֪��ָ��ָ��˭ʱ����������ָ��NULL���գ�
//    //NULL��������ָ�븳ֵ�ģ�
//    p = NULL; 
//    //����ʹ��ָ��pʱ��ָ��p��ʱ����ΪNULL��
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    //pa = NULL;    
//    //*pa=10;
//    //��ָ����ΪNULLʱ���ڽ�10����ָ�룬
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
//        printf("%d ", *p);//��ָ��������ƣ���ֹԽ�����
//        p++; 
//    }
//    return 0;
//}
//#include<stdio.h>
//#define N_VALUES 5//�궨��
//int main()
//{
//    float values[N_VALUES];//�����˵����ȸ���������
//    float* vp;//�����˵����ȸ�����ָ��vp
//    for (vp = &values[0]; vp < &values[N_VALUES];)//�����˶�����ָ��vpָ��������Ԫ�أ�������vpС�ں궨��
//    {
//        printf("%p\n", vp);//
//        *vp++ = 0;//++���ȼ���ߣ�������vp++��������*vp����Ϊvp++�Ǻ���++���ڵ�ǰ��һ�����ǵ�ǰ��ֵ��
//        //vp++�õ���ǰ���顾+1�����ڽ��н����ã��ڽ������õ�ֵ��0
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    char arr1[5] = { 0 };
//    int z=&arr[9] - &arr[0];
//    int y = &arr1[5] - &arr[0];//ָ�����ֻ��ͬ������֮��������������ͬһ��ռ�Ľ������
//    printf("%d\n", z);
//    printf("%d\n", y);//�������ͬһ��ռ䲢�Ҳ���ͬһ�������������������
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
// Ҫ�����·��Ĳ���
// ��Ȼ����˳��ִ�У����ǻ���Ҫ�������в�������Ϊ��׼������ִ��
// ��׼�涨������ָ�������ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�
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
////ͨ��ָ������������
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

//����ָ��
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    int** ppa = &pa;
//    //int* * ppa�Ƕ���ָ�룻int* * ppa:���ұߵ�*��������ppa����һ��ָ�룬int*��������ppaָ��Ķ�������Ϊint*
//    int*** pppa = &ppa;
//    //int***pppa������ָ�룻int***pppa�����ұߵ�*��������pppa����һ��ָ�룬int**��������pppaָ��Ķ��������Ϊint**
//    printf("%p\n", ppa);
//    printf("%p\n", **ppa);
//    printf("%p\n", pa);
//    printf("%p\n", *pa);
//    return 0;
//}
//ָ������
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    int* arr[] = { &a,&b,&c };//ָ������
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d ", *arr[i]);
//    }
//    return 0;
//}

//�齱��Ϸ
//1.���������Ƿ������Ϸ�˵���ѡ��˵�
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
//    printf("һ����Ԫ����ѡ��齱����:");
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
//            printf("һ�Ƚ�\n");
//        else if (*arr[1] == a ||* arr[2] == a|| *arr[3] == a)
//            printf("���Ƚ�\n");
//        else if (*arr[4] == a || *arr[5] == a || *arr[6] == a || *arr[7] == a)
//            printf("���Ƚ�\n");
//        else
//            printf("�ڳ���\n");
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
//        printf("�Ƿ���룿");
//        scanf("%d", &a);
//        switch (a)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("�˳�ϵͳ\n");
//            break;
//        default:
//            printf("�����������������\n");
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
// ���ַ�������
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
//    char tmp = *str;//���ַ�������Ԫ�ص�ַ�ó���
//    int len = my_strlen(str);//������ַ�������
//    *str = *(str + len - 1);//���ַ���ĩβԪ�ص�ֵ�����ַ�����Ԫ��
//    *(str + len - 1) = '\0';//������λ�ø�����\0��
//    if (my_strlen(str + 1) >= 2)
//    {
//        aa_aa(str+1);//����
//
//    }
//    *(str + len - 1) = tmp;//���ַ�����Ԫ�طŵ�������
//}
//int main()
//{
//    char arr[] = "sdkljfklsd";
//    aa_aa(arr);
//    printf("%s", arr);
//    return 0;
//}
// ����n��k�η�
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
//    printf("������:");
//    scanf("%d %d", &n, &k);
//    double x=pow(n, k);
//    printf("%lf\n", x);
//    return 0;
//}
// 1.����������
// 2.�������ӡ
// 3.�������ʼ��Ϊ0
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
// ����������ݳ�ʼ��Ϊ0������������ݴ�ӡ����arr1��arr2�е�Ԫ�ؽ��е���
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
//    printf("������Ҫ���ҵ���");
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
//            printf("�ҵ���,�±�Ϊ%d",mid);
//            break;
//    }
//    if (left > right)
//        printf("δ�ҵ�");
//    return 0;
//}
//#include<stdio.h>
//int i;//δ��ʼ����ȫ�ֱ���Ĭ��Ϊ0
//int main()
//{
//    i--;
//    //i:10000000000000000000000000000001
//    //  01111111111111111111111111111110
//    //  11111111111111111111111111111111
//
//    if (i > sizeof(i))//sizeof��������޷���������i��Ϊ�޷�����
//    {
//        printf(">");
//    }
//    else
//    {
//        printf("<");
//    }
//    return 0;
//}
// ��ӡ��һ����������λ�е�1
// 1.ѭ��
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
//    printf("������:");
//    scanf("%d", &a);
//    int x=count_bit_one(a);
//    printf("%d�Ķ���������%d��1",a, x);
//    //system("pause");//system�⺯��-ִ��ϵͳ����-pause��ͣ
//    return 0;         
//}
//2.����ԭ�벹�뷴��İ�λ��
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
//    printf("������:");
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
//    printf("������:");
//    scanf("%d", &a);
//    int x=count_bit_one(a);
//    printf("%d", x);
//    return 0;
//}
// ������int�����Ķ�����λ��һ���ж��ٸ���ͬ����
// 2299��1999��7��
// 1.ʹ�ð�λ���������ͬ��0����ͬ��1��
// 1.1Ч�ʽϵ�
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
//    printf("����������:");
//    scanf("%d%d", &a, &b);
//    int x=count_bit_dif(a, b);
//    printf("%d", x);
//    return 0; 
//}
// 1.2Ч�ʸ���
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
//    printf("������:");
//    scanf("%d%d", &a, &b);
//    int c=count_bit_dif(a, b);
//    printf("%d",c);
//    return 0;
//}
// 2.ʹ��λ�ƽ��
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
//    printf("������:");
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
// ʹ�������н���������
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
//��ʹ���±���д�ӡ������ÿһ��Ԫ��
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
// �������򣨲�ʹ�ÿ⺯��)
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
////�������
//int main()
//{
//    int n;
//    printf("������Ҫ��ӡ��������");
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
//��һ���޷������͵�ÿһλ�������
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
//ʵ��n��k�η�
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
////struct���ṹ��ؼ��֣�stu���ṹ���ǩ��struct stu���ṹ������
//{
//    //��Ա����
//    //������һ���ṹ������
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
////}stu;//typedef��struct stu������Ϊstu
//
////struct stu
////{
////    char name[20];
////    short age;
////    char tel[12];
////    char sex[3];
////}s1, s2, s3;//����������ȫ�ֵĽṹ�����
//struct T
//{
//    char a[20];
//    struct stu s1;
//    int *pc;
//};
//int main()
//{
//    //struct stu s1;//������һ���ֲ��Ľṹ�����
//    int a = 123;
// 
//    struct T t = { "shfh",{ "����",18,15212341234,"��" },a };
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
//    printf("����:%s\n", s->naem);
//    printf("����:%d\n", s->age);
//    printf("�Ա�:%s\n", s->sex);
//    printf("�ֻ���:%s\n", s->tele);
//}
//print(stu s)
//{
//    printf("name: %s\n", s.naem);
//    printf("age: %d\n", s.age);
//    printf("sex: %s\n", s.sex);
//    printf("tele: %s\n", s.tele);
//}
////����ʹ��print1����������Ҫѹջ��
////�������һ���ṹ�����ʱ���ṹ����󣬲���ѹջ��ϵͳ����(�ڴ�ռ�)�Ƚϴ󣬻ᵼ�����ܵ��½�
//int main()
//{
//    stu s= { "����",18,"��","12345678901"};
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
//    //assert���ԣ��ж���������ȷ��
//    //���������׳����⣬������ʾ������������
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
//    //const����ָ�����*�����ʱ��const���ε���*p������ͨ���޸�p��ֵ���ı�*p��a����ֵ
//    //const����ָ�����*���ұ�ʱ��const���ε���ָ�����p����p���ܱ��ı�
//    int b = 100;
//    p = &b;
//    *p = 20;
//    printf("%d,%d", a,b);
//    return 0;
//}
//дһ�δ��룬�������������Ǵ�˴洢����С�˴洢

//#include<stdio.h>
//int main()
//{
//    int a = 1;
//    char* x = (char*) & a;
//    printf("%d", *x);
//    if (*x == 1)
//    {
//        printf("����С�δ洢");
//    }
//    else
//        printf("���Ǵ�˴洢");
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
//        printf("С��");
//    }
//    else 
//    {
//        printf("���");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = -20;
//    //�з�������
//    //10000000 00000000 00000000 00010100 -ԭ��
//    //11111111 11111111 11111111 11101011 -����
//    //11111111 11111111 11111111 11101100 -����
//    unsigned int x = 10;
//    //�޷�������-ԭ�뷴�벹����ͬ
//    //11111111 11111111 11111111 11101100 -(-20)����
//    //00000000 00000000 00000000 00001010 -(10)����   
//    //11111111 11111111 11111111 11110110 -����Ĳ���
//    //11111111 11111111 11111111 11110101 -����
//    //10000000 00000000 00000000 00001010 -ԭ��
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
//    //arr[1000]�ķ�Χ��0-999
//    int a = 0;
//    for (a = 0; a < 1000; a++)
//    //for��0-999ѭ��
//    {
//        arr[a] = -1 - a;
//        //��-1��ʼ
//        //��-128���ٵ�127���ٵ�0
//    }
//    printf("%d\n", strlen(arr));
//    //��Ϊarr��char���ͣ�ֻ�ܴ��-128-127֮�������
//    //strlenͳ�Ƶ���'\0'֮ǰ���ַ�������,��Ϊ��������û��'\0'
//    //'\0'��ascii��ֵ��0������ͳ��0֮ǰ����������
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
//    //"skdjfkds"��һ�������ַ���
//    //*p = 'w';
//    //������gcc�ϻ����segmentation fault
//    //segmentation fault -�δ���
//    //���ʷǷ��ڴ�ᱨ�Ĵ���
//    printf("%s", p);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char p[] = "asdfghj";
//    char q[] = "asdfghj";
//    //����p������q��Ȼ��ŵ�������ͬ�����������������ʼ��ַ��ͬ
//    const char* a1 = "asdfghj";
//    const char* a2 = "asdfghj";
//    printf("%p\n", &p);
//    printf("%p\n", &q);
//    printf("%p\n", &a1);
//    printf("%p\n", &a2);
//    //ָ��a1��ָ��a2ָ����ͬһ���ڴ��е��ַ�����
//    //��Ȼ������ָ�룬����ָ���������ͬ
//    //�޸�a1��a2��ֵ������Ӱ������һ����ֵ
//    if(p==q)
//    {
//        printf("1");
//    }
//    else
//        printf("0");
//    return 0;
//}
// //ָ��������÷�����һ��ɵ�Ʋ���ָ�����飩\
// //��һ��
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
// //�ڶ���
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

//����ָ�� 
//#include<stdio.h>
//int main()
//{
//    int a[8];
//    int(*p)[8] = &a;
//    //����ָ��
//    //��*p����������һ��ָ��
//    //int[5] -ָ�����ͣ�����ָ�룬�����е�ÿ��Ԫ�ص�������int�����������Ԫ�أ�
//    //��*p���ã�������������Ϊ����p�Ⱥ�[]���
//    char* arr[5];
//    char* (*pa)[5] = &arr;
//    //ָ��ָ��ָ������  
//    //��*pa����������һ��ָ��
//    //��Ϊpaָ���һ�����飬��������5��Ԫ�أ�ÿ��Ԫ�ص�������int*
//    //���Ե�ǰָ������;���int*[5]
//    return 0;
//}

//����ָ�벻�������õ�
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

//����һάָ������ָ��̫�����鷳
//����ָ��һ�����ڶ�ά��������
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
//            ////�����⼸�ִ�ӡЧ����ͬ
//            ////arr[a] == *(arr+a) == *(p+a) == p[a]
//            ////���Ǹ��������
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

