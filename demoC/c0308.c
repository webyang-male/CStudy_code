#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
//int main(){
//
//	int line = 0;
//	printf("成为c语言大佬\n");
//	while(line <=20000){
//		printf("敲一行有效代码:%d\n",line);
//		line++;
//	}
//	if(line >= 20000)
//		printf("你将获得一份好offer!\n");
//	return 0;
//}

/*
Add前的int 规定return返回值的类型
Add是函数名
int m,int n---函数参数
{}及其包含的代码叫函数体
*/
//int Add(int m,int n){
//	int z = m +n;
//	return z;
//}
//int main(){
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//
//	int a =1;
//	int b=2;
//
//	//sum = num1 + num2;
//	sum =Add(num1,num2);
//	printf("sum=%d\n",sum);//30
//	//sum = a + b;
//	sum =Add(a,b);
//	printf("sum=%d\n",sum);//3
//
//	return 0;
//}

//int main(){
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};//定义一个存放10个整数数字的数组
//	int i = 0;
//	printf("%d\n",arr[9]);//用下标访问数组元素--9
//  
//  //打印数组0-9
//	while(i<10)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main(){
//	int a = 1;
//	//整型1占4个字节-32bi位
//	//0000 0000 0000 0000 0000 0000 0000 0001
//
//	//对a进行左移一位 a<<1
//	//0000 0000 0000 0000 0000 0000 0000 0010
//
//	//二进制10=1*2^1+0 = 2
//	int b = a<<1;
//	printf("%d\n",b);//输出十进制2
//	printf("%d\n",a);//1,a保持不变
//	return 0;
//}

//int main(){
//	int a = 3;
//	int b = 5;
//
//	//int c = a&b;
//	//a 011
//	//b 101
//	//c 001
//
//	//int c = a|b;
//	//a 011
//	//b 101
//	//c 111
//
//	int c = a^b;
//	//a 011
//	//b 101
//	//c 110
//	//printf("a&b=%d\n",c);//十进制1
//	//printf("a|b=%d\n",c);//十进制7
//	printf("a^b=%d\n",c);//十进制6
//	return 0;
//}

//int main()
//{	
//	int a = 10;
//	int arr[10] = {0};
//	int sz = 0;
//	//sizeof计算的是变量/类型所占空间的大小;单位是字节
//	printf("LINE1=%d\n",sizeof(a));//输出4
//	printf("LINE2=%d\n",sizeof(int));//输出4,等价于上一句
//
//	printf("%d\n",sizeof(arr));//输出数组大小40,单位是字节
//
//	/*
//	计算数组的元素个数
//	个数=数组元素总大小/每个元素的大小
//	*/
//	sz = sizeof(arr)/sizeof(arr[0]);
//	printf("数组的元素个数为 = %d\n",sz);
//	return 0;	
//}