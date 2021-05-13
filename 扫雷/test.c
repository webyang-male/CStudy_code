#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("*******************************************\n");
	printf("***********  1. play  0. exit  ************\n");
	printf("*******************************************\n");
}

void game()
{
	//雷的信息存储
	printf("扫雷游戏开始!\n");
	//1.布置好的雷信息
	char mine[ROWS][COLS] = { 0 };//11*11

	//排查出雷的信息
	char show[ROWS][COLS] = { 0 };

	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);//展示雷阵
	//扫雷
	
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//地雷随机函数
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);//接收输入值
		switch (input)
		{
		case 1:
			game();
			printf("扫雷游戏开始!\n");
			break;
		case 0:
			printf("已退出游戏!\n");
			break;
		default:
			printf("what are U 输啥嘞!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}