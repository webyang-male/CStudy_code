#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 5 / 2;//求商-商2余1,这里是整型
//	int b = 5 % 2;//余1
//	double c = 5 / 2.0;
//	printf("a=%d\n",a);//a=2
//	printf("b=%d\n", b);//b=1
//	printf("c=%lf\n", c);//c=2.500000
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int x = 16;
//	//>>--右移操作符
//	//移动的是二进制位
//	
//	int b = a >> 1;
//	int y = x >> 1;
//	printf("%d\n", b);//可以推断出此时采用的是算术移位
//	printf("%d\n", y);//8=1*2^3
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	/*
//	整数的二进制表示有:原码,反码,补码
//	存储到内存的是补码
//	负数最高位是1
//	10000000 00000000 00000000 00000001--原码
//	11111111 11111111 11111111 11111111--反码,符号位不变,其他位按位取反
//	11111111 11111111 11111111 11111111--补码,在反码基础上按位加1'
//	*/
//
//	int b = a >> 1;
//	printf("%d\n", b);
//	
//	return 0;
//}

//int main()
//{
//	//5的二进制原码:00000000 00000000 00000000 00000101
//	int a = 5;
//	int b = a << 1;
//	//左移后:00000000 00000000 00000000 00001010
//	printf("%d\n", b);
//
//	return 0;
//}