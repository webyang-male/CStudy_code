#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < row; i++)
	{
		printf("%d ", i);//行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;//1-9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//ASCILL码
//字符相减得到数字
//'1'-'0'=1
get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return	mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//分数/排雷数初始化
	/*
	判断游戏进行先决条件
	棋盘实际大小9*9
	最终胜利条件是9 * 9 - 10(雷的个数)=71
	*/
	while (win < row*col - EASY_COUNT)
	{
		printf("请输入排雷坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.直接踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾,你触雷挂了!\n");
				DisplayBoard(mine, row, col);//展示结果
				break;
			}
			else
			{
				//2.非雷
				//计算坐标周围有几个地雷

				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);//展示排雷后雷图以继续游戏
				win++;
			}
		}
		else
		{
			printf("输入坐标非法,请小主重新输入!:>\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("祝贺你通过游戏!排雷成功!\n");
		DisplayBoard(mine, row, col);//展示实际雷区排列图,满足玩家好奇心
	}
}