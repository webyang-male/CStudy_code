#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int num = 0;
//	int count = 0;
//	printf("请输入一个整数:>\n");
//	scanf("%d",&num);
//	//统计num的补码中有几个1
//	while (num)
//	{
//		if (num%2==1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("count=%d\n",count);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;//输入值初始化
//	int count = 0;//计数初始化
//	int i = 0;
//	printf("请输入一个整数:>\n");
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//
//	return 0;
//}

////方法3：
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;//计数
//	printf("请输入一个整数:>\n");
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int weight = 120;//体重
//	weight = 89;//不满意就赋值
//	double salary = 10000.0;
//	salary = 20000.0;//使用赋值操作符赋值。
//	return 0;
//}


//int main(){
//	//赋值操作符可以连续使用，比如：
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;//连续赋值
//	//这样的代码感觉怎么样？
//	//那同样的语义，你看看：
//	x = y + 1;
//	a = x;
//	//这样的写法是不是更加清晰爽朗而且易于调试。
//	return 0;
//}

//int main(){
//	int a = 10;
//	a = a + 2;
//	a += 2;//复合赋值符
//
//	int x = 8;
//	x = x >> 1;
//	x >>= 1;
//
//	int m = 6;
//	m = m & 1;
//	m &= 1;
//	//其他运算符一样的道理。只是这样写更加简洁。
//	return 0;
//}

//int main(){
//	int a = 0;
//	if (a)
//	{
//		printf("条件为假,看不见本句\n");
//	}
//	if (!a)
//	{
//		printf("条件为真,输出本句\n");
//	}
//
//	int b = -5;
//	b = -b;
//	printf("%d\n",b);
//
//	int x = 10;
//	int* p = &x;//&取地址操作符
//	*p = 520;//*解引用操作符
//	printf("%d\n", *p);//*p=x=520
//
//	int q = 10;
//	char c = 'c';
//	char *d = &c;
//	int arr[10] = {0};
//
//	//sizeof计算变量所占内存空间的大小
//	printf("%d\n", sizeof(q));//4
//	printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof int);//sizeof后接类型不能省略括号
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(d));//4
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int[10]));//数组类型--40
//	return 0;
//}

