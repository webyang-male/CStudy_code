#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//void chline(char ch, int cols, int rows);
///* �����������޷���ֵ�����������ֱ���char, int, int��
//* chline(ch,i,j)��ĿҪ��j�У�i�У������Ҫע����ʽ����˳��ͺ��塣
//* */
//int main(void) {
//	char c;
//	int i, j;
//	printf("Enter the char you want to print: ");
//	scanf("%c", &c);
//	printf("Enter the rows and cols you want to print: ");
//	/* ����j �����ӡ�У�i �����ӡ�У�scanf()������ȡ����˳��Ϊ&j,&i*/
//	scanf("%d %d", &j, &i);
//	chline(c, i, j);
//	return 0;
//}
//
//void chline(char ch, int cols, int rows){
//	for (int m = 0; m < rows; m++){
//		for (int n = 0; n < cols; n++)
//			printf("%c", ch);
//		printf("\n");
//	}
//}
///* ѭ��Ƕ��ʱ���ⲿѭ�������������ڲ�ѭ�������С�
//* �ⲿѭ����ѭ�������ж�ʹ����ʽ����rows���������ӡ���з���
//* �ڲ�ѭ�������ж�ʹ����ʽ���� cols,����ӡ�ַ����޻��С�
//* */


//void larger_of(double *x, double *y);
///*������Ҫ�޸�����������ֵ�������Ҫʹ��ָ����Ϊ�����Ĳ�����
//* �Ҳ���Ҫ����ֵ��
//* */
//int main(void) {
//	double d1, d2;
//	printf("Enter two float number:");
//	scanf("%lf %lf", &d1, &d2);
//	printf("Data you input is %g and %g.\n", d1, d2);
//	larger_of(&d1, &d2);
//	printf("After function.data is %g and %g.\n", d1, d2);
//}
//
//void larger_of(double *x, double *y){
//	if (*x > *y) *y = *x;
//	else *x = *y;
//	/* Ҳ����ʹ�ã� �� �����жϺ͸�ֵ���������£�*x > *y ? (*y = *x) : (*x = *y);
//	*/
//}

//void get_char_pos(void);
///*�������ܣ���ȡ��׼���룬�����ַ����룬��ӡ����ĸ��λ�á�*/
//int position(char ch);
///* �������ܣ����㲢�����ַ�����ĸ����λ�á�*/
//int main(void) {
//	get_char_pos();
//}
//
//void get_char_pos(void){
//	char ch;
//	printf("Enter the chars(ended by EOF ,not enter):");
//	while ((ch = getchar()) != EOF){
//		/*���ļ���βΪ������־*/
//		if ((ch = getchar()) == '\n') continue;
//		/*��������з������룬�����������δ����*/
//		if (position(ch) != -1){
//			printf("The char %c's position in alphabet is %d.\n", ch, position(ch));
//		}
//		else printf("%c is not a alphabet.\n", ch);
//	}
//}
//
//int position(char ch){
//	if (ch >= 'A' && ch <= 'Z')
//		return ch - 'A' + 1;
//	if (ch >= 'a' && ch <= 'z')
//		return ch - 'a' + 1;
//	return -1;
//}
/*�������������ݵ��ַ��ֱ��'a' 'A' �Ƚ��ж���λ�ã����ַ����� -1��*/


//double power(double n, int p);
///*����double��������n �� p ���ݡ�����ֵ����Ϊdouble��*/
//int main(void) {
//	double x, xpow;
//	int exp;
//
//	printf("Enter a number and the integer power to which the number will be raised.\n");
//	printf("Enter q to quit.\n");
//	while (scanf("%lf %d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
//		printf("Enter the next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoy this power trip -- bye!\b");
//	return 0;
//}
//
//double power(double n, int p){
//	double pow = 1;
//	int i;
//	if (n == 0 && p == 0){
//		printf("The %g to the power %c is not define, return 1!\n", n, p);
//		return 1;
//	};/*0 �� 0 ���ݵ�����ע����������*/
//	if (n == 0) return 0;/* 0 ���κδ��ݵ��� 0 */
//	if (p == 0) return 1;/* �� 0 ����κ�����0���ݵ��� 1 */
//	if (p > 0){
//		for (i = 1; i <= p; i++)
//			pow *= n;
//		return pow;
//		/* ���������� */
//	}
//	else{
//		for (i = 1; i <= -p; i++)
//			pow *= n;
//		return 1 / pow;
//		/* ����������*/
//	}
//}

//void Fibonacci(int n);
///* ����쳲��������е�ǰ n ��޷���ֵ��*/
//int main(void) {
//	int n;
//	printf("Enter the number of Fibonacci (q to quit):");
//	while (scanf("%d", &n) == 1){
//		if (n >= 2){
//			Fibonacci(n);
//			printf("Enter the number of Fibonacci (q to quit):");
//		}
//	}
//	return 0;
//}
//void Fibonacci(int n){
//	unsigned long f1, f2, temp;
//	/* ����쳲��������������ٶȣ�ʹ���޷��ų����ͣ��ܹ���ʾ���������*/
//	f1 = 1;
//	f2 = 1;
//	for (int i = 0; i < n; i++){
//		printf("%lu ", f1);
//		temp = f1 + f2;
//		f1 = f2;
//		f2 = temp;
//	}
//	printf("\n");
//}

//void copy_arr(double t[], double s[], int n);
//void copy_ptr(double *t, double *s, int n);
//void copy_ptrs(double *t, double *s_first, double *s_last);
///*������ĿҪ��ĺ������ø�ʽ��ԭ�ĺ���������
//* */
//int main(void) {
//	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//	double target1[5];
//	double target2[5];
//	double target3[5];
//	copy_arr(target1, source, 5);
//	copy_ptr(target2, source, 5);
//	copy_ptrs(target3, source, source + 5);
//	return 0;
//}
//void copy_arr(double t[], double s[], int n){
//	for (int i = 0; i < n; i++)
//		t[i] = s[i];
//	/*ʹ��������Ϊ����������ͬʱ��Ҫ������±�ֵ��ֻ��Ӧ���±����������ʡ�
//	* */
//}
//void copy_ptr(double *t, double *s, int n){
//	for (int i = 0; i < n; i++)
//		*(t + i) = *(s + i);
//	/*ʹ��ָ����Ϊ������������Ҫ����ָ��ķ��ʷ�Χ������Խ�硣��ʹ��
//	*  *��ȡֵ�������ݵĸ�ֵ����
//	* */
//}
//void copy_ptrs(double *t, double *s_first, double *s_last){
//	for (int i = 0; (s_last - s_first) > i; i++)
//		/*for(int i = 0; (s_last - s_first) > 0 ;i++, s_first++)
//		*Ҳ�����ƶ���ָ�룬����βָ�����ʱ��ֹͣѭ����ֻ�Ǹ÷�����ֵ���
//		*���в�ͬ��*/
//		*(t + i) = *(s_first + i);
//	/*ʹ��ָ����Ϊ����������ָ����ʷ�ΧҲ����ͨ���ס�β����ָ������ʾ
//	* ָ��������ʵ����ݵ�ַ��Χ��
//	* */
//}
//

//int get_max(int number[], int n);
///*sʹ�ô�ͳ���鷽ʽ���в������ݣ���ʽ����n��ʾ�������鳤�ȡ�
//* */
//
//int main(void) {
//	int source[100] = { 1, 2, 3, 4, 5 };
//	printf("The largest number in array is %d\n", get_max(source, 100));
//	return 0;
//}
//int get_max(int number[], int n){
//	int max = number[0];
//	for (int i = 0; i < n; i++)
//	if (max < number[i]) max = number[i];
//	/*ͨ��ѭ�������������ÿһ��Ԫ�أ��Ƚ�ȡ�����ֵ��
//	* */
//	return max;
//	/*�������ظ���������ֵ����*/
//}
//

//void r_sort(double number[], int n);
///*��ͳ��ʽ�������������
//* */
//int main(void) {
//	double source[12] = { 2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 };
//	for (int i = 0; i < 12; i++) printf("%g ", source[i]);
//	printf("\n");
//	r_sort(source, 12);
//	for (int i = 0; i < 12; i++) printf("%g ", source[i]);
//	return 0;
//}
//void r_sort(double number[], int n){
//	/*�����㷨ʹ�ó��õıȽ������㷨�������ж�����Ԫ�صĴ�С��ϵ��
//	* ������Ҫ���������Ԫ�ؽ�����λ�ã��ڲ�ѭ��һ���ܱ�֤һ��Ԫ��
//	* ����������λ�ã��ⲿѭ��n-1�α�֤����Ԫ�ض��ܹ���������ȷλ��
//	* */
//	double temp;
//	for (int i = 0; i < n - 1; i++){
//		for (int j = 0; j < n - 1 - i; j++){
//			/*ѭ���ж���������Ϊj < n - 1Ҳ�ɣ�ֻ�ǻ��ִ��һЩ��Ч��ѭ���ж�
//			* �������ԭ����ÿ��ѭ�����Ա�֤һ��Ԫ�ص�����ȷλ�ã���λ�ú�������
//			* ���̿��Ժ��ԣ������Ч�ʡ�
//			* */
//			if (number[j] < number[j + 1]) {
//				temp = number[j];
//				number[j] = number[j + 1];
//				number[j + 1] = temp;
//			}
//			/*����ϰ����ҪĿ�Ĳ����������㷨��������ͨ���ڴ˴���ӡ
//			* ÿ��ѭ������������������⽻������Ļ���˼�롣
//			* */
//		}
//	}
//}
//


//#define ROWS 12
//#define COLS 5
//void copy_arr(double t[], double s[], int n);
//void copy_ptr(double *t, double *s, int n);
//void copy_ptrs(double *t, double *s_first, double *s_last);
///*�����ϰ2��һά���鿽����������*/
//void copy_2d_array(double t[][ROWS], double s[][ROWS], int n);
//void copy_2d_ptr(double(*t)[ROWS], double(*s)[ROWS], int n);
///*
//*��ά����ĸ��ƺ���������ֻʹ����ָ���������Ϊ��ʽ����
//* �ס�βָ����Ϊ��������ʽ���ơ�
//*/
//int main(void) {
//	double target[COLS][ROWS], source[COLS][ROWS] = {
//		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
//		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
//		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
//		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
//		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 },
//	};
//	copy_2d_ptr(target, source, COLS);
//	for (int i = 0; i<COLS; i++) {
//		for (int j = 0; j < ROWS; j++)
//			printf("%5.2f", target[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//
//void copy_arr(double t[], double s[], int n){
//	for (int i = 0; i < n; i++)
//		t[i] = s[i];
//}
//void copy_ptr(double *t, double *s, int n){
//	for (int i = 0; i < n; i++)
//		*(t + i) = *(s + i);
//}
//void copy_ptrs(double *t, double *s_first, double *s_last){
//	for (int i = 0; (s_last - s_first) > i; i++)
//		//for(int i = 0; (s_last - s_first) > 0 ;i++, s_first++)
//		*(t + i) = *(s_first + i);
//}
///*�����ϰ2������һά���鿽������ʵ��*/
//
//void copy_2d_array(double t[][ROWS], double s[][ROWS], int n){
//	//����n��ʾcols��
//	for (int i = 0; i < n; i++)
//		copy_arr(t[i], s[i], ROWS);
//}
///*��ά������Ϊ����ʽ�����������б��ڿ���ʡ���������Ԫ��������������������Ԫ��������ʡ�ԡ�
//* ԭһά����ĸ��ƺ����ܹ����ƶ�ά�����һ�У�����ͨ��ѭ�������и��ƣ������ĵ�������Ҫע��
//* �С��е����ں����ڵ���ʹ�õı�������n��ʾ COLS
//* */
//void copy_2d_ptr(double(*t)[ROWS], double(*s)[ROWS], int n){
//	for (int i = 0; i < n; i++)
//		copy_ptr(*(t + i), *(s + i), ROWS);
//}
///*ָ���ά�����ָ����Ϊ����ʽ�����������б������ʾָ��ָ�������Ԫ������
//* ԭһά����ĸ��ƺ����ܹ����ƶ�ά�����һ�У�����ͨ��ѭ�������и��ơ�
//* �����ĵ�������Ҫע���С��е����ں����ڵ���ʹ�õı�������n��ʾ COLS
//* */

//#define ROWS 3
//#define COLS 5
//void input_array(int rows, double arr[][COLS]);
//double col_average(int cols, const double arr[]);
//double array_average(int rows, const double arr[][COLS]);
//double array_max_number(int rows, const double arr[][COLS]);
//void show_result(int rows, const double arr[][COLS]);
///*�����Ĳ�������ʹ�ô�ͳ������ʽʵ�֡���������뺯�������޸������Ԫ��ֵ����˲��ܹ�
//* ʹ��const�ؼ��ʣ���������Ӧ��ʹ��const������ʵ�ʲ�������������޸ġ�
//* �纯������ʾ������ʵ�ֹ��ֱܷ�����ĿҪ���a,b,c,d,e��
//*/
//int main(void) {
//	double array[ROWS][COLS];
//	input_array(ROWS, array);
//	show_result(ROWS, array);
//	printf("\n");
//	return 0;
//}
//void input_array(int rows, double arr[][COLS]){
//	printf("������3*5������:>\n");
//	for (int i = 0; i < rows; i++){
//		printf("Enter five double number seprate by enter:\n");
//		for (int j = 0; j < COLS; j++)
//			scanf("%lf", &arr[i][j]);
//	}
//}
//double col_average(int cols, const double arr[]){
//	double sum = 0;
//	for (int i = 0; i< cols; i++)
//		sum += arr[i];
//	return sum / cols;
//}
//
//double array_average(int rows, const double arr[][COLS]){
//	double sum = 0;
//	for (int i = 0; i< rows; i++)
//		sum += col_average(COLS, arr[i]);
//	return sum / rows;
//}
//
//double array_max_number(int rows, const double arr[][COLS]){
//	double max = arr[0][0];
//	for (int i = 0; i < rows; i++)
//	for (int j = 0; j < COLS; j++)
//	if (max < arr[i][j]) max = arr[i][j];
//	return max;
//}
//void show_result(int rows, const double arr[][COLS]){
//	printf("Now, Let\'s check the array!\n");
//	printf("The array you input is:\n");
//	for (int i = 0; i < rows; i++){
//		for (int j = 0; j< COLS; j++)
//			printf("%5g", arr[i][j]);
//		printf("\n");
//	}
//	printf("The Average of every column is:\n");
//	for (int i = 0; i < rows; i++)
//		printf("The %d column's average is %g .\n", i, col_average(COLS, arr[i]));
//
//	printf("The array's data average is %g \n", array_average(ROWS, arr));
//	printf("The max datum in the array is %g", array_max_number(ROWS, arr));
//}
