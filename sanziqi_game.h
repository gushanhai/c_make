#pragma once
//��Ϸ����������
#include<stdio.h>
#include<time.h>
#define ROW 3
#define COL 3
void Initboard(char board[ROW][COL], int row,int  col);
void Printboard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void ComMove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
//���Ӯ --*
//����� --#
//ƽ�� --Q
//���� --C