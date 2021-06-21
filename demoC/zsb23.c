#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//void function_a(char c);
//void function_b(char c);
//void function_c(char c);
//int main(int argc, char * argv[]){
//	void(*pf[3])(char);
//	pf[0] = function_a;
//	pf[1] = function_b;
//	pf[2] = function_c;
//	char ch;
//	printf("a) Function A.   b) Function B.  c)Function C. q)Quit\n");
//	printf("Enter a, b, c or q:");
//	scanf("%c", &ch);
//	while (ch != 'q')
//	{
//		while (getchar() != '\n') continue;
//		switch (ch)
//		{
//		case 'a':
//			pf[0](ch);
//			break;
//		case 'b':
//			pf[1](ch);
//			break;
//		case 'c':
//			pf[2](ch);
//			break;
//		default:
//			break;
//		}
//		printf("(a) Function A.   (b) Function B.  (c)Function C. (q)Quit\n");
//		printf("Enter a, b, c or q:");
//		scanf("%c", &ch);
//
//	}
//	printf("Done!\n");
//	return 0;
//}
//
//void function_a(char c){
//	printf("This is function_a  you select %c\n", c);
//}
//
//void function_b(char c){
//	printf("This is function_b, you select %c\n", c);
//}
//void function_c(char c){
//	printf("This is function_c  you select %c\n", c);
//}

//#define LENGTH 10//原数组长度
//void transform(double src[], double tar[], int n, double (*func)(double));
//
//int main(int argc, char * argv[])
//{
//    double source[LENGTH], target[LENGTH];
//    for (int i = 0; i < LENGTH; i++) {
//        source[i] = i;
//    }
//    printf("The source data is:\n");
//    for (int i = 0; i < LENGTH; i++) {
//        printf("%5g",source[i]);
//    }
//    printf("\n");
//
//    transform(source, target, LENGTH, sin);
//
//    printf("The target sin data is:\n");
//    for (int i = 0; i < LENGTH; i++) {
//        printf("%g  ",target[i]);
//    }
//    printf("\n");
//
//    transform(source, target, LENGTH, cos);
//
//    printf("The target cos data is:\n");
//    for (int i = 0; i < LENGTH; i++) {
//        printf("%g  ",target[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//void transform(double src[], double tar[], int n, double (*func)(double)){
//    for (int i = 0; i < n; ++i) {
//        tar[i] = func(src[i]);
//    }
//}
//


//#define SIZE 32
//int bstoi(char *st);
//int main(void)
//{
//	char input[SIZE];
//	printf("Enter a binary string:");
//	scanf("%s", input);
//	printf("%d\n", bstoi(input));
//	return 0;
//}
//int bstoi(char *st){
//	int sum = 0;
//	while (*st != '\0'){
//		sum *= 2;
//		sum += *st++ - '0';
//	}
//	/* 通过过循环每一位上的值都持续乘以2，最终实现位值上
//	* 数据的持续增长，该方法是从高位开始累积 */
//	return sum;
//}

//
//#include <limits.h>
//
//int retate_l(int n, int length);
//int main(int argc, char *argv[])
//{
//	int i, length;
//	printf("Enter the a number and a move bit:");
//	scanf("%d %d", &i, &length);
//	printf("the %d move  %d bit, result is %d\n", i, length, retate_l(i, length));
//	return 0;
//}
//int retate_l(int n, int length){
//	const static int size = CHAR_BIT * sizeof(int);
//	if (length >size || length < 0){
//		printf("Error length.\n");
//		return 0;
//		/* 输入参数判断。*/
//	}
//	for (int i = 0; i < length; i++) {
//		if (n&(1 << (size - 1))){
//			/* 先读取将要被移出的数据，即把最高位设置为1，并与n进行
//			* 与操作，如果结果为0，则直接移位，如果为 1 则移位，左侧置 1*/
//			n <<= 1;
//			n |= 1;
//		}
//		else{
//			n <<= 1;
//		}
//	}
//	return n;
//}


//#include <limits.h>
//
//struct font{
//	unsigned int id : 8;
//	unsigned int size : 7;
//	unsigned int align : 2;
//	unsigned int bold : 1;
//	unsigned int italic : 1;
//	unsigned int underline : 1;
//}font_mode = { 1, 12, 0, 0, 0, 0 };
///* 初始化字体结构的数据 */
//const char align[][8] = { "left", "center", "right" };
//const char on_off[][4] = { "off", "on" };
///* 设定字段与字符串的对应关系，菜单显示与输出用 */
//
//void show_menu(void);
//void change_font(void);
//void change_size(void);
//void change_align(void);
//void change_others(char ch);
//
//int main(int argc, char *argv[])
//{
//	char selected;
//	show_menu();
//	scanf("%c", &selected);
//	while (selected != 'q')
//	{
//		while (getchar() != '\n') continue;
//		switch (selected)
//		{
//		case 'f':
//			change_font();
//			break;
//		case 's':
//			change_size();
//			break;
//		case 'a':
//			change_align();
//			break;
//		default:
//			change_others(selected);
//			break;
//		}
//		show_menu();
//		scanf("%c", &selected);
//	}
//
//}
//void show_menu(void)
//{
//	printf("ID      SIZE    ALIGN   B       I       U\n");
//	printf("%-8d%-8d%-8s%-8s%-8s%-8s\n", font_mode.id, font_mode.size, align[font_mode.align], on_off[font_mode.bold], on_off[font_mode.italic], on_off[font_mode.underline]);
//	printf("f)change font    s)change size    a)change alignment\n");
//	printf("b)toggle bold    i)toggle italic  u)toggle underline\n");
//	printf("q)quit\n");
//}
//void change_font(void)
//{
//	unsigned int n;
//	printf("Enter font id (0-255):");
//	scanf("%u", &n);
//	while (getchar() != '\n') continue;
//	font_mode.id = n;
//	/* 通过结构变量直接赋值*/
//}
//void change_size(void)
//{
//	unsigned int n;
//	printf("Enter font size (0-127):");
//	scanf("%u", &n);
//	while (getchar() != '\n') continue;
//	font_mode.size = n;
//}
//void change_align(void)
//{
//	char ch;
//	printf("Select alignment:\nl)left    c)center    r)right\n");
//	scanf("%c", &ch);
//	while (getchar() != '\n') continue;
//	if (ch == 'l')font_mode.align = 0;
//	if (ch == 'c')font_mode.align = 1;
//	if (ch == 'r')font_mode.align = 2;
//}
//void change_others(char ch)
//{
//	if (ch == 'b')
//		font_mode.bold = !font_mode.bold;
//	if (ch == 'i')
//		font_mode.italic = !font_mode.italic;
//	if (ch == 'u')
//		font_mode.underline = !font_mode.underline;
//	/* 一位数据可以直接通过取反实现设置 */
//}


//#include <limits.h>
//
//#define ID_MASK           0XFF
//#define SIZE_MASK         0X7F00
//#define ALIGN_MASK        0X18000
//#define BOLD_MASK         0X20000
//#define ITALIC_MASK       0X40000
//#define UNDER_MASK        0X80000
//
//unsigned int font_mode = 0;
//
//const char align_mode[][8] = { "left", "center", "right" };
//const char on_off[][4] = { "off", "on" };
//
//void show_menu(void);
//void change_font(void);
//void change_size(void);
//void change_align(void);
//void change_others(char ch);
//
//int main(void)
//{
//	char selected;
//	show_menu();
//	scanf("%c", &selected);
//	while (selected != 'q')
//	{
//		while (getchar() != '\n') continue;
//		switch (selected)
//		{
//		case 'f':
//			change_font();
//			break;
//		case 's':
//			change_size();
//			break;
//		case 'a':
//			change_align();
//			break;
//		default:
//			change_others(selected);
//			break;
//		}
//		show_menu();
//		scanf("%c", &selected);
//	}
//
//}
//void show_menu(void){
//	int id = font_mode & ID_MASK;
//	int size = (font_mode & SIZE_MASK) >> 8;
//	int align = (font_mode & ALIGN_MASK) >> 15;
//	int bold = (font_mode & BOLD_MASK) >> 17;
//	int italic = (font_mode & ITALIC_MASK) >> 18;
//	int underline = (font_mode & UNDER_MASK) >> 19;
//	/* 通过移位，读取字体位信息*/
//
//	printf("ID      SIZE    ALIGN   B       I       U\n");
//	printf("%-8d%-8d%-8s%-8s%-8s%-8s\n", id, size, align_mode[align], on_off[bold], on_off[italic], on_off[underline]);
//	printf("f)change font    s)change size    a)change alignment\n");
//	printf("b)toggle bold    i)toggle italic  u)toggle underline\n");
//	printf("q)quit\n");
//	/* 将读取的为信息转换成为菜单输出。*/
//}
//void change_font(void){
//	unsigned int n;
//	printf("Enter font id (0-255):");
//	scanf("%u", &n);
//	while (getchar() != '\n') continue;
//	font_mode &= ~ID_MASK;
//	font_mode |= n;
//}
//void change_size(void){
//	unsigned int n;
//	printf("Enter font size (0-127):");
//	scanf("%u", &n);
//	while (getchar() != '\n') continue;
//	font_mode &= ~SIZE_MASK;
//	font_mode |= n << 8;
//}
//void change_align(void){
//	char ch;
//	printf("Select alignment:\nl)left    c)center    r)right\n");
//	scanf("%c", &ch);
//	while (getchar() != '\n') continue;
//	font_mode &= (~ALIGN_MASK);
//	if (ch == 'l'){
//		font_mode |= (0 << 15);
//	}
//	if (ch == 'c'){
//		font_mode |= (1 << 15);
//	}
//	if (ch == 'r'){
//		font_mode |= (2 << 15);
//	}
//}
//void change_others(char ch){
//	int bold = (font_mode & BOLD_MASK) >> 17;
//	int italic = (font_mode & ITALIC_MASK) >> 18;
//	int underline = (font_mode & UNDER_MASK) >> 19;
//	if (ch == 'b'){
//		font_mode &= (~BOLD_MASK);
//		font_mode |= ~(bold << 17);
//	}
//	if (ch == 'i'){
//		font_mode &= (~ITALIC_MASK);
//		font_mode |= ~(italic << 18);
//	}
//	if (ch == 'u'){
//		font_mode &= (~UNDER_MASK);
//		font_mode |= ~(underline << 19);
//	}
//}
