#define _CRT_SECURE_NO_WARNINGS
#define ROW 3//定义行为3
#define COL 3//定义列为3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//返回4种游戏状态
/*
1.玩家赢--'*'
2.电脑赢--'#'
3.平局--'Q'
4.不定态--胜负未分--'C'
*/
char IsWin(char board[ROW][COL], int row, int col);