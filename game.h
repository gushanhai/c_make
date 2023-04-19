#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#define ROW 5
#define COL 5
#include<stdlib.h>
#include<time.h>
//ÉùÃ÷
void InitBoard(char board[ROW][COL], int row, int col1);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);