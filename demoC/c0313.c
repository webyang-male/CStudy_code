#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

//void test(){
//	//static修饰局部变量
//	//局部变量的生命周期变长I
//	static	int a = 1;//静态局部变量a
//	a++;
//	printf("a = %d\n",a);
//}
//
//int main()
//{	
//	int i =0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;	
//}



//int main()
//{	
//	//extern -- 声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n",g_val);
//	return 0;	
//}

//extern -- 声明外部函数
//extern int Add(int, int);
//int main()
//{	
//	int a = 10;
//	int b = 89;
//	int sum = Add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;	
//}