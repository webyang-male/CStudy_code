#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//void chline(char ch, int cols, int rows);
///* 函数声明，无返回值，三个参数分别是char, int, int。
//* chline(ch,i,j)题目要求j行，i列，因此需要注意形式参数顺序和含义。
//* */
//int main(void) {
//	char c;
//	int i, j;
//	printf("Enter the char you want to print: ");
//	scanf("%c", &c);
//	printf("Enter the rows and cols you want to print: ");
//	/* 变量j 负责打印行，i 负责打印列，scanf()函数读取输入顺序为&j,&i*/
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
///* 循环嵌套时，外部循环控制行数，内部循环控制列。
//* 外部循环的循环控制判断使用形式参数rows，并负责打印换行符。
//* 内部循环控制判断使用形式参数 cols,并打印字符，无换行。
//* */


//void larger_of(double *x, double *y);
///*函数需要修改主调函数的值，因此需要使用指针作为函数的参数。
//* 且不需要返回值。
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
//	/* 也可以使用？ ： 进行判断和赋值。代码如下：*x > *y ? (*y = *x) : (*x = *y);
//	*/
//}

//void get_char_pos(void);
///*函数功能：读取标准输入，对于字符输入，打印其字母表位置。*/
//int position(char ch);
///* 函数功能：计算并返回字符在字母表中位置。*/
//int main(void) {
//	get_char_pos();
//}
//
//void get_char_pos(void){
//	char ch;
//	printf("Enter the chars(ended by EOF ,not enter):");
//	while ((ch = getchar()) != EOF){
//		/*以文件结尾为结束标志*/
//		if ((ch = getchar()) == '\n') continue;
//		/*简单清除换行符的输入，其他特殊符号未处理*/
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
/*函数将参数传递的字符分别和'a' 'A' 比较判断其位置，非字符返回 -1。*/


//double power(double n, int p);
///*计算double类型数据n 的 p 次幂。返回值类型为double。*/
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
//	};/*0 的 0 次幂单独标注，函数返回*/
//	if (n == 0) return 0;/* 0 的任何次幂等于 0 */
//	if (p == 0) return 1;/* 除 0 外的任何数的0次幂等于 1 */
//	if (p > 0){
//		for (i = 1; i <= p; i++)
//			pow *= n;
//		return pow;
//		/* 正整数次幂 */
//	}
//	else{
//		for (i = 1; i <= -p; i++)
//			pow *= n;
//		return 1 / pow;
//		/* 负整数次幂*/
//	}
//}

//void Fibonacci(int n);
///* 计算斐波那契数列的前 n 项。无返回值。*/
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
//	/* 考虑斐波那契数列增长速度，使用无符号长整型，能够显示更多数据项。*/
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
///*依据题目要求的函数调用格式还原的函数声明。
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
//	/*使用数组作为函数参数，同时需要数组的下标值，只需应用下标进行数组访问。
//	* */
//}
//void copy_ptr(double *t, double *s, int n){
//	for (int i = 0; i < n; i++)
//		*(t + i) = *(s + i);
//	/*使用指针作为函数参数，需要表明指针的访问范围，不能越界。并使用
//	*  *号取值进行数据的赋值操作
//	* */
//}
//void copy_ptrs(double *t, double *s_first, double *s_last){
//	for (int i = 0; (s_last - s_first) > i; i++)
//		/*for(int i = 0; (s_last - s_first) > 0 ;i++, s_first++)
//		*也可以移动首指针，当首尾指针相等时即停止循环，只是该方法赋值语句
//		*略有不同。*/
//		*(t + i) = *(s_first + i);
//	/*使用指针作为函数参数，指针访问范围也可以通过首、尾两个指针来表示
//	* 指针允许访问的数据地址范围。
//	* */
//}
//

//int get_max(int number[], int n);
///*s使用传统数组方式进行参数传递，形式参数n表示整型数组长度。
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
//	/*通过循环语句遍历数组的每一个元素，比较取得最大值。
//	* */
//	return max;
//	/*函数返回该数组的最大值数据*/
//}
//

//void r_sort(double number[], int n);
///*传统方式传递数组参数。
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
//	/*排序算法使用常用的比较排序算法，即，判断相邻元素的大小关系，
//	* 并对需要排序的两个元素交换其位置，内部循环一遍能保证一个元素
//	* 调整到合适位置，外部循环n-1次保证所有元素都能够交换到正确位置
//	* */
//	double temp;
//	for (int i = 0; i < n - 1; i++){
//		for (int j = 0; j < n - 1 - i; j++){
//			/*循环判断条件设置为j < n - 1也可，只是会多执行一些无效的循环判断
//			* 具体产生原因是每次循环可以保证一个元素到达正确位置，该位置后续排序
//			* 过程可以忽略，以提高效率。
//			* */
//			if (number[j] < number[j + 1]) {
//				temp = number[j];
//				number[j] = number[j + 1];
//				number[j + 1] = temp;
//			}
//			/*由于习题主要目的并非是排序算法，但可以通过在此处打印
//			* 每次循环的排序结果，帮助理解交换排序的基本思想。
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
///*编程练习2的一维数组拷贝函数声明*/
//void copy_2d_array(double t[][ROWS], double s[][ROWS], int n);
//void copy_2d_ptr(double(*t)[ROWS], double(*s)[ROWS], int n);
///*
//*二维数组的复制函数声明，只使用了指针和数组作为形式参数
//* 首、尾指针作为参数的形式类似。
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
///*编程练习2的三个一维数组拷贝函数实现*/
//
//void copy_2d_array(double t[][ROWS], double s[][ROWS], int n){
//	//参数n表示cols，
//	for (int i = 0; i < n; i++)
//		copy_arr(t[i], s[i], ROWS);
//}
///*二维数组作为型形式参数，参数列表内可以省略主数组的元素数，但是其他子数组元素数不能省略。
//* 原一维数组的复制函数能够复制二维数组的一行，所以通过循环，逐行复制，参数的调用中需要注意
//* 行、列的数在函数内的所使用的变量名，n表示 COLS
//* */
//void copy_2d_ptr(double(*t)[ROWS], double(*s)[ROWS], int n){
//	for (int i = 0; i < n; i++)
//		copy_ptr(*(t + i), *(s + i), ROWS);
//}
///*指向二维数组的指针作为型形式参数，参数列表内需标示指针指向数组的元素数。
//* 原一维数组的复制函数能够复制二维数组的一行，所以通过循环，逐行复制。
//* 参数的调用中需要注意行、列的数在函数内的所使用的变量名，n表示 COLS
//* */

//#define ROWS 3
//#define COLS 5
//void input_array(int rows, double arr[][COLS]);
//double col_average(int cols, const double arr[]);
//double array_average(int rows, const double arr[][COLS]);
//double array_max_number(int rows, const double arr[][COLS]);
//void show_result(int rows, const double arr[][COLS]);
///*函数的参数定义使用传统数组形式实现。数组的输入函数将会修改数组的元素值，因此不能够
//* 使用const关键词，其他函数应当使用const来保护实际参数不被误操作修改。
//* 如函数名所示，函数实现功能分别是题目要求的a,b,c,d,e。
//*/
//int main(void) {
//	double array[ROWS][COLS];
//	input_array(ROWS, array);
//	show_result(ROWS, array);
//	printf("\n");
//	return 0;
//}
//void input_array(int rows, double arr[][COLS]){
//	printf("请输入3*5的数据:>\n");
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
