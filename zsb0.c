#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("%s", " ");
//		}
//		printf("%s\n", "*****");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a, b, c, max;
//	printf("请输入三个数：\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	if (c > max)
//	{
//		max = c;
//	}
//	printf("三个数中最大的数为：%d\n", max);
//	return 0;
//}

//#include<stdio.h>
//#include <math.h>
//int main()
//{
//
//	double p, r, n;
//	r = 0.07;
//	n = 10;
//	p = pow(1 + r, n);
//	printf("p=%f\n", p);//p=1.967152
//	return 0;
//}

//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int p = 1000;//本金
//	int n = 5;//存款年限
//	double r1 = 0.015, r2 = 0.021, r3 = 0.0275, r5 = 0.03, r0 = 0.0035;
//
//	double p1 = p*(1 + n*r5);//1次存5年
//	double p2 = p*(1 + 2 * r2) * (1+3*r3);//先存2年,再存3年
//	double p3 = p*(1 + 3 * r3) * (1 + 2 * r2);//先存2年,再存3年
//	double p4 = p* pow(1+r0/4,4*n);//存1年，连续存5次
//	double p5 = p* pow(1+r0/4,4*n);//存5年活期
//
//	printf("p1=%.2f元\n", p1); // 输出按第1方案得到的本息和
//	printf("p2=%.2f元\n", p2); // 输出按第2方案得到的本息和
//	printf("p3=%.2f元\n", p3); // 输出按第3方案得到的本息和
//	printf("p4=%.2f元\n", p4); // 输出按第4方案得到的本息和
//	printf("p5=%.2f元\n", p5); // 输出按第5方案得到的本息和
//	return 0;
//}

//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	double d = 300000, p = 6000, r = 0.01, m;
//	m = log10(p / (p - d*r)) / log10(1 + r);
//	printf("m = %3.1f\n", m);
//	return 0;
//}

////#include<stdio.h>
//int main()
//{
//	int c1, c2;
//
//	c1 = 197;
//	c2 = 198;
//	printf("c1=%c, c2=%c\n", c1, c2);
//	printf("c1=%d, c2=%d\n", c1, c2);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf("a=%db=%d", &a, &b);
//	scanf("%f%e", &x, &y);
//	scanf("%c%c", &c1, &c2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
//	c1 = c1 + 4;
//	c2 = c2 + 4;
//	c3 = c3 + 4;
//	c4 = c4 + 4;
//	c5 = c5 + 4;
//	//使用putchar输出
//	printf("使用putchar输出:");
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar(c4);
//	putchar(c5);
//	printf("\n");
//	//使用printf输出
//	printf("使用putchar输出: %c%c%c%c%c\n", c1, c2, c3, c4, c5);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float h, r, l, s, sq, vq, vz;
//	float pi = 3.141526;
//	printf("请输入圆半径r，圆柱高h∶");
//	scanf("%f %f", &r, &h); //要求输入圆半径r和圆柱高h
//	l = 2 * pi*r; //计算圆周长l
//	s = r*r*pi; //计算圆面积s
//	sq = 4 * pi*r*r; //计算圆球表面积sq
//	vq = 3.0 / 4.0*pi*r*r*r; //计算圆球体积vq
//	vz = pi*r*r*h; //计算圆柱体积vz
//	printf("圆周长为: l=%6.2f\n", l);
//	printf("圆面积为: s=%6.2f\n", s);
//	printf("圆球表面积为: sq=%6.2f\n", sq);
//	printf("圆球体积为: v=%6.2f\n", vq);
//	printf("圆柱体积为: vz=%6.2f\n", vz);
//	return 0;
//}

//int main()
//{
//	int c1, c2;
//	printf("请输入两个字符c1,c2:");
//	c1 = getchar();
//	c2 = getchar();
//	printf("用putchar语句输出结果为:");
//	putchar(c1);
//	putchar(c2);
//	printf("\n");
//	printf("用printf语句输出结果为:");
//	printf("%c %c\n", c1, c2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3, b = 4, c = 5;
//	printf("%d\n", !(a > b) && !c || 1);
//	system("pause");//这一句是为了让控制台不退出
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	printf("请输入a,b,c对应数值:>\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a == b && a == c) {
//		printf("Three numbers are equal\n");
//	}
//	else if (a == b && a > c) {
//		printf("a and b are the largest number\n", a);
//	}
//	else if (a == c && a > b) {
//		printf("a and c are the largest number\n", a);
//	}
//	else if (b == c && b > a) {
//		printf("c and b are the largest number\n", a);
//	}
//	else if (a > b && a > c) {
//		printf("a=%d is the largest number\n", a);
//	}
//	else if (b > a && b > c) {
//		printf("b=%d is the largest number\n", b);
//	}
//	else {
//		printf("c=%d is the largest number\n", c);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a, b;
//	printf("请输入小于1000的正数\n");
//	scanf_s("%f", &a);
//	if (a >= 1000 || a < 0) {
//		printf("请输入小于1000的正数\n");
//		scanf_s("%f", &a);
//		b = sqrt(a);
//	}
//	else {
//		b = sqrt(a);
//	}
//	printf("a=%4.0f, b=%4.0f\n", a, b);
//	system("pause");//这一句是为了让控制台不退出
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x, y;
//	printf("请输入2个数:>\n");
//	scanf_s("%d", &x);
//	if (x < 1) {
//		y = x;
//	}
//	else if (x >= 1 && x < 10) {
//		y = 2 * x - 1;
//	}
//	else {
//		y = 3 * x - 11;
//	}
//	printf("y = %d\n", y);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int score;
//	printf("enter score:>\n");
//	scanf_s("%d", &score);
//	if (score >= 90) {
//		printf("A\n");
//	}
//	else if (score >= 80 && score < 90) {
//		printf("B\n");
//	}
//	else if (score >= 70 && score < 80) {
//		printf("C\n");
//	}
//	else if (score >= 60 && score < 70) {
//		printf("D\n");
//	}
//	else {
//		printf("E\n");
//	}
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("enter num:");
//	scanf_s("%d", &num);
//	if (num > 99999 || num < 0) {
//		printf("请输入0~99999之间的正数\n");
//		return -1;
//	}
//	if (num >= 10000) {
//		printf("5\n");
//	}
//	else if (num >= 1000) {
//		printf("4\n");
//	}
//	else if (num >= 100) {
//		printf("3\n");
//	}
//	else if (num >= 10) {
//		printf("2\n");
//	}
//	else {
//		printf("1\n");
//	}
//	system("pause");
//	return 0;
//}