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
	//�׵���Ϣ�洢
	printf("ɨ����Ϸ��ʼ!\n");
	//1.���úõ�����Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11

	//�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };

	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);//չʾ����
	//ɨ��
	
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//�����������
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);//��������ֵ
		switch (input)
		{
		case 1:
			game();
			printf("ɨ����Ϸ��ʼ!\n");
			break;
		case 0:
			printf("���˳���Ϸ!\n");
			break;
		default:
			printf("what are U ��ɶ��!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}