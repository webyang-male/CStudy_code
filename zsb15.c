#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main(void){
//	char name[40], surname[40];
//	int wname, wsurname;
//	printf("Please input your first name:");
//	scanf("%s", name);
//	printf("Please input your last name:");
//	scanf("%s", surname);
//	/* 通过scanf()函数分别读取用户姓名。*/
//	wname = printf("%s", name);
//	printf(" ");
//	wsurname = printf("%s", surname);
//	/* 分别打印用户姓名，通过返回值记录其字符数量。*/
//	printf("\n%*d %*d\n", wname, wname, wsurname, wsurname);
//	/* 打印其字符数量，由于数量不确定，因此使用*号修饰符和参数的形式。
//	* 如果使用strlen()函数，则可以不用定义wname,wsurname变量，
//	* 直接使用以下代码：
//	* printf("\n%*d %*d",strlen(name),strlen(name),strlen(surname),strlen(surname));
//	* */
//	return 0;
//}

//int main(int argc, char *argv[]) {
//	int counter, i = 0;
//	printf("PRINT COUNTINUE 10 NUMBERS!\n");
//	printf("PLEASE INPUT THE START NUMBER :");
//	scanf("%d", &counter);
//	/* 读取用户输入，保存至counter */
//	while (i++ < 11){
//		printf(" %d \n", counter++);
//	}
//	/* 循环十次，打印范围为输入数据开始的后十个数字 */
//	printf("PROGRAM EXIT!\n");
//	return 0;
//}

//#define WEEK_PER_DAY 7 // 每周7天
//int main(int argc, char *argv[]) {
//	int days, weeks, input;
//
//	printf("CONVERT DAYS TO WEEKS!\n");
//	printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");
//	scanf("%d", &input);
//	/* 读取用户输入，保存至input 变量 */
//	while (input > 0){
//		weeks = input / WEEK_PER_DAY;
//		/* 计算周数 */
//		days = input%WEEK_PER_DAY;
//		/* 计算不足一周的天数 */
//		printf("%d days are %d weeks, %d days\n", input, weeks, days);
//		/* 打印输出结果 */
//		printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");
//		scanf("%d", &input);
//		/* 继续下一次输入 */
//	}
//	printf("PROGRAM EXIT!\n");
//	return 0;
//}

//int main(int argc, char *argv[]) {
//    int first, second;
//    printf("This program computes moduli.\n");
//    printf("Enter an integer to server as the second operand:");
//    scanf("%d",&second);
//    /* 用户输入second数据保持不变 */
//    printf("Now enter the first operand:");
//    scanf("%d",&first);
//    /* 分别读取用户输入数据 */
//    while(first > 0){
//        printf("%d %% %d is %d\n",first,second,(first%second));
//        printf("Enter next number for first operand( <= 0 to quit):");
//        scanf("%d",&first);
//    }
//    /* 循环读取用户输入、计算并打印结果。 */
//    printf("Done!\n");
//    return 0;
//}


//int Temperatures(double fahrenheit);
//int main(int argc, char *argv[]) {
//	double input;
//	printf("This program convert fahrenheit to celsius and kelvin.\n");
//	printf("Enter a fahrenheit to start : ");
//	while (scanf("%lf", &input) == 1){
//		Temperatures(input);
//		printf("Enter next fahrenheit! ( q to quit): ");
//	}
//	printf("Done!\n");
//	return 0;
//}
//int Temperatures(double fahrenheit){
//	const double F_TO_C = 32.0;
//	const double C_TO_K = 273.16;
//	double celsius, kelvin;
//	celsius = 5.0 / 9.0*(fahrenheit - F_TO_C);
//	kelvin = celsius + C_TO_K;
//	printf("%.2f. fahrenheit, equal %.2f celsius, and %.2f kelvin\n", fahrenheit, celsius, kelvin);
//	return 0;
//}


//int main(void){
//	char alphabet[26];
//	int i;
//	char c = 'a';
//	/* 定义变量i 作为数组的下标，c 作为从字符 a 开始递增
//	* 获得26个字母。*/
//	for (i = 0; i < 26; i++, c++)
//		alphabet[i] = c;
//	/* for 循环 的循环更新部分，更新了下标和 字母表*/
//	for (i = 0; i < 26; i++)
//		printf("%c ", alphabet[i]);
//	return 0;
//}

//int main(void){
//	int i, j, num;
//	char c;
//	printf("Enter the core char you want to print(A...Z):");
//	scanf("%c", &c);
//	char ch = 'A';
//	num = c - 'A' + 1;
//	/* 输入字符的ASCII码减去 'A' 加 1的到十进制结果 num
//	* num即是需要打印的从 A 开始的字符数，也是打印的总行数 */
//	for (i = 1; i <= num; i++){
//		/* 外部循环控制打印行数， num 为输入字符和 A 的差加 1* */
//		for (j = 0; j < num - i; j++)
//			printf(" ");
//		/* 打印空格，空格数为总字符数减去当前行应打印的字符数。
//		* 即，本行应打印空格数 + 应打印字符数 = 总字符数（总行数）*/
//		for (ch = 'A'; j < num; j++)
//			printf("%c", ch++);
//		/* 打印正序字符数，需要ch做递增操作，起始值 j 在空格处已经通过循环
//		* 做了初始化，因此，只打印剩余字符数。 */
//		for (j = 1, ch -= 2; j < i; j++, ch--)
//			printf("%c", ch);
//		/* 打印逆序字符，字符做递减操作。*/
//		printf("\n");
//	}
//	return 0;
//}

//int main(void){
//	char word[30];
//	printf("Please enter the words: ");
//	scanf("%s", word);
//	/* scanf()函数读取用户输入，保存至word字符数组。*/
//	printf("The word you enter is : %s\n", word);
//	printf("The reverse word you enter is : ");
//	for (int i = strlen(word) - 1; i >= 0; i--){
//		printf("%c", word[i]);
//	}
//	printf("\n");
//	/* 逆序打印，下标值通过strlen()函数获得。strlen()返回的长度值
//	* 不包含'\0',但是数组下标从0～(长度-1)*/
//	return 0;
//}


//int main(){
//	int lower, upper;
//	printf("Enter lower and upper integer limits: ");
//	scanf("%d %d", &lower, &upper);
//	/* 使用scanf()函数读取 上下限数值。*/
//	while (upper > lower){
//		/* 判断用户输入上下限数值*/
//		int sum = 0;
//		for (int i = lower; i <= upper; i++){
//			sum +=   i*i;
//			/* for循环计算平方和*/
//		}
//		printf("The sum of the squares form %d to %d is %d\n", lower, upper, sum);
//		printf("Enter lower and upper integer limits: ");
//		scanf("%d %d", &lower, &upper);
//		/* 用户再次输入，上下限数值*/
//	}
//	printf("Done!");
//	return 0;
//}