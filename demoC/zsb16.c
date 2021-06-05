#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main(void){
//	int length;
//	double sum = 0.0;
//	printf("Enter the limit length: ");
//	scanf("%d", &length);
//	while (length>0){
//		sum = 0.0;
//		for (int i = 1; i <= length; i++){
//			sum = sum + 1.0 / i;
//		}
//		/* 计算 1 + 1/2 + 1/3 …… */
//		printf("The sum for 1.0 +...+ 1.0/%d.0 is %lf\n", length, sum);
//		sum = 0.0;
//		for (int i = 1; i <= length; i++){
//			if (i % 2 == 0) sum = sum - 1.0 / i;
//			else sum = sum + 1.0 / i;
//		}
//		/* 计算 1 - 1/2 + 1/3 - 1/4 ……*/
//		printf("The sum for 1.0 -...+ 1.0/%d.0 is %lf\n", length, sum);
//
//		sum = 0.0;
//		for (int i = 1; i <= length; i++){
//			if (i % 2 != 0) sum = sum + 2 * 1.0 / i;
//		}/* 两个数列和，只计算奇数项，偶数项相抵消。*/
//		printf("The sum for 1.0 + 1.0+ 2.0/3.0+...+ 2.0/%d.0 is %lf\n", length, sum);
//
//		printf("Enter the limit length: ");
//		scanf("%d", &length);
//	}
//	printf("\nDone!\n");
//	return 0;
//}

//int main(void){
//	int data[8];
//	data[0] = 2;
//	/* 初始化第一个元素为2的一次幂 */
//	for (int i = 1; i < 8; i++){
//		data[i] = data[i - 1] * 2;
//	}
//	/* 2 的 n 次幂等于 2乘以 2的n-1次幂。*/
//	int i = 0;
//	do{
//		printf("%d  ", data[i++]);
//	} while (i<8);
//
//	printf("\nDone!\n");
//	return 0;
//}


//int main(){
//	double first[8], second[8];
//	printf("Enter 8 data to the FIRST array: ");
//	for (int i = 0; i < 8; i++){
//		scanf("%lf", &first[i]);
//	}
//	/* 读取用户输入的 8 个数据，并赋值给第一个数组。*/
//	for (int i = 0; i < 8; i++){
//		double sum = 0;
//		for (int j = 0; j <= i; j++){
//			sum = sum + first[j];
//		}
//		second[i] = sum;
//	}
//	/* 使用嵌套循环来计算第一个数组的前 N 项和。
//	* 也可以使用单循环，代码如下：
//	*     second[0] = first[0];
//	*  for(int i = 1;i < 8;i++){
//	*    second[i] =  second[i-1] + first[i];
//	*   }
//	* */
//	printf("All the data of  two array:\n");
//	printf("First  Array: ");
//	for (int i = 0; i < 8; i++){
//		printf("%12lf. ", first[i]);
//	}
//	printf("\nSecond Array: ");
//	for (int i = 0; i < 8; i++){
//		printf("%12lf. ", second[i]);
//	}
//
//	printf("\nDone!\n");
//	return 0;
//}
//


//int main(void){
//	float daphne, deirdre;
//	daphne = deirdre = 100.0;
//	int year = 0;
//	do{
//		daphne = daphne + 100 * 0.1;
//		deirdre = deirdre + deirdre*0.05;
//		year++;
//		/* 计算两人的每年利息及原始投资的总和*/
//	} while ((deirdre - daphne) < 0);
//	/* daphne高于deirdre 退出循环*/
//	printf("%d years later.\nDaphne = %f.\nDeirdre= %f \n", year, daphne, deirdre);
//	printf("\nDone!\n");
//	return 0;
//}


//int main(void){
//	float chuckie = 100;
//	int year = 0;
//	do{
//		chuckie = chuckie + chuckie*0.08;
//		chuckie -= 10;
//		year++;
//		printf("%f\n", chuckie);
//	} while (chuckie >=10);
//	/* 账户余额小于 9 万 则下一年将会被全部支取*/
//	printf("%d years later. Chuckie's account %f \n", year, chuckie);
//	printf("%d years later. Chuckie's account is ZERO \n", ++year);
//	printf("\nDone!\n");
//	return 0;
//}


//int main(void){
//	int rabnud = 5;
//	int weeks = 1;
//	while (rabnud < 150){
//		printf("At %d weeks, Rabnud has %4d friends \n", weeks, rabnud);
//		rabnud = 2 * (rabnud - weeks++);
//		/* 计算每周rabnud博士的朋友数*/
//	};
//	printf("\nDone!\n");
//	return 0;
//}


//int main(void)
//{
//	char ch;
//	int counter = 0;
//	printf("Please input chars (# for exit):");
//	while ((ch = getchar()) != '#')
//	{
//		if (counter++ % 8 == 0)
//			printf("\n");
//		/* 使用计数器，每八个字符打印一个换行符。注意：
//		* 本行代码在counter为 0 时会首先打印一个换行符。
//		* */
//		if (ch == '\n')
//			printf("'\\n'-%03d. ", ch);
//		/* 标准输入的换行符需要转换显示方式，否则会可能会在
//		* 不足八个字符时就产生产生换行。
//		* */
//		else if (ch == '\t')
//			printf("'\\t'-%03d. ", ch);
//		/* 标准输入的制表符需要转换显示方式 * */
//		else printf("'%c'-%03d. ", ch, ch);
//		/* 其他字符通过打印原字符和十进制数 */
//	}
//	printf("Done\n");
//	return 0;
//}


//int main(void)
//{
//	int odd_sum = 0;
//	int even_sum = 0;
//	int odd_count = 0;
//	int even_count = 0;
//	int input = 0;
//	/* 定义变量分别对奇数和偶数进行计数和求和。*/
//	printf("Please input numbers(0 for exit):");
//	while (scanf("%d", &input))
//	{
//		if (input == 0) break;
//		if (input % 2 == 0){
//			even_sum = even_sum + input;
//			/* 使用+= 运算符： even_sum += input; */
//			even_count++;
//		}
//		else{
//			odd_sum = odd_sum + input;
//			/* 使用+= 运算符：odd_sum += input; */
//			odd_count++;
//		}
//	}
//	printf("Have %d even number, average is %g\n", even_count, 1.0*even_sum / even_count);
//	/* 平均数应当以浮点型数据显示，因此先乘以1.0，1.0*even_sum 将结果隐性转换为浮点型数据 */
//	printf("Have %d odd number, average is %g\n", odd_count, 1.0*odd_sum / odd_count);
//	printf("Done\n");
//	return 0;
//}


//int main(void)
//{
//	int counter = 0;
//	int halfpair = 0;
//	/* 部分匹配标记 */
//	char ch;
//	printf("Please input chars (# for exit):");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch){
//		case 'e':
//			halfpair = 1;
//			break;
//			/* 字符 e 匹配标记*/
//		case 'i':
//			if (halfpair == 1){
//				counter++;
//				halfpair = 0;
//			}
//			/* 匹配标记为 1 表明前一个字符e已经匹配 ，此时 i匹配则计数，并
//			* 清除部分匹配标记。*/
//			break;
//		default:
//			halfpair = 0;
//			/* 无论字符e 是否匹配，字符非 e，i 均可以清空部分匹配标记*/
//		}
//	}
//	printf("\nTotally exist %d \'ei\' in all char!\n", counter);
//	printf("Done\n");
//	return 0;
//}

/*
第七章：编程练习 8
*/


//#define EXTRA_HOUR 1.5
//#define BASE_TAX 0.15
//#define EXTRA_TAX 0.2
//#define EXCEED_TAX 0.25
//
//void show_menu(void);/*显示基本薪资的菜单函数*/
//float get_hours(void);
///* 读取用户输入工作时长的函数*/
//void calc_salary(float base_salary, float hours);
///* 依据基本薪资和工作时长计算工资、税、税后工资的函数*/
//int main(void)
//{
//	float hours = 0;
//	char selected;
//	do{
//		show_menu();
//		scanf("%c", &selected);
//		switch (selected){
//		case '1':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(8.75, hours);
//			break;
//			/* 选定基本薪资，读取用户输入的工作时长，计算薪资，税及税后工资*/
//		case '2':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(9.33, hours);
//			break;
//		case '3':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(10.00, hours);
//			break;
//		case '4':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(11.20, hours);
//			break;
//		case '5':
//			break;
//		default:
//			printf("Error selected! please retry!\n");
//			getchar();
//			break;
//		}
//	} while (selected != '5');
//	printf("Done\n");
//	return 0;
//}
//void show_menu(void){
//	/* 显示提示菜单 */
//	char s1[] = "1) $8.75/hr";
//	char s2[] = "2) $9.33/hr";
//	char s3[] = "3) $10.00/hr";
//	char s4[] = "4) $11.20/hr";
//	char s5[] = "5) quit";
//
//	printf("**********************************************************************\n");
//	printf("Enter the number corresponding to the desired pay rate or action\n");
//	printf("%-40s", s1);
//	printf("%-40s\n", s2);
//	printf("%-40s", s3);
//	printf("%-40s\n", s4);
//	printf("%-40s\n", s5);
//	printf("**********************************************************************\n");
//}
//
//void calc_salary(float base_salary, float hours){
//	float salary, tax, taxed_salary;
//
//	if (hours <= 30){
//		/* 工作时间小于30的情况*/
//		salary = hours*base_salary;
//		tax = salary*BASE_TAX;
//		taxed_salary = salary - tax;
//	}
//	else if (hours <= 40){
//		/* 工作时间大于40的情况*/
//		salary = hours*base_salary;
//		tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX;
//		taxed_salary = salary - tax;
//	}
//	else{
//		/* 其他工作时长条件下税收计算 */
//		salary = (40 + (hours - 40)*EXTRA_HOUR)*base_salary;
//		if (salary <= 450) tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX;
//		else tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX + (salary - 450)*EXCEED_TAX;
//		taxed_salary = salary - tax;
//	}
//	printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
//	printf("\ncontinue....\n");
//}


//int main(void) {
//	int counter = 0;
//	char ch;
//	printf("请输入一串字符:>\n");
//	while ((ch = getchar()) != EOF){
//		if (counter++ == 10){
//			printf("\n");
//			counter = 1;
//		}/*输入计数器，并判断打印换行符号 */
//		if (ch >= '\040'){
//			printf(" \'%c\'--%3d ", ch, ch);
//			/*大于空格字符的可显示为字符的处理和判断*/
//		}
//		else if (ch == '\n'){
//			printf(" \\n--\\n\n ");
//			counter = 0;
//			/*换行符号的处理，需换行，计数器重置*/
//		}
//		else if (ch == '\t'){
//			printf(" \\t--\\t ");
//			/*制表符的处理*/
//		}
//		else{
//			printf(" \'%c\'--^%c ", ch, (ch + 64));
//			/*其他非显示字符的处理*/
//		}
//	}
//	return 0;
//}

//#include <ctype.h>
//int main(void) {
//	int lowercase = 0;
//	int uppercase = 0;
//	char ch;
//	printf("请输入一串大小写混合字母:>");
//	while ((ch = getchar()) != EOF){
//		/*使用ASCII码表中连续字符的特性进行判断*/
//		/*if (ch >= 'A' && ch <= 'Z')
//			uppercase++;
//		if (ch >= 'a' && ch <= 'z')
//			lowercase++;*/
//		if (islower(ch)) lowercase++;
//		if (isupper(ch)) uppercase++;
//		
//		/*
//		* if(islower(ch)) lowercase++;
//		* if(isupper(ch)) uppercase++;
//		* 使用ctype.h苦中的字符判断函数进行判断。需添加头文件
//		*/
//	}
//	printf("There are %d uppercase, and %d lowercase in that file!\n", uppercase, lowercase);
//	return 0;
//}

//#include <ctype.h>
//
//int main(void) {
//	int words = 0;
//	int letter = 0;
//	char ch;
//	printf("请输入一串单词:>");
//	while ((ch = getchar()) != EOF){
//		if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a'&&ch <= 'z'))
//			letter++;
//		/* 除可以利用字母在ASCII码表中连续的方法判断字母数量外，也可以使用
//		* isalpha()函数进行判断，ch是字母返回非0。
//		* if(isalpha(ch) != 0) letter++;
//		* */
//		if (ch == ' ' || ch == ',' || ch == '.' || ch == '\n')
//			words++;
//		/* 可以利用字符是标点符号进行判断，上面判断不够完整，还有例如括号（）问号
//		* ？感叹号等等未列入，也可以利用ASCII中符号连续区间进行判断。使用ispuncht()
//		* 函数更加简便。但是，该函数无法判断空格，因此需要取"或"。
//		* if(ispunct(ch) != 0 || ch == ' ') words++;
//		* */
//	}
//	printf("There are %d words, and %d character， %.2f C/W!\n", words, letter, 1.0*letter / words);
//	return 0;
//}
//
