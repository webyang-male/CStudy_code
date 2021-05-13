#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello learner\n";
//	struct T t = { "study", {100, 'w', "hello world", 3.14}, arr};
//	printf("%s\n", t.ch);//study
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello learner
//
//	return 0;
//}


//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age:  %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex:  %s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age : %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex : %s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "李四", 40, "15598886688", "男" };
//	//打印结构体数据
//	Print1(s);
//	Print2(&s);
//
//	return 0;
//}
////Print1 和 Print2 打印哪个更好？
///*
//很显然是Print2
//Print1的形参接收实参s,形参是实参的临时拷贝
//需要花费更多时间和空间
//Print2接收的是内存地址,最大消耗空间为4/8字节
//*/


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//
//	return 0;
//}


//int main()
//{
//	//00000000 00000000 00000000 00010100 - 原码
//	//00000000 00000000 00000000 00010100 - 反码
//	//00000000 00000000 00000000 00010100 - 补码
//	int a = 20;//4个字节-32bit
//	//10000000 00000000 00000000 00001010 - 原码
//	//11111111 11111111 11111111 11110101 - 反码
//	//1111 1111 1111 1111 1111 1111 1111 0110 - 补码
//	//四位二进制可以转换为16进制数
//	//变量b的补码转换成16进制数为:
//	//FFFFFFF6
//	//转换成地址:0xFFFFFFF6
//	int b = -10;
//	
//	return 0;
//}

//check_sys()
//{
//	int a = 1;
//
//	//char* p = (char*)&a;
//	////*p返回1,小端 返回0,大端
//	//return *p;
//	return *(char*)&a;
//}
//
//int main()
//{
//	//返回1,小端 返回0,大端
//	int ret = check_sys();	
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	//变量a的原反补码:
//	//10000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111
//	//a中只能存8个bit位->11111111
//	//a是有符号位char,则最高位为符号位进行整型提升,补码结果:
//	//11111111 11111111 11111111 11111111
//	//转换成原码还是10000000 00000000 00000000 00000001,所以打印-1
//	char a = -1;
//	//变量b的补码:11111111
//	signed char b = -1;
//	//变量c的补码:11111111
//	//无符号字符变量c,整型提升高位补0,则32位完整补码为:00000000 00000000 00000000 11111111
//	//最高位是0,为正数,则原反补相同
//	//11111111装换成十进制就是255
//	unsigned char c = -1;
//	printf(" a=%d\n b=%d\n c=%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	//10000000 00000000 00000000 10000000
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000 -补码
//	//10000000
//	//整型提升结果:
//	//11111111 11111111 11111111 10000000 -补码
//
//	char a = -128;
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字 - 则原反补相同
//	printf("%u\n", a);//输出补码转换后的十进制结果 - 4294967168
//	return 0;
//}

//int main()
//{
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11101100 - 补码
//	int i = -20;
//	//正数原反补相同
//	//00000000 00000000 00000000 00001010 - 补码
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//}

//#include <Windows.h>//Sleep休眠函数头文件
//int main()
//{
//	//无符号数没有符号位(0/1)
//	unsigned int i;//-1在无符号数定义下被认为是一个超大二进制数(最终转为十进制数输出)
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1500);//毫秒单位
//	}
//	return 0;
//}

//int main()
//{
//	//char的取值范围为 - 128~127
//	char a[1000];//下标0-999
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//打印\0之前的长度
//	return 0;
//}

//unsigned char i = 0;//0-255
//int main()
//{
//	//i <= 255恒成立
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}