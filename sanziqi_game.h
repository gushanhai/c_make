#pragma once
//游戏函数的声明
#include<stdio.h>
#include<time.h>
#define ROW 3
#define COL 3
void Initboard(char board[ROW][COL], int row,int  col);
void Printboard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void ComMove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
//玩家赢 --*
//玩家输 --#
//平局 --Q
//继续 --C