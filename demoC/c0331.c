#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//void menu()
//{
//	printf("**********************************\n");
//	printf("***********   1.play     *********\n");
//	printf("***********   0.exit     *********\n");
//	printf("**********************************\n");
//}
//
//void game()
//{	
//	int ret = 0;//接收随机数
//	int guess = 0;//接收猜的数字
//
//	//1.生成1-100随机数
//	//RAND_MAX---32767
//	ret = rand()%100+1;//rand()库文件函数,需要先调用rand()函数
//	//printf("%d\n",ret);
//	//2.猜数字
//	while(1)
//	{
//		printf("请猜数字:>\n");
//		scanf("%d",&guess);
//		if(guess > ret)
//		{
//			printf("----数字猜大了!----\n");
//		}
//		else if(guess < ret)
//		{
//			printf("----数字猜小啦!----\n");
//		}
//		else 
//		{
//			printf("----您可真厉害!猜中啦!!!----\n");
//			break;//猜对游戏中止
//		}
//	}
//}
//
//int main() {
//	int input = 0;//键盘输入值初始化
//
//	//时间戳设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	srand((unsigned int)time(NULL));//srand()函数需要一个随机变化的整型数值
//
//	do
//	{
//		menu();
//		printf("请选择选项:>\n");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			printf("*****您选择开始游戏!*****\n");
//			game();//游戏函数
//			break;
//		case 0:
//			printf("----已退出游戏!----\n");
//			break;
//		default:
//			printf("----选择错误!----\n");
//			break;
//		}
//	}while(input);
//
//	return 0;
//}

//这是一个死循环代码
//int main() {
//flag:
//	printf("你好,C语言学习者!\n");
//	goto flag;//flag是goto语句跳转的标识
//	return 0;
//}

//int main() {
//
//	printf("你好,C语言学习者!\n");
//	goto flag;//flag是goto语句跳转的标识
//	printf("你一定要");
//flag:
//	printf("好好学习鸭!\n");
//	return 0;
//}
