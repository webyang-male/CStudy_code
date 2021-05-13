#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

//void Add(int* p)//当写下*p就代表下面的&num
//{
//	(*p)++;//但是这里{}里的*p需要加（）才能正确使用
//}//++的优先级高于*的优先级，以防混淆加上（）
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);//1
//
//}
//


//void new_line() {
//	printf("你好鸭,C语言学习者!\n"); 
//}
//void three_line()
//{
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		new_line();
//	}
//}
//int main() {
//	three_line(); 
//	return 0;
//}

//int main() 
//{	
//	//写法1
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n",len);
//	//写法2
//	printf("%d\n",strlen("abc"));
//	return 0;
//}

//int main() 
//{	
//	printf("%d",printf("%d",printf("%d",43)));//4321
//	return 0;
//}

////函数声明
//int Add(int x,int y);
//
//int main() 
//{	
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}
//
////函数的定义
//int Add(int x,int y)
//{
//	int z = x+y;
//	return z;
//}

