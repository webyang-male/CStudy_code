#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	int day = 0, buy = 2;
//	float sum = 0, ave;
//	do
//	{
//		sum = sum + 0.8*buy;
//		day++; buy = buy * 2;
//	} while(buy <= 100);
//	ave = sum / day;
//	printf("average=%f\n", ave);
//	//printf("天数=%d\n", day);
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1; i < 100; i++)
//		if(i * i % 10 == i || i * i % 100 == i) printf("%3d", i);
//	return 0;
//}

//int main()
//{
//	int x, y, i, s = 1;
//	printf("请输入x,y>\n");
//	scanf("%d%d", &x, &y);
//	for (i = 1; i <= y; i++)
//		s = s*x % 1000;
//	printf("The last 3 digit of %d*%d is:%d\n", x, y, s);
//	return 0;
//}

//int main()
//{
//	int i, j;
//	double s, sum, ave;
//	printf("请输入6位学生对应5门成绩:>\n");
//	for (i = 0; i < 6; i++)
//	{
//		sum = 0;
//
//		for (j = 1; j <= 5; j++)
//		{
//			scanf("%lf", &s);
//			sum += s;
//		}
//		ave = sum / 5;
//		printf("NO.%d学生对应5门平均成绩为:%6.2lf\n", i + 1, ave);
//	}
//}

//int main()
//{
//	int i, j;
//	double s, sum, ave;
//	printf("请输入6位学生对应5门成绩:>\n");
//	for (i = 0; i < 6; i++)
//	{
//		sum = 0;
//
//		for (j = 1; j <= 5; j++)
//		{
//			scanf("%lf", &s);
//			sum += s;
//		}
//		ave = sum / 5;
//		printf("NO.%d学生对应5门平均成绩为:%6.2lf\n", i + 1, ave);
//	}
//}

//int main()
//{
//	int i, s[5], x;
//	printf("请输入0-4的正整数:>\n");
//	scanf("%d", &x);
//	while (x != -1)
//	{
//		if (x >= 0 && x <= 4)
//		s[x]++;
//	}
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d : %d\n", i, s[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i, j, a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } },b[3][2];
//	printf("array a打印:>\n");
//	for (i = 0; i <2; i++)
//	{
//		for ( j = 0; j < 3; j++)
//		{
//			b[j][i] = a[i][j];//行列数据交换
//			printf("%3d", a[i][j]);//打印原数组
//		}
//		printf("\n");
//	}
//	printf("array b打印:>\n");
//	for (i = 0; i <3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%3d", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define size 30
//int main()
//{
//	float b[size / 5], sum;
//	int a[size], i, k;
//	for (k = 2, i = 0; i < size; i++,k += 2)
//	{
//		a[i] = k;
//		sum = 0;
//	}
//	for (k = 0, i = 0; i < size; i++)
//	{
//		sum = sum + a[i];
//		if ((i + 1) % 5 == 0)
//		{
//			b[k++] = sum / 5;
//			sum = 0;
//		}
//	}
//	printf("The result is:\n");
//	for (i = 0; i < size / 5; i++)
//	{
//		printf("%6.2f ", b[i]);
//	}
//}

//int main()
//{
//	int a[5][5], i, j, n = 1;
//	for ( i = 0; i < 5; i++)
//	{
//		for ( j = 0; j < 5; j++)
//		{
//			a[i][j] = n++;
//			printf("%2d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("The result is:>\n");
//	for ( i = 0; i < 5; i++)
//	{
//		for ( j = 0; j <=i; j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int a[10][10], i, j, k = 0, m, n;
//	printf("Enter n(n<10):>\n");
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		m = n / 2;
//	}
//	else
//	{
//		m = n / 2 + 1;
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = i; j < n - i; j++)
//		{
//			k++; a[i][j] = k;
//		}
//		for (j = i + 1; j < n - i; j++)
//		{
//			k++; a[j][n - i - 1] = k;
//		}
//		for (j = n - i - 2; j >= i; j--)
//		{
//			k++; a[n - i - 1][j] = k;
//		}
//		for (j = n - i - 2; j >= i + 1; j--)
//		{
//			k++; a[i][j] = k;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define N 10
//int main()
//{
//	char a[N], b[N], i;
//	printf("请输入%d个整数:>", N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 1; i < N; i++)
//	{
//		b[i] = a[i] / a[i - 1];
//	}
//	for (i = 1; i < N; i++)
//	{
//		printf("%3d", b[i]);
//		if (i % 3 == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a[10] = {1,3,5,7,9,11,13,15,17,19},top,bot,mid,m;
//	printf("请输入一个正整数:>\n");
//	scanf("%d",&m);
//	top = 0, bot = 9;
//	while (top<=bot)
//	{
//		mid = (top+bot) / 2;
//		if (a[mid]==m)
//		{
//			break;
//		}
//		else if (a[mid]>m)top = mid + 1;
//		else bot = mid - 1;
//	}
//	if (top<=bot)
//	{
//		printf("找到了!位置是%d\n",mid);
//	}
//	else{
//		printf("没找到%d\n",m);
//	}
//	return 0;
//}

//int main()
//{
//	char a[250], b[]="zzy",max;
//	int i = 1, j;
//	printf("请输入一个字符串:>\n");
//	gets(a); 
//	max = a[0];
//	while (a[i]){ 
//		if (a[i]>max){
//			max = a[i]; 
//			j = i;
//		}
//		i++;
//	}
//	for (i = strlen(a) + strlen(b) - 1; i > j;i--)
//	{
//		a[i] = a[i-strlen(b)];
//	}
//	j = 0;
//	i++;
//	while (b[j])
//	{
//		a[i] = b[j];
//		i++;
//		j++;
//	}
//	puts(a);
//	return 0;
//}

//int isPrime(int a)
//{
//	int k;
//	if (a == 1) return 0;
//	for (k = 2; k < a / 2; k++)
//		if (a%k == 0)return 0;
//	return 1;
//}
//
//int main()
//{
//	int a;
//	printf("请输入一个整数:>\n");
//	scanf("%d",&a);
//	isPrime(a);
//	if (isPrime(a) == 1)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("非素数\n");
//	}
//	return 0;
//}


//int main(void) {
//	int input;
//	printf("Enter a value of char int ASCII:");
//	scanf("%d", &input);
//	/* 通过scanf()函数读取用户输入，并存储在input变量中。*/
//	printf("You input value is %d, and char is %c\n", input, input);
//	/* 通过转换说明%d，%c 打印整型数值和字符。*/
//	return 0;
//}
