#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//就是数组a是首元素的地址，强制类型转换为int类型，在进行 + 1后向后走一个字节，指向01后的00，
//再把现在的值存放到ptr2中，因为ptr2是int * 类型的变量，解引用操作向后访问4个字节的空间，00 00 00 02，是小段存储，
//在内存中存储的是02 00 00 00，打印出来是20 00 00 00

#include<stdio.h>
#include<string.h>

//数组名表示什么？
//1.通常表是首元素地址
//2.两个例外：
//sizeof（数组名）：数组名表示整个数组，计算的是整个数组的大小
//&数组名 ：数组名表示整个数组，取出的是整个数组的地址

int main()
{
    ////一维数组
    //int a[] = { 1,2,3,4 };

    //printf("%d\n", sizeof(a));     //16      元素个数*元素类型
    //printf("%d\n", sizeof(a + 0)); //4/8     a是数组首元素的地址，a+0还是第一个元素的地址，地址的大小就是4/8字节
    //// 4/8是因为32位机器上的是4，64位机器上是8
    //printf("%d\n", sizeof(*a));    //4       a表示数组首元素地址 *a表示数组第一个元素  sizeof（*a）就是数组第一个元素的大小
    //printf("%d\n", sizeof(a + 1)); //4/8     a是数组首元素的地址，地址+1指向第二个元素的地址，地址的大小是4/8个字节
    //printf("%d\n", sizeof(a[1]));  //4       计算的是数组第二个元素的大小
    //printf("%d\n", sizeof(&a));    //4/8     &a取出的是数组的地址，数组的地址也是地址，是地址大小就是4/8字节
    //printf("%d\n", sizeof(*&a));   //16      &a取出的是数组的地址，*拿到整个数组的元素，求的是整个数组元素的大小
    //printf("%d\n", sizeof(&a + 1));//4/8     &a取出的是数组的地址，+1跳过整个数组，产生的是最后一个元素后面的地址 是地址大小就是4/8，我们只进行计算，不进行访问，不会出现非法访问和数组越界的情况
    //printf("%d\n", sizeof(&a[0])); //4/8     &a[0]取出的是第一个元素的地址   
    //printf("%d\n", sizeof(&a[0] + 1));//4/8  数组第二个元素的地址



    ////字符数组
    //char arr[] = { 'a','b','c','d','e','f' };//[ a b c d e f ]

    //printf("%d\n", sizeof(arr));      //6      sizeof只计算数组元素所占内存空间的大小，和\0无关
    //printf("%d\n", sizeof(arr + 0));  //4/8    首元素地址，地址的大小就是4/8字节
    //printf("%d\n", sizeof(*arr));     //1      arr表示数组首元素地址，*是数组第一个元素的大小
    //printf("%d\n", sizeof(arr[1]));   //1      这里表示的是数组第二个元素的大小
    //printf("%d\n", sizeof(&arr));     //4/8    &arr是数组的地址 
    //printf("%d\n", sizeof(&arr + 1)); //4/8    &arr+1是从数组的地址开始向后跳过了整个数组的地址
    //printf("%d\n", sizeof(&arr[0] + 1));//4/8  是数组第二个元素的地址

    //printf("%d\n", strlen(arr));      //随机值    arr数组中没有\0，strlen函数会继续向后寻找\0，直到找到/0，统计\0之前元素的个数
    //printf("%d\n", strlen(arr + 0));  //随机值    arr+0是数组首元素地址，但数组中没有/0，strlen函数会向后继续寻找/0，直到找到/0，并且统计/0之前的元素个数
    ////printf("%d\n", strlen(*arr));     //err    arr是数组首元素地址，*a就是数组首元素 这里属于非法访问
    ////printf("%d\n", strlen(arr[1]));   //err    同上 
    //printf("%d\n", strlen(&arr));     //随机值    &arr取出的是整个数组的地址，依然是从首元素地址开始向后寻找\0
    //printf("%d\n", strlen(&arr + 1)); //随机值    数组地址+1意思是跳过整个数组，从最后一个元素后面开始寻找\0
    //printf("%d\n", strlen(&arr[0] + 1));//随机值  这里取出的是第一个元素的地址，从第二个元素的地址开始向后寻找\0


//
    //char arr[] = "abcdef";//[ a b c d e f \0 ]

    //printf("%d\n", sizeof(arr));     //7       sizeof计算的数组总大小，\0也是占内存空间的
    //printf("%d\n", sizeof(arr + 0)); //4/8     arr+0是首元素地址
    //printf("%d\n", sizeof(*arr));    //1       a-97  *arr是数组首元素
    //printf("%d\n", sizeof(arr[1]));  //1       b-98  arr[1]数组的第二个元素
    //printf("%d\n", sizeof(&arr));    //4/8     &arr数组的地址，但是数组的地址依然是地址
    //printf("%d\n", sizeof(&arr + 1));//4/8     &arr+1跳过整个数组，是\0后面的地址，但是依然是地址
    //printf("%d\n", sizeof(&arr[0] + 1));//4/8  是数组第二个元素的地址

    //printf("%d\n", strlen(arr));     //6       strlen函数统计的是\0之前元素的个数
    //printf("%d\n", strlen(arr + 0)); //6       依旧是首元素的地址，开始向后寻找\0
    ////printf("%d\n", strlen(*arr));    //err     非法访问
    ////printf("%d\n", strlen(arr[1]));  //err    
    //printf("%d\n", strlen(&arr));    //6       取出的是整个数组的地址，但是是从首元素地址开始向后读取
    //printf("%d\n", strlen(&arr + 1));//随机值  &arr+1跳过整个数组，在arr数组后还有没有/0未知   
    //printf("%d\n", strlen(&arr[0] + 1));//5    首元素地址+1是表示第二个元素的地址


    //char* p = "abcdef";

    //printf("%d\n", sizeof(p));         //4/8   p是指针变量，计算的是指针变量的大小
    //printf("%d\n", sizeof(p + 1));     //4/8   p+1是字符‘b’的地址
    //printf("%d\n", sizeof(*p));        //1     *p - a
    //printf("%d\n", sizeof(p[0]));      //1     p[0] -> *(p+0) -> *p
    //printf("%d\n", sizeof(&p));        //4/8   &p是指针变量p在内存中的地址  可以理解为char* *pp = &p；
    //printf("%d\n", sizeof(&p + 1));    //4/8   &p是跳过p之后的地址 
    //printf("%d\n", sizeof(&p[0] + 1)); //4/8   &p[0]是a的地址，+1就是b的地址

    //printf("%d\n", strlen(p));         //6     从a的地址向后找\0
    //printf("%d\n", strlen(p + 1));     //5     从b的地址向后找\0
    //// printf("%d\n", strlen(*p));        //err  
    //// printf("%d\n", strlen(p[0]));      //err
    //printf("%d\n", strlen(&p));        //随机值  因为这里是从p的地址向后寻找\0
    //printf("%d\n", strlen(&p + 1));    //随机值  同上
    //printf("%d\n", strlen(&p[0] + 1)); //5       a的地址+1就是b的地址，从b向后数元素

//
    //二维数组
    int a[3][4] = { 0 };

    printf("%d\n", sizeof(a));            //48    计算的是整个数组的大小，单位是字节3*4*4=16
    printf("%d\n", sizeof(a[0][0]));      //4     第一行第一个元素的大小
    printf("%d\n", sizeof(a[0]));         //16    二维数组的每一行可以认为是一个一维数组，那么a[0]可以理解为一维数组的数组名
    printf("%d\n", sizeof(a[0] + 1));     //4/8   a[0]作为第一行的数组名，并没有单独放在sizeof内部，
    //所以a[0]就是数组首元素的地址，就是第一行第一个元素的地址，所以a[0]+1就是第一行第二个元素的地址                                         

    printf("%d\n", sizeof(*(a[0] + 1)));  //4/8 表示第一行第二个元素
    printf("%d\n", sizeof(a + 1));        //4/8  a表示首元素地址，也就是第一行的地址，第一行的地址+1就是第二行的地址
    printf("%d\n", sizeof(*(a + 1)));     //16   对第二行的地址*就是访问到第二行 *（a+1) -> a[1]
    printf("%d\n", sizeof(&a[0] + 1));    //4/8    a[0]是第一行的数组名，&就是取出第一行的地址，+1就是第二行的地址
    printf("%d\n", sizeof(*(&a[0] + 1))); //16     对第二行的地址*就是访问第二行的全部元素
    printf("%d\n", sizeof(*a));           //16     a是首元素地址，等于第一行的地址，*就是访问第一行的所以元素   
    printf("%d\n", sizeof(a[3]));         //16     sizeof不会去访问内存，而是根据类型判断大小，这里的类型是int类型，第四行的数组名

    return 0;
}