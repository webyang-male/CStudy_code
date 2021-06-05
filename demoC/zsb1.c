#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int num;
//	printf("enter num:\n");
//	scanf_s("%d", &num);
//	if (num > 99999 || num < 0) {
//		printf("请输入0~99999之间的数字\n");
//		return -1;
//	}
//	if (num / 10000 > 0) {//取出万位数字
//		printf("%d ", num / 10000);
//	}
//	if (num % 10000 >= 1000) {//取余10000则可以取出低四位的数据，除以1000则得到千位的数字
//		printf("%d ", (num % 10000) / 1000);
//	}
//	if (num % 1000 >= 100) {//取余1000则可以取出低三位的数据，除以100则得到百位的数字
//		printf("%d ", (num % 1000) / 100);
//	}
//	if (num % 100 >= 10) {//取余100则可以取出低两位的数据，除以10则得到十位的数字
//		printf("%d ", (num % 100) / 10);
//	}
//	if (num % 10 >= 0) {//取余10则取出个位数字
//		printf("%d ", num % 10);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int num;
//	printf("enter num:");
//	scanf_s("%d", &num);
//	if (num > 99999 || num < 0) {
//		printf("请输入0~99999之间的数字\n");
//		return -1;
//	}
//	if (num % 10 >= 0) {
//		printf("%d ", num % 10);
//	}
//	if (num % 100 >= 10) {
//		printf("%d ", (num % 100) / 10);
//	}
//	if (num % 1000 >= 100) {
//		printf("%d ", (num % 1000) / 100);
//	}
//	if (num % 10000 >= 1000) {
//		printf("%d ", (num % 10000) / 1000);
//	}
//	if (num / 10000 > 0) {
//		printf("%d ", num / 10000);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	double I, salary = 0;
//	printf("enter performance:\n");
//	scanf_s("%lf", &I);
//	if (I < 0) {
//		printf("请输入一个正数\n");
//		system("pause");
//		return -1;
//	}
//	double salary1 = 100000 * 0.1;//10万的奖金
//	double salary2 = (200000 - 100000) * 0.075 + salary1;//20万的奖金
//	double salary3 = (400000 - 200000) * 0.05 + salary2;//40万的奖金
//	double salary4 = (600000 - 400000) * 0.03 + salary3;//60万的奖金
//	double salary5 = (1000000 - 600000) * 0.015 + salary4;//100万的奖金
//	if (I <= 100000) {
//		salary = I * 0.1;//小于100000按10%提成
//	}
//	else if (I > 100000 && I <= 200000) {
//		salary = salary1 + (I - 100000) * 0.075;//多出10万的按比例计算，加上10w的奖金
//	}
//	else if (I > 200000 && I <= 400000) {
//		salary = salary2 + (I - 200000) * 0.05;//多出20万的按比例计算，加上20w的奖金
//	}
//	else if (I > 400000 && I <= 600000) {
//		salary = salary3 + (I - 400000) * 0.03;//多出40万的按比例计算，加上40w的奖金
//	}
//	else if (I > 600000 && I <= 1000000) {
//		salary = salary4 + (I - 600000) * 0.015;//多出60万的按比例计算，加上60w的奖金
//	}
//	else if (I > 1000000){
//		salary = salary5 + (I - 1000000) * 0.01;//多出100万的按比例计算，加上100w的奖金
//	}
//	printf("salary:%f\n", salary);
//	return 0;
//}

//int main()
//{
//	double I, salary = 0;
//	printf("enter performance:");
//	scanf_s("%lf", &I);
//	if (I < 0) {
//		printf("请输入一个正数\n");
//		system("pause");
//		return -1;
//	}
//	double salary1 = 100000 * 0.1;//大于100000时0~100000的奖金
//	double salary2 = (200000 - 100000) * 0.075 + salary1;//大于200000时0~20万的奖金
//
//	double salary3 = (400000 - 200000) * 0.05 + salary2;//大于400000时0~40万的奖金
//	double salary4 = (600000 - 400000) * 0.03 + salary3;//大于600000时0~60万的奖金
//	double salary5 = (1000000 - 600000) * 0.015 + salary4;//大于1000000时0~100万的奖金
//
//	int grade = I / 100000;
//	switch (grade) {
//	case 0:
//		salary = I * 0.1; break;
//	case 1:
//		salary = salary1 + (I - 100000) * 0.075; break;
//	case 2://会顺序执行到下一个break处
//	case 3:
//		salary = salary2 + (I - 200000) * 0.05; break;
//	case 4:
//	case 5:
//		salary = salary3 + (I - 400000) * 0.03; break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//		salary = salary4 + (I - 600000) * 0.015; break;
//	default:
//		salary = salary5 + (I - 1000000) * 0.01; break;
//	}
//	printf("salary:%f\n", salary);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a, b, c, d;
//	
//	printf("请输入4个数:>\n");
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//	int tmp;
//	//找到最小的数
//	if (a > b) {
//		tmp = a; a = b; b = tmp; // a>b两个数据交换,则给a存储小的b
//	}
//	if (a > c) {
//		tmp = a; a = c; c = tmp;
//	}
//	if (a > d) {
//		tmp = a; a = d; d = tmp;
//	}
//	//找到第二小的数，不需要和最小的数比较
//	if (b > c) {
//		tmp = b; b = c; c = tmp;
//	}
//	if (b > d) {
//		tmp = b; b = d; d = tmp;
//	}
//	//找到第三小的数据，不需要和第一和第二小比较
//	if (c > d) {
//		tmp = c; c = d; d = tmp;
//	}
//	printf("%d %d %d %d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int h = 10; //设置h的值为塔高10米
//	float x1 = 2, y1 = 2, x2 = -2, y2 = 2, x3 = -2, y3 = -2, x4 = 2, y4 = -2;//定义各塔的圆心坐标
//	float x, y, d1, d2, d3, d4; //x,y：用来保存输入的坐标值,d1,d2,d3,d4:用来保存计算后的值
//	printf("input a point(x, y) :>\n");//输入任一点的坐标
//	scanf("%f, %f", &x, &y); //输出
//	d1 = (x - x1)*(x - x1) + (y - y1)*(y - y1);//计算点是否在d1中
//	d2 = (x - x2)*(x - x2) + (y + y2)*(y + y2); //计算点是否在d2中
//	d3 = (x + x3)*(x + x3) + (y - y3)*(y - y3); //计算点是否在d3中
//	d4 = (x + x4)*(x + x4) + (y + y4)*(y + y4); //计算点是否在d4中
//	if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1) h = 0; //判断,如果点不在d1,d2,d3,d4中,说明点不在塔上,高度h为0
//	printf("the high of this point is : %d\n", h);//输出高度h
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int h;
//	double x, y, m, n, r;
//	printf("Please input a coordinate (x,y):>\n");
//	scanf_s("%lf,%lf", &x, &y);
//	if (fabs(x) > 3 || fabs(y) > 3) {
//		h = 0;
//		printf("The height of the coordinate(%f,%f):h=%d\n", x, y, h);
//		return 0;
//	}
//	m = fabs(x) - 2; n = fabs(y) - 2;
//	r = sqrt(m * m + n * n);
//	if (r > 1)
//		h = 0;
//	else
//		h = 10;
//	printf("The height of the coordinate(%f,%f):h=%d\n", x, y, h);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int p, r, n, m, temp;
//	printf("请输入两个正整数n,m:");
//	scanf("%d%d,", &n, &m);
//	//调整n保存较大的值
//	if (n < m)
//	{
//		temp = n;
//		n = m;
//		m = temp;
//	}
//	p = n * m;
//	while (m != 0)
//	{
//		r = n % m;
//		n = m;
//		m = r;
//	}
//	printf("它们的最大公约数为:%d\n", n);
//	printf("它们的最小公倍数为:%d\n", p / n);
//	return 0;
//}

//int main()
//{
//	char c;
//	//定义eng_char为英文字母的个数，初始值为0
//	//定义space_char为空格字符的个数，初始值为0
//	//定义digit_char为数字字符的个数，初始值为0
//	//定义other_char为其他字符的个数，初始值为0
//	int eng_char = 0, space_char = 0, digit_char = 0, other_char = 0;
//	printf("请输入一行字符：");
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//		{
//			eng_char++;
//		}
//		else if (c == ' ')
//		{
//			space_char++;
//		}
//		else if (c >= '0' && c <= '9')
//		{
//			digit_char++;
//		}
//		else
//		{
//			other_char++;
//		}
//	}
//	printf("英文字母数量:%d\n空格数量:%d\n数字数量:%d\n其他字符数量:%d\n", eng_char,
//		space_char, digit_char, other_char);
//	return 0;
//}

#include <math.h>
//int main()
//{
//	//n为a的个数
//	int n;
//	double a, prev_sum = 0.0, total_sum = 0.0;
//	printf("请输入a的值以及n的值: >\n");
//	scanf("%lf %d", &a, &n);
//	//循环n次求总和
//	for (int i = 0; i < n; i++)
//	{
//		prev_sum += a * pow(10, i);
//		total_sum += prev_sum;
//	}
//	printf("总和为：%lf\n", total_sum);
//	return 0;
//}

//int main()
//{
//	double total_sum = 0;
//	for (int i = 1; i <= 20; i++)
//	{
//		double single_sum = 1;
//		for (int j = i; j > 0; j--)
//		{
//			single_sum *= j;
//		}
//		total_sum += single_sum;
//	}
//	printf("1~20每个数字阶乘总和为：%lf\n", total_sum);
//	return 0;
//}

//int main()
//{
//	double total_sum = 0, sum1 = 0, sum2 = 0, sum3 = 0.0;
//	for (int k = 1; k <= 100; k++)
//	{
//		sum1 += k;
//		//遍历50次就不在执行情况2
//		if (k <= 50)
//		{
//			sum2 += k * k;
//		}
//		//遍历10次就不在执行情况3
//		if (k <= 10)
//		{
//			sum3 += 1.0 / k;
//		}
//	}
//	total_sum = sum1 + sum2 + sum3;
//	printf("三种情况求和结果为：%lf\n", total_sum);
//	return 0;
//}

//int main()
//{
//	//a表示百位数字，b表示十位数字，c表示个位数字
//	int a, b, c;
//	for (int i = 100; i <= 999; i++)
//	{
//		a = i / 100;
//		b = (i / 10) % 10;
//		c = i % 10;
//		if (a * a * a + b * b * b + c * c * c == i)
//		{
//			printf("当前范围水仙花数为:%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int data, fator, sum; /* data表示要判断的数，fator表示因子，sum表示因子之和*/
//	for (data = 2; data <= 1000; data++)
//	{
//		//1是所有整数的因子，所以因子之和从1开始
//		sum = 1;
//		for (fator = 2; fator <= data / 2; fator++)
//		{
//			/* 判断data能否被fator整除，能的话fator即为因子 因子不包括自身 */
//			if (data % fator == 0)
//			{
//				sum += fator;
//			}
//		}
//		// 判断此数是否等于因子之和 */
//		if (sum == data)
//		{
//			printf("%d its factors are 1, ", data);
//			for (fator = 2; fator <= data / 2; fator++)
//			{
//				if (data % fator == 0)
//				{
//					printf("%d, ", fator);
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


////定义循环次数
//#define COUNT 20
//int main()
//{
//	//定义第一个分式的分子为a, 值为2; 定义分母为b，值为1
//	//定义相加的和为sum，初始值为0
//	double a = 2, b = 1, sum = 0;
//	double temp;
//	for (int i = 0; i < COUNT; i++)
//	{
//		sum += a / b;
//		//记录前一项分子
//		temp = a;
//		//前一项分子与分母之和为后一项分子
//		a = a + b;
//		//前一项分子为后一项分母
//		b = temp;
//	}
//	printf("前%d项之和为:sum=%9.7f\n", COUNT, sum);
//	return 0;
//}

//int main()
//{
//	//总高度
//	double total_m = 100.0;
//	//小球经历的米数
//	double total_sum = 0.0;
//	for (int i = 0; i < 10; i++)
//	{
//		total_sum += total_m;
//		total_m /= 2;
//		total_sum += total_m;
//	}
//	//不需要计算第10次的反弹高度，所以减去
//	total_sum -= total_m;
//	printf("小球总共经历%lf米, 第10次反弹%lf米\n", total_sum, total_m);
//	return 0;
//}