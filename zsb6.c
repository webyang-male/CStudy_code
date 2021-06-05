#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//
//#define N 10
//#define M 5
//float score[N][M];
//float a_stu[N], a_cour[M];
//int r, c;
////输入学生成绩信息函数
//void input_stu(void)
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		printf("请输入对应学生5门课程成绩:%2d:\n", i + 1);
//		for (j = 0; j < M; j++)
//			scanf("%f", &score[i][j]);
//	}
//}
////每个学生平均分
//void aver_stu(void)
//{
//	int i, j;
//	float s;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0, s = 0; j < M; j++)
//			s += score[i][j];
//		a_stu[i] = s / 5.0;
//	}
//}
////每门课程平均分
//void aver_cour(void)
//{
//	int i, j;
//	float s;
//	for (j = 0; j < M; j++)
//	{
//		s = 0;
//		for (i = 0; i < N; i++)
//			s += score[i][j];
//		a_cour[j] = s / (float)N;
//	}
//}
////最高分函数
//float highest()
//{
//	float high;
//	int i, j;
//	high = score[0][0];
//	for (i = 0; i < N; i++)
//	for (j = 0; j<M; j++)
//	if (score[i][j]>high)
//	{
//		high = score[i][j];
//		r = i + 1;
//		c = j + 1;
//	}
//	return(high);
//}
////方差函数
//float s_var(void)
//{
//	int i;
//	float sumx, sumxn;
//	sumx = 0.0;
//	sumxn = 0.0;
//	for (i = 0; i < N; i++)
//	{
//		sumx += a_stu[i] * a_stu[i];
//		sumxn += a_stu[i];
//	}
//	return(sumx / N - (sumxn / N)*(sumxn / N));
//}
//int main()
//{
//	int i, j;
//	float h;
//	input_stu();
//	aver_stu();
//	aver_cour();
//	printf("\n NO. cour1 cour2 cour3 cour4 cour5 aver:>\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("\n NO %2d ", i + 1);
//		for (j = 0; j < M; j++)
//			printf("%8.2f", score[i][j]);
//		printf("%8.2f\n", a_stu[i]);
//	}
//	printf("\naverage:");
//	for (j = 0; j < M; j++)
//		printf("%8.2f", a_cour[j]);
//	printf("\n");
//	h = highest();
//	printf("highest:%7.2f NO. %2d course %2d\n", h, r, c);
//	printf("variance %8.2f\n", s_var());
//	return 0;
//}


//#define N 10
//void input(int num[], char name[N][8])
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		printf("input NO.: ");
//		scanf("%d", &num[i]);
//		printf("input name: ");
//		getchar();
//		gets(name[i]);
//	}
//}
//void sort(int num[], char name[N][8])
//{
//	int i, j, min, templ;
//	char temp2[8];
//	for (i = 0; i < N - 1; i++)
//	{
//		min = i;
//		for (j = i; j<N; j++)
//		if (num[min]>num[j]) min = j;
//		templ = num[i];
//		strcpy(temp2, name[i]);
//		num[i] = num[min];
//		strcpy(name[i], name[min]);
//		num[min] = templ;
//		strcpy(name[min], temp2);
//	}
//	printf("\n result:\n");
//	for (i = 0; i < N; i++)
//		printf("\n %5d%10s", num[i], name[i]);
//}
//void search(int n, int num[], char name[N][8])
//{
//	int top, bott, mid, loca, sign;
//	top = 0;
//	bott = N - 1;
//	loca = 0;
//	sign = 1;
//	if ((n<num[0]) || (n>num[N - 1]))
//		loca = -1;
//	while ((sign == 1) && (top <= bott))
//	{
//		mid = (bott + top) / 2;
//		if (n == num[mid])
//		{
//			loca = mid;
//			printf("NO. %d , his name is %s.\n", n, name[loca]);
//			sign = -1;
//		}
//		else if (n < num[mid])
//			bott = mid - 1;
//		else
//			top = mid + 1;
//	}
//	if (sign == 1 || loca == -1)
//		printf("%d not been found.\n", n);
//}
//int main()
//{
//	int num[N], number, flag = 1, c;
//	char name[N][8];
//	input(num, name);
//	sort(num, name);
//	while (flag == 1)
//	{
//		printf("\ninput number to look for:");
//		scanf("%d", &number);
//		search(number, num, name);
//		printf("continue ot not(Y/N)?");
//		getchar();
//		c = getchar();
//		if (c == 'N' || c == 'n')
//			flag = 0;
//	}
//	return 0;
//}


//size_t HextoDec(char s[])
//{
//	size_t i, n;
//	n = 0;
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] >= '0'&& s[i] <= '9')
//			n = n * 16 + s[i] - '0';
//		if (s[i] >= 'a' && s[i] <= 'f')
//			n = n * 16 + s[i] - 'a' + 10;
//		if (s[i] >= 'A' && s[i] <= 'F')
//			n = n * 16 + s[i] - 'A' + 10;
//	}
//	return n;
//}
//
//int main()
//{
//	size_t result = 0;
//	char hex[9] = { 0 };
//	printf("input a HEX number:");
//	scanf("%s", hex);
//	result = HextoDec(hex);
//	printf("0x%s = %u\n", hex, result);
//	return 0;
//}

//void Convert(int n)
//{
//	int i;
//	if ((i = n / 10) != 0)
//		Convert(i);
//	putchar(n % 10 + '0');
//}
//
//int main()
//{
//	int number;
//	printf("input an integer:>\n ");
//	scanf("%d", &number);
//	printf("output: ");
//	if (number < 0)
//	{
//		putchar('-'); //先输出一个负号'-'
//		number = -number;
//	}
//	Convert(number);
//	printf("\n");
//	return 0;
//}

///* 函数sum_day:计算日期 */
//int sum_day(int month, int day)
//{
//	int day_tab[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int i;
//	for (i = 1; i < month; i++)
//		day += day_tab[i]; /* 累加所在月之前天数 */
//	return day;
//}
///* 函数leap:判断是否为闰年 */
//int leap(int year)
//{
//	int leap;
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	return leap;
//}
//int main()
//{
//	int year, month, day, days;
//	printf("input date(year,month,day):");
//	scanf("%d %d %d", &year, &month, &day);
//	printf("%d/%d/%d ", year, month, day);
//	days = sum_day(month, day); /* 调用函数sum_day */
//	if (leap(year) && month >= 3) /* 调用函数leap */
//		days = days + 1;
//	printf("is the %dth day in this year.\n", days);
//	return 0;
//}