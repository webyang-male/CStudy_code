#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2--short类型
//	//sizeof包含的表达式不参与实际运算
//	printf("%d\n", s);//0
//	return 0;
//}

//int main()
//{
//	int z = 0;
//	//  ~ 按(二进制)位取反
//	//00000000 00000000 00000000 00000000
//	//11111111 11111111 11111111 11111111 - 补码
//	//11111111 11111111 11111111 11111110 - 反码
//	//10000000 00000000 00000000 00000001 - 原码
//	printf("%d\n", ~z);//-1
//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);//3
//	return 0;
//}

//问：
//（1）、（2）两个地方分别输出多少？
//（3）、（4）两个地方分别输出多少？

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)--随平台不同会有两个结果4/8
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)--随平台不同会有两个结果4/8
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);//传过去的是数组首元素地址
//	test2(ch);//传过去的是数组首元素地址
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 5;
//	//int c = a&&b;
//	int c = a||b;
//	printf("%d\n", c);//结果1--真 0--假
//	return 0;
//}

//程序输出的结果是什么？
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//a++先使用后++,所以先为0,后面不计算,之后自增为1
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n i = %d\n", a, b, c, d, i);
//	
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//a++为真,后面逻辑或都不会进行计算,a自增1为2
//	i = a++ || ++b || d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n i = %d\n", a, b, c, d, i);
//	return 0;
//}


//int main()
//{
//
//	int a = 99;
//	int b = 520;
//	int max = 0;
//	if (a > 5)
//		max = a;
//	else
//		max = b;
//
//
//	//等价于
//	max = (a > b ? a : b);
//
//	return 0;
//}


//int main()
//{
//	int	a = 1;
//	int b = 2;
//	//括号内的a > b,a不产生值
//	//a = b + 10 = 12
//	//b = a+1 = 13
//	//c = b = 13
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//	
//}

//int main()
//{
//	int	a = 1;
//	int b = 2;
//	int c = -1;
//	int d = 0;
//	if (a = b + 1, c = a / 2, d > 0)
//		printf("判断为真,则输出此句\n");//d > 0条件为假,不能输出此句
//	return 0;
//
//}

//int main()
//{
//	int arr[10];//创建数组
//	arr[9] = 10;//实用下标引用操作符。
//	//[]的两个操作数是arr和9。
//	return 0;
//}


//void test1()
//{
//	printf("看到这里的读者,\n");
//}
//void test2(const char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1(); //实用（）作为函数调用操作符。
//	test2("加油呀!\n");//实用（）作为函数调用操作符。
//	return 0;
//}

////学生
////struct也是一种类型
////创建一个结构体类型--- struct Stu
//struct Stu
//{
//	char name[20];//姓名
//	int age;//年龄
//	char id[20];//学号
//};
//
//int main()
//{
//	//使用struct Stu这个类型创建了一个学生对象s1,并初始化
//	struct Stu s1 = {"张珊",20,"2021520"};
//	/*printf("%s\n",s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//
//	struct Stu* ps = &s1;
//	//下面方式显得有些繁琐
//	/*
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	*/
//
//	//C语言提供的简单方法
//	//语法:结构体指针->成员名
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	return 0;
//}

//int main()
//{
//	//00000000 00000000 00000000 00000011
//	//00000011 - a
//	char a = 3;
//	//00000000 00000000 00000000 01111111
//	//01111111 - b
//	char b = 127;
//
//	//a和b如何相加
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000000 10000010
//	char c = a + b;
//	//10000010 - c
//	//整型提升,前面补1
//	//11111111 11111111 11111111 10000010 --补码
//	//11111111 11111111 11111111 10000001 --反码
//	//10000000 00000000 00000000 01111110 --原码
//	printf("%d\n", c);//整型打印,输出:-126
//	return 0;
//}

////实例1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a\n");
//	if (b == 0xb600)
//		printf("b\n");
//	if (c == 0xb6000000)
//		printf("c\n");
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);//12
//	printf("%d\n", i);//4
//	return 0;
//}
