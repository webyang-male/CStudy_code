#define _CRT_SECURE_NO_WARNINGS
#define ROW 3//������Ϊ3
#define COL 3//������Ϊ3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//��������
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//����4����Ϸ״̬
/*
1.���Ӯ--'*'
2.����Ӯ--'#'
3.ƽ��--'Q'
4.����̬--ʤ��δ��--'C'
*/
char IsWin(char board[ROW][COL], int row, int col);