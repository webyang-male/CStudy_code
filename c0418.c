#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	/*
//	整型9的原反补码:
//	00000000 00000000 00000000 00001001
//	*/
//	int n = 9;
//	/*
//		*pFloat
//		S=>0=>正数
//		E=>00000000=>全0情况
//		(-1)^0 * 0.0000000 00000000 00000000 00001001 * 2^-126
//		综上所述:该数值表示正无限趋近于0
//	*/
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	/*
//		1001.0
//		1.001*2^3
//		(-1)^0 * 1.001 * 2^3
//		0(正数) + 3+127=130 + 001 0000 0000 0000 0000 0000
//		即:
//		0 10000010 001 0000 0000 0000 0000 0000
//		01000001000100000000000000000000
//	*/
//	printf("num的值为：%d\n", n);//1091567616
//	printf("*pFloat的值为：%f\n", *pFloat);//9.000000
//	return 0;
//}

//int main()
//{
//	float f = 5.5;
//	//十进制5.5转换成二进制数-->101.1
//	//转换成浮点数计数法-->(-1)^0 * 1.011*2^2
//	//S=0 M=1.011 E =2
//	/*
//	按照IEEE 754规则:
//	最高位符号位为0
//	E实际值为2,8个bit位=>2+127=>129
//	129的二进制序列为=>10000001
//	紧接着存放小数位=>011,但规定float有23个bit位
//	则小数位转换成二进制序列为:
//	011 0000 0000 0000 0000 0000
//	所以浮点数5.5的完整二级制序列为
//	0(符号位)+ 10000001 + 011 0000 0000 0000 0000 0000,即
//	0100 0000 1011 0000 0000 0000 0000 0000
//	转换成16进制数=>
//	0100 = 4 
//	0000 = 0
//	1011 = 11 = B
//	...
//	最终浮点数5.5的16进制数为=>0x40b00000
//	*/
//	return 0;
//}

