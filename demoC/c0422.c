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
////	//pfArr��һ������ָ������ - ת�Ʊ�
////	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, XOR };
////	do
////	{
////		menu();
////		printf("��ѡ��:>\n");
////		scanf("%d", &input);
////		if (input >= 1 && input<=5)
////		{
////			printf("����������������:>\n");
////			scanf("%d%d", &x, &y);
////			int ret = pfArr[input](x, y);
////			printf("%d\n", ret);
////		}
////		else if (input == 0)
////		{
////			printf("�˳�����˼�ܴ�!\n");
////		}
////		else
////		{
////			printf("What are you ��ɶ��!\n");
////		}
////		
////	} while (input);
////}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>\n");
//	scanf("%d%d", &x, &y);
//	printf("���Ϊ = %d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
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
//			printf("�˳�����˼�ܴ�!\n");
//			break;
//		default:
//			printf("What are you ��ɶ��!\n");
//			break;
//		}
//	} while (input);
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ�������ַ
//
//	int(*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������ָ������
//
//	//ppfArr ��һ������ָ��,ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
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
