#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int num;
//	printf("enter num:\n");
//	scanf_s("%d", &num);
//	if (num > 99999 || num < 0) {
//		printf("������0~99999֮�������\n");
//		return -1;
//	}
//	if (num / 10000 > 0) {//ȡ����λ����
//		printf("%d ", num / 10000);
//	}
//	if (num % 10000 >= 1000) {//ȡ��10000�����ȡ������λ�����ݣ�����1000��õ�ǧλ������
//		printf("%d ", (num % 10000) / 1000);
//	}
//	if (num % 1000 >= 100) {//ȡ��1000�����ȡ������λ�����ݣ�����100��õ���λ������
//		printf("%d ", (num % 1000) / 100);
//	}
//	if (num % 100 >= 10) {//ȡ��100�����ȡ������λ�����ݣ�����10��õ�ʮλ������
//		printf("%d ", (num % 100) / 10);
//	}
//	if (num % 10 >= 0) {//ȡ��10��ȡ����λ����
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
//		printf("������0~99999֮�������\n");
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
//		printf("������һ������\n");
//		system("pause");
//		return -1;
//	}
//	double salary1 = 100000 * 0.1;//10��Ľ���
//	double salary2 = (200000 - 100000) * 0.075 + salary1;//20��Ľ���
//	double salary3 = (400000 - 200000) * 0.05 + salary2;//40��Ľ���
//	double salary4 = (600000 - 400000) * 0.03 + salary3;//60��Ľ���
//	double salary5 = (1000000 - 600000) * 0.015 + salary4;//100��Ľ���
//	if (I <= 100000) {
//		salary = I * 0.1;//С��100000��10%���
//	}
//	else if (I > 100000 && I <= 200000) {
//		salary = salary1 + (I - 100000) * 0.075;//���10��İ��������㣬����10w�Ľ���
//	}
//	else if (I > 200000 && I <= 400000) {
//		salary = salary2 + (I - 200000) * 0.05;//���20��İ��������㣬����20w�Ľ���
//	}
//	else if (I > 400000 && I <= 600000) {
//		salary = salary3 + (I - 400000) * 0.03;//���40��İ��������㣬����40w�Ľ���
//	}
//	else if (I > 600000 && I <= 1000000) {
//		salary = salary4 + (I - 600000) * 0.015;//���60��İ��������㣬����60w�Ľ���
//	}
//	else if (I > 1000000){
//		salary = salary5 + (I - 1000000) * 0.01;//���100��İ��������㣬����100w�Ľ���
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
//		printf("������һ������\n");
//		system("pause");
//		return -1;
//	}
//	double salary1 = 100000 * 0.1;//����100000ʱ0~100000�Ľ���
//	double salary2 = (200000 - 100000) * 0.075 + salary1;//����200000ʱ0~20��Ľ���
//
//	double salary3 = (400000 - 200000) * 0.05 + salary2;//����400000ʱ0~40��Ľ���
//	double salary4 = (600000 - 400000) * 0.03 + salary3;//����600000ʱ0~60��Ľ���
//	double salary5 = (1000000 - 600000) * 0.015 + salary4;//����1000000ʱ0~100��Ľ���
//
//	int grade = I / 100000;
//	switch (grade) {
//	case 0:
//		salary = I * 0.1; break;
//	case 1:
//		salary = salary1 + (I - 100000) * 0.075; break;
//	case 2://��˳��ִ�е���һ��break��
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
//	printf("������4����:>\n");
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//	int tmp;
//	//�ҵ���С����
//	if (a > b) {
//		tmp = a; a = b; b = tmp; // a>b�������ݽ���,���a�洢С��b
//	}
//	if (a > c) {
//		tmp = a; a = c; c = tmp;
//	}
//	if (a > d) {
//		tmp = a; a = d; d = tmp;
//	}
//	//�ҵ��ڶ�С����������Ҫ����С�����Ƚ�
//	if (b > c) {
//		tmp = b; b = c; c = tmp;
//	}
//	if (b > d) {
//		tmp = b; b = d; d = tmp;
//	}
//	//�ҵ�����С�����ݣ�����Ҫ�͵�һ�͵ڶ�С�Ƚ�
//	if (c > d) {
//		tmp = c; c = d; d = tmp;
//	}
//	printf("%d %d %d %d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int h = 10; //����h��ֵΪ����10��
//	float x1 = 2, y1 = 2, x2 = -2, y2 = 2, x3 = -2, y3 = -2, x4 = 2, y4 = -2;//���������Բ������
//	float x, y, d1, d2, d3, d4; //x,y�������������������ֵ,d1,d2,d3,d4:�������������ֵ
//	printf("input a point(x, y) :>\n");//������һ�������
//	scanf("%f, %f", &x, &y); //���
//	d1 = (x - x1)*(x - x1) + (y - y1)*(y - y1);//������Ƿ���d1��
//	d2 = (x - x2)*(x - x2) + (y + y2)*(y + y2); //������Ƿ���d2��
//	d3 = (x + x3)*(x + x3) + (y - y3)*(y - y3); //������Ƿ���d3��
//	d4 = (x + x4)*(x + x4) + (y + y4)*(y + y4); //������Ƿ���d4��
//	if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1) h = 0; //�ж�,����㲻��d1,d2,d3,d4��,˵���㲻������,�߶�hΪ0
//	printf("the high of this point is : %d\n", h);//����߶�h
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
//	printf("����������������n,m:");
//	scanf("%d%d,", &n, &m);
//	//����n����ϴ��ֵ
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
//	printf("���ǵ����Լ��Ϊ:%d\n", n);
//	printf("���ǵ���С������Ϊ:%d\n", p / n);
//	return 0;
//}

//int main()
//{
//	char c;
//	//����eng_charΪӢ����ĸ�ĸ�������ʼֵΪ0
//	//����space_charΪ�ո��ַ��ĸ�������ʼֵΪ0
//	//����digit_charΪ�����ַ��ĸ�������ʼֵΪ0
//	//����other_charΪ�����ַ��ĸ�������ʼֵΪ0
//	int eng_char = 0, space_char = 0, digit_char = 0, other_char = 0;
//	printf("������һ���ַ���");
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
//	printf("Ӣ����ĸ����:%d\n�ո�����:%d\n��������:%d\n�����ַ�����:%d\n", eng_char,
//		space_char, digit_char, other_char);
//	return 0;
//}

#include <math.h>
//int main()
//{
//	//nΪa�ĸ���
//	int n;
//	double a, prev_sum = 0.0, total_sum = 0.0;
//	printf("������a��ֵ�Լ�n��ֵ: >\n");
//	scanf("%lf %d", &a, &n);
//	//ѭ��n�����ܺ�
//	for (int i = 0; i < n; i++)
//	{
//		prev_sum += a * pow(10, i);
//		total_sum += prev_sum;
//	}
//	printf("�ܺ�Ϊ��%lf\n", total_sum);
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
//	printf("1~20ÿ�����ֽ׳��ܺ�Ϊ��%lf\n", total_sum);
//	return 0;
//}

//int main()
//{
//	double total_sum = 0, sum1 = 0, sum2 = 0, sum3 = 0.0;
//	for (int k = 1; k <= 100; k++)
//	{
//		sum1 += k;
//		//����50�ξͲ���ִ�����2
//		if (k <= 50)
//		{
//			sum2 += k * k;
//		}
//		//����10�ξͲ���ִ�����3
//		if (k <= 10)
//		{
//			sum3 += 1.0 / k;
//		}
//	}
//	total_sum = sum1 + sum2 + sum3;
//	printf("���������ͽ��Ϊ��%lf\n", total_sum);
//	return 0;
//}

//int main()
//{
//	//a��ʾ��λ���֣�b��ʾʮλ���֣�c��ʾ��λ����
//	int a, b, c;
//	for (int i = 100; i <= 999; i++)
//	{
//		a = i / 100;
//		b = (i / 10) % 10;
//		c = i % 10;
//		if (a * a * a + b * b * b + c * c * c == i)
//		{
//			printf("��ǰ��Χˮ�ɻ���Ϊ:%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int data, fator, sum; /* data��ʾҪ�жϵ�����fator��ʾ���ӣ�sum��ʾ����֮��*/
//	for (data = 2; data <= 1000; data++)
//	{
//		//1���������������ӣ���������֮�ʹ�1��ʼ
//		sum = 1;
//		for (fator = 2; fator <= data / 2; fator++)
//		{
//			/* �ж�data�ܷ�fator�������ܵĻ�fator��Ϊ���� ���Ӳ��������� */
//			if (data % fator == 0)
//			{
//				sum += fator;
//			}
//		}
//		// �жϴ����Ƿ��������֮�� */
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


////����ѭ������
//#define COUNT 20
//int main()
//{
//	//�����һ����ʽ�ķ���Ϊa, ֵΪ2; �����ĸΪb��ֵΪ1
//	//������ӵĺ�Ϊsum����ʼֵΪ0
//	double a = 2, b = 1, sum = 0;
//	double temp;
//	for (int i = 0; i < COUNT; i++)
//	{
//		sum += a / b;
//		//��¼ǰһ�����
//		temp = a;
//		//ǰһ��������ĸ֮��Ϊ��һ�����
//		a = a + b;
//		//ǰһ�����Ϊ��һ���ĸ
//		b = temp;
//	}
//	printf("ǰ%d��֮��Ϊ:sum=%9.7f\n", COUNT, sum);
//	return 0;
//}

//int main()
//{
//	//�ܸ߶�
//	double total_m = 100.0;
//	//С����������
//	double total_sum = 0.0;
//	for (int i = 0; i < 10; i++)
//	{
//		total_sum += total_m;
//		total_m /= 2;
//		total_sum += total_m;
//	}
//	//����Ҫ�����10�εķ����߶ȣ����Լ�ȥ
//	total_sum -= total_m;
//	printf("С���ܹ�����%lf��, ��10�η���%lf��\n", total_sum, total_m);
//	return 0;
//}