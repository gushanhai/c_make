//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include"game.h"
////���������������а����˵����ж��Ƿ������Ϸ
//menu()
//{
//    printf("###############################\n");
//    printf("#### 1.play         0.exit ####\n");
//    printf("###############################\n");
//}
//game()
//{
//    //����-������̵���Ϣ
//    char board[ROW][COL] = { 0 };
//    //��ʼ������
//    //��Ϊ������char���ͣ������ڶ�������ʱʹ��{0}��������0�൱��\0,����ӡ���������ϲ��ǿո�Ҫʹ�ÿո��ʼ����Ҫ������������
//    InitBoard(board, ROW, COL);
//    //��ӡ����
//    DisplayBoard(board, ROW, COL);
//    char ret = 0;
//    while (1)
//    {
//        //�������
//        PlayMove(board, ROW, COL);
//        DisplayBoard(board, ROW, COL);
//        ret = IsWin(board, ROW, COL);
//        if (ret != 'c')
//        {
//            break;
//        }
//        //��������
//        ComputerMove(board, ROW, COL);
//        DisplayBoard(board, ROW, COL);
//        //*���Ӯ
//        //#����Ӯ
//        //Qƽ��
//        //c����
//        ret = IsWin(board, ROW, COL);
//        if (ret != 'c')
//        {
//            break;
//        }
//    }
//    if (ret == '*')
//    {
//        printf("���Ӯ\n");
//    }
//    else if (ret == '#')
//    {
//        printf("����Ӯ\n");
//    }
//    else
//    {
//        printf("ƽ��\n");
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
//        printf("��ѡ��:>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            printf("������\n");
//            break;
//        case 0:
//            printf("�˳���Ϸ\n");
//            break;
//        default:
//            printf("ѡ����������������\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}