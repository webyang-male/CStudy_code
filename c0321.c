#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
//
////#define 定义标识符常量
////#define MAX 100
//
//
////函数的实现
//int Max(int x,int y){
//	if (x>y)
//		return x;
//	else
//		return y;
//}
////#define 定义宏--带参数
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{	
//	//int a = MAX;
//	int x = 10;
//	int y = 90;
//
//	//函数方式
//	int max = Max(x,y);
//	//printf("%d\n",a);//100
//	printf("max函数 = %d\n",max);
//	//宏的方式
//	max = MAX(x,y);//编译器解释为 max = (x>y?a:b)
//	printf("max宏方法 = %d\n",max);
//	return 0;	
//}

//int main(){
//	int a = 10;//a占4个字节
//	//&a--取地址
//	//printf("%p\n",&a);//0133F7C8---每个电脑所得值是不一样的,是16进制
//
//	//*--解引用操作符
//	int *p = &a;
//	*p = 99;
//	printf("a = %d\n",a);//99
//	printf("%p\n",p);
//	return 0;
//}