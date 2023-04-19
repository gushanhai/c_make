//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include"game.h"
////主函数，主函数中包含菜单，判断是否进入游戏
//menu()
//{
//    printf("###############################\n");
//    printf("#### 1.play         0.exit ####\n");
//    printf("###############################\n");
//}
//game()
//{
//    //数组-存放棋盘的信息
//    char board[ROW][COL] = { 0 };
//    //初始化棋盘
//    //因为数组是char类型，所以在定义数组时使用{0}定义数组0相当于\0,不打印，但本质上不是空格，要使用空格初始化需要单独函数进行
//    InitBoard(board, ROW, COL);
//    //打印棋盘
//    DisplayBoard(board, ROW, COL);
//    char ret = 0;
//    while (1)
//    {
//        //玩家下棋
//        PlayMove(board, ROW, COL);
//        DisplayBoard(board, ROW, COL);
//        ret = IsWin(board, ROW, COL);
//        if (ret != 'c')
//        {
//            break;
//        }
//        //电脑下棋
//        ComputerMove(board, ROW, COL);
//        DisplayBoard(board, ROW, COL);
//        //*玩家赢
//        //#电脑赢
//        //Q平局
//        //c继续
//        ret = IsWin(board, ROW, COL);
//        if (ret != 'c')
//        {
//            break;
//        }
//    }
//    if (ret == '*')
//    {
//        printf("玩家赢\n");
//    }
//    else if (ret == '#')
//    {
//        printf("电脑赢\n");
//    }
//    else
//    {
//        printf("平局\n");
//    }
//
//}
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            printf("五子棋\n");
//            break;
//        case 0:
//            printf("退出游戏\n");
//            break;
//        default:
//            printf("选择有误，请重新输入\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}