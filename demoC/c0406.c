#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main() 
//{	
//	int n = 0;
//	int ret = 0;
//	printf("请输入一个自然数:>\n");
//	scanf("%d",&n);
//	//TDD - 测试驱动开发
//	ret = Fib(n);
//	printf("ret = %d\n",ret);//数值过大,可能会出现int空间不足---数值溢出
//	return 0;
//}