//题目练习测试代码

#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	//int a = 1.7;
//	//printf("%d\n",a);
//	//return 0;
//	//int b = 3;
//	//printf("%d\n", b);
//	//return 0;
//
//	int a = 1.7;
//	printf("%d\n", a);
//	exit(0);
//	int b = 3;
//	printf("%d\n", b);
//	exit(1);
//}

//int main()
//{
//	int a = 2, b = 5, c = a + ++b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	float a = 5e2;
//	printf("%lf\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 016;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	/*double x = 1.42;
//	double y = x % (-3);
//	printf("%lf\n", y);*/
//
//	int x = 2.5;
//	int y = 0;
//	y = x % (-3);
//	printf("%d\n", y);
//	return 0;
//}

//int main()
//{
//	char x = 'A';
//	char a = '6';
//	char b = '3';
//	char c = x + (a - b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char x = 'A';
//	char a = 'z';
//
//	char c = x - a;
//	printf("%d\n", c);//-57
//	return 0;
//}

//int main()
//{
//	char c = '\72';
//	printf("%d\n", sizeof c);
//	return 0;
//}

//int main()
//{
//	double a = 4.000000001;
//	float b = 8.0;
//	printf("%10lf\n", a-b);
//	return 0;
//}

//int main()
//{
//	int m = 5, y = 2;
//	//y+=
//	printf("%d\n", y-=m*=y);
//	return 0;
//}

//int main()
//{
//	int x = 5, n = 5;
//	int m = x += n++;
//	printf("%d %d\n", m,n);
//	return 0;
//}

//int main()
//{
//	double a=2.5,c=4.7;
//	int b = 7;
//	//(int)(b/3*(int)(a+c)/2)%4;
//	printf("%lf \n", (int)(b / 3 * (int)(a + c) / 2) % 4);
//	return 0;
//}

//int main()
//{
//	int a = 2, b = 3;
//	int c = a/b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 2, b = 5;
//		a++,
//		b++,
//		a + b;
//	printf("%d\n", a+b);
//	return 0;
//}

//int main()
//{
//	int a = 12;
//	a %= 1;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	double a = 3.0,b = 2.0;
//
//	printf("%d\n",pow(b,fabs(a)) );
//	return 0;
//}

//int main()
//{
//	float n = 4.0;
//
//	printf("%f\n", sqrt((double)n));
//	return 0;
//}

//int main()
//{
//	char s1[] = { "CHINABEIJING0" }, s2[] = {  "abc" };
//	printf("%1s\n", s1);
//	printf("%4s\n", s2);
//	return 0;
//}

//int main()
//{
//	int s1[] = { 1,2,3,4,5 }, s2[] = { 123 };
//	printf("%1d\n", s1);
//	printf("%4d\n", s2);
//	return 0;
//}

//int main()
//{
//	int a = 123;
//	printf("%3ld\n", a);
//	return 0;
//}

//int main()
//{
//	long y = - 43456;
//	printf("y=%-8ld\n", y);
//	printf("y=%-08ld\n", y);
//	printf("y=%08ld\n", y);
//	printf("y=%+8ld\n", y);
//	return 0;
//}

//int main()
//{
//	int y = 2456;
//	printf("y=%#8o\n", y);//y=   04630 空3格
//	return 0;
//}

//int main()
//{
//	double y = 2456.3;
//	printf("y=%lx\n", y);
//	return 0;
//}

//int main()
//{
//	/*int a = 10, b = 20;
//	char c = 'A', d = 'B';*/
//	int a = 0, b = 0;
//	char c = ' ', d = ' ';
//	scanf("%d%d", &a, &b);
//	scanf("%c%c",&c, &d);
//	printf("%d%d%c%c\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	char a[5] = "ABCD";
//	printf("%s\n", a);
//	return 0;
//}

//int main(int argc, char *argv[]){
//    argc = 1;
//	printf("%p\n", &argc);
//	return 0;
//}

//int main()
//{
//	
//	int x,y,z;
//	scanf("%d%d%d", &x, &y,&z);
//	printf("%d%d%d\n", x, y, z);//25-858993460-858993460
//	return 0;
//}

//int main()
//{
//
//	double x = 3.6;
//	
//	printf("%lf\n", ++x);
//	return 0;
//}

//int main()
//{
//	short a = -4;
//	double b = 12345.123956;
//	printf("%0.3f\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4, m =2, n = 2;
//	printf("%d\n",(m=a>b)&&(n=c>d));
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4, m = 2, n = 2;
//	printf("%d\n", a>b);
//	return 0;
//}

//int main()
//{
//	int b=(-1)&&(-1);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int  a, b, c,d;
//	a = b = c = 1;
//	d = ++a||++b;
//	printf("%d\n", d);//1
//	printf("%d\n", a);//2
//	printf("%d\n", b);//1
//	return 0;
//}

//int main()
//{
//	if (-1)
//		printf("$$$\n");
//	return 0;
//}


//int main()
//{
//	int m = 5;
//	if (m++>5)
//		printf("%d\n",--m);
//	else
//		printf("%d\n", m++);
//	return 0;
//}


//int main()
//{
//	int b=(-1)&&(-1);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	double x, y;
//	printf("Input x:>\n");
//	scanf("%lf", &x);
//	y = -1;
//	if (x < 0)
//	{
//		y = 0;
//	}
//	else if (x <= 10)
//	{
//		y = x;
//	}
//	else if (x <= 20)
//	{
//		y = 10;
//	}
//	else if (x < 40)
//	{
//		y = -0.5*x + 20;
//	}
//	else{ y = -1; }
//	if (y == -1)
//	{
//		printf("error\n");
//	}
//	else{
//		printf("y=%lf\n",y);
//	}
//	return 0;
//}

