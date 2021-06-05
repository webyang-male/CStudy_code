#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//void menu()
//{
//	printf("*************************\n");
//	printf(" 1:add 2:sub \n");
//	printf(" 3:mul 4:div \n");
//	printf(" 5.XOR 0:exit\n");
//	printf("*************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int XOR(int x, int y)
//{
//	return x ^ y;
//}
//
////int main()
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	//pfArr是一个函数指针数组 - 转移表
////	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, XOR };
////	do
////	{
////		menu();
////		printf("请选择:>\n");
////		scanf("%d", &input);
////		if (input >= 1 && input<=5)
////		{
////			printf("请输入两个操作数:>\n");
////			scanf("%d%d", &x, &y);
////			int ret = pfArr[input](x, y);
////			printf("%d\n", ret);
////		}
////		else if (input == 0)
////		{
////			printf("退出计算思密达!\n");
////		}
////		else
////		{
////			printf("What are you 输啥嘞!\n");
////		}
////		
////	} while (input);
////}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>\n");
//	scanf("%d%d", &x, &y);
//	printf("结果为 = %d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//		case 5:
//			Calc(XOR);
//			break;
//		case 0:
//			printf("退出计算思密达!\n");
//			break;
//		default:
//			printf("What are you 输啥嘞!\n");
//			break;
//		}
//	} while (input);
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组地址
//
//	int(*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个函数指针数组
//
//	//ppfArr 是一个数组指针,指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int, int)
//	int(*(*ppfArr[4]))(int, int) = &pfArr;
//	
//	return 0;
//}

//void print(char *str)
//{
//	printf("this is:%s", str);
//}
//void test(void(*p)(char *))
//{
//	printf("test\n");
//	p("test");
//}
//int main()
//{
//	test(print);
//	return 0;
//}
