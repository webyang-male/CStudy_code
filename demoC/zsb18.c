#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//#define SIZE 40
//char * read_char(char *st, int n);
//
//int main(int argc, char *argv[]){
//	char test[SIZE];
//	puts("Start to test function. Enter a string.");
//	read_char(test, SIZE);
//	puts("The string you input is:");
//	puts(test);
//	/* 打印显示数组的输入结果，也可以使用循环显示数组元素形式，
//	* 某些情况下显示结果不同。 */
//	return 0;
//}
//
//char * read_char(char *st, int n){
//	int i = 0;
//	do{
//		st[i] = getchar();
//	} while (st[i] != EOF && ++i < n);
//	/* 读取用户输入的字符，直到输入EOF或者到输入界限。
//	* 此处也可以使用指针形式进行操作，例如：
//	* *(st + i) = getchar();
//	* */
//	return st;
//}

//#define SIZE 40
//char * read_char(char *st, int n);
//
//int main(int argc, char *argv[]){
//	char test[SIZE];
//	puts("Start to test function. Enter a string.");
//	read_char(test, SIZE);
//	puts("The string you input is:");
//	puts(test);
//	/* 打印显示数组的输入结果，也可以使用循环显示数组元素形式，
//	* 某些情况下显示结果不同。 */
//	return 0;
//}
//
//char * read_char(char *st, int n){
//	int i = 0;
//	do{
//		st[i] = getchar();
//		if (st[i] == '\n' || st[i] == '\t' || st[i] == ' ')
//			break;
//		/* 遇到第一个空白即退出循环。该空白还存储在数组中未替换处理
//		* 输入缓冲区其他数据未做处理，仅在st内存第一个空白之前的字符*/
//	} while (st[i] != EOF && ++i < n);
//	/* 读取用户输入的字符，直到输入EOF或者到输入界限。
//	* 此处也可以使用指针形式进行操作，例如：
//	* *(st + i) = getchar();
//	* */
//	return st;
//}


//#include <ctype.h>
///* 使用isalpha()需要添加该头文件 */
//#define SIZE 80
//char * get_word(char *out);
//
//int main(int argc, char *argv[]){
//	char output[SIZE];
//	get_word(output);
//	printf("First word you input is : %s\n", output);
//	return 0;
//}
//
//char * get_word(char *out){
//	char input[SIZE];
//	char *in = input;
//
//	puts("Enter a String:>");
//	fgets(input, SIZE, stdin);
//
//	while ((*in == '\n' || *in == '\t' || *in == ' ') && *in != '\0')
//		in++;
//	/*  通过while循环删除掉字符串前面空白。此处需要注意无单词的字符串。
//	* 当前代码只是删除指定的字符，日常使用可以使用isalpha()来判断是
//	* 否英文字符，这样可以删除多种标点符号和特殊字符。可读性和应用性更加广泛。
//	* */
//	while (*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0'){
//		*out++ = *in++;
//	}
//	/* 从第一个非空白字符开始复制，直到单词结束，这里同样可以使用isalpha()。
//	* 题目未要求输出到字符串，因此可以结束。如果需要保存至字符串，添加：
//	* *out++ = '\0';
//	* */
//	return out;
//}
//


//#include <ctype.h>
///* 使用isalpha()需要添加该头文件 */
//#define SIZE 20
//char * get_word(char *out, int n);
//
//int main(int argc, char *argv[]){
//	char output[SIZE];
//	get_word(output, SIZE);
//	printf("First word you input is : %s\n", output);
//	return 0;
//}
//
//char * get_word(char *out, int n){
//	char input[SIZE];
//	char *in = input;
//	int i = 0;
//	puts("Enter a String:");
//	fgets(input, SIZE, stdin);
//
//	while ((*in == '\n' || *in == '\t' || *in == ' ') && *in != '\0')
//		in++;
//	/*  通过while循环删除掉字符串前面空白。此处需要注意无单词的字符串。
//	* 当前代码只是删除指定的字符，日常使用可以使用isalpha()来判断是
//	* 这样可以删除多种标点符号和特殊字符。可读性和应用性更加广泛。
//	* */
//
//	while (*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0' && i < n){
//		*out++ = *in++;
//		i++;
//	}
//	/* 从第一个非空白字符开始复制，直到单词结束，这里同样可以使用isalpha()。
//	* 添加函数参数表明可以读取的最大字符数，超出限制自动截断。
//	* 如果需要保存至字符串，添加：
//	* *out++ = '\0';
//	* */
//	return out;
//}

//#define SIZE 80
//char* string_char(char* st, char c);
//
//int main(int argc, char *argv[]) {
//	char source[SIZE];
//	char dest = ' ';
//	char *position;
//	printf("Enter a String: ");
//	fgets(source, SIZE, stdin);
//	/* 读取一个待检索的字符串 */
//	while (dest != EOF){
//		/* 考虑其他字符可能会被检索使用，退出字符使用EOF */
//		printf("Enter a char to find (EOF for Quit):");
//		while ((dest = getchar()) == '\n') continue;
//		/* 读取目标字符，且删除多余的换行符。*/
//		if ((position = string_char(source, dest)) != NULL)
//			printf("Found the char %c in the %p\n", *position, position);
//		else
//			printf("Char %c not found. Try another?\n", dest);
//		/* 调用函数，打印搜索结果。*/
//	}
//	return 0;
//}
//char* string_char(char* st, char c){
//	while (*st != '\0'){
//		/* 循环入口条件是判断是否到字符串结尾。*/
//		if (*st == c)
//			return st;
//		/* 匹配，即返回当前指针。*/
//		else
//			st++;
//		/* 否则，判断下一个字符*/
//	}
//	return NULL;
//}

//#define SIZE 80
//int is_within(char c, char* st);
//
//int main(int argc, char *argv[]) {
//	char source[SIZE];
//	char dest = ' ';
//	printf("Enter a String: ");
//	fgets(source, SIZE, stdin);
//	/* 读取一个待检索的字符串 */
//	while (dest != EOF){
//		/* 考虑其他字符可能会被检索使用，退出字符使用EOF */
//		printf("Enter a char to find (EOF for Quit):");
//		while ((dest = getchar()) == '\n') continue;
//		/* 读取目标字符，且删除多余的换行符。*/
//		if (is_within(dest, source) != 0)
//			printf("Found the char %c in the string\n", dest);
//		else
//			printf("Char %c not found. Try another?\n", dest);
//		/* 调用函数，打印搜索结果。*/
//	}
//	return 0;
//}
//int is_within(char c, char* st){
//	while (*st != '\0'){
//		/* 循环入口条件是判断是否到字符串结尾。*/
//		if (*st == c)
//			return 1;
//		/* 匹配，即返回当前指针。*/
//		else
//			st++;
//		/* 否则，判断下一个字符*/
//	}
//	return 0;
//}


//#define SIZE 80
//
//char* mystrncpy(char* dest, char* src, int n);
//int main(int argc, char *argv[]) {
//	char destination[SIZE], source[SIZE];
//	int i = 0;
//	printf("Enter a String as s source (blank to quit.): ");
//	fgets(source, SIZE, stdin);
//	printf("Enter number of char you need to copy :");
//	scanf("%d", &i);
//	/* 读取用户输入的源字符串和复制字符数量 n */
//	while (*source != '\n'){
//		mystrncpy(destination, source, i);
//		printf("Done!\nNow the dest string is:");
//		puts(destination);
//		while (getchar() != '\n') break;
//		/* 清除输入缓存中的剩余换行符。 */
//		printf("Another? Enter a String as s source(blank to quit.): ");
//		fgets(source, SIZE, stdin);
//		printf("Enter number of char you need to copy:");
//		scanf("%d", &i);
//	};
//	return 0;
//}
//
//char* mystrncpy(char* dest, char* src, int n){
//	int count = 0;
//	while (*src != '\0' && count < n){
//		*(dest + count++) = *src++;
//	}
//	/* 当源字符串不为空，且小于n时复制。 */
//	if (count < n){
//		while (count < n)
//			*(dest + count++) = '\0';
//	}
//	/* 如果源字符串小于n，填补空白。*/
//	return dest;
//}

//#define SIZE 80
//
//char* string_in(char* st, char* sub);
//
//int main(int argc, char *argv[]) {
//	char main_string[SIZE], sub[SIZE];
//	char *p = NULL;
//	printf("Enter a String as main string (blank to quit.): ");
//	fgets(main_string, SIZE, stdin);
//	printf("Enter a sub string to find in main :");
//	fgets(sub, SIZE, stdin);
//	while (*main_string != '\n'){
//		/* 读取用户输入的主串(main_string)、子串(sub) */
//		p = string_in(main_string, sub);
//		/* 调用子串函数，并返回子串地址。 */
//		printf("Done!\nNow the position of sub string is:");
//		printf("%p\n", p);
//		printf("Another? Enter a String as main string (blank to quit.): ");
//		fgets(main_string, SIZE, stdin);
//		printf("Enter a sub string to find in main :");
//		fgets(sub, SIZE, stdin);
//	};
//	return 0;
//}
//
//char* string_in(char* st, char* sub){
//	int count = 0;
//	int src_len = strlen(sub);
//	while (*st != '\0' && count < src_len){
//		/* count表示子串中被匹配的字符数，循环入口为
//		* 主串不为空、或者子串匹配完成 */
//		if (*(st + count) == *(sub + count)){
//			count++;
//			/* 匹配到第一个字符后，主串指针并未后移，而是通过子串计数
//			* 开始进行剩余字符的匹配检查。 */
//		}
//		else{
//			count = 0;
//			st++;
//			/* 如果没有匹配到子串的字符，主串的指针后移。并清空子串计数。*/
//		}
//	}
//	if (count == src_len) return st;
//	else return NULL;
//}

//#define SIZE 80
//char* invert_str(char* st);
//int main(int argc, char *argv[]) {
//	char test_string[SIZE];
//	char *p = NULL;
//	printf("Enter a string (enter to quit.): ");
//	fgets(test_string, SIZE, stdin);
//	while (*test_string != '\n'){
//		/* 循环读取待逆序字符串。直到直接输入回车。 */
//		p = invert_str(test_string);
//		printf("Done!\nNow the invert string is :");
//		printf("%s\n", test_string);
//		printf("Another? Enter a string (enter to quit.):");
//		fgets(test_string, SIZE, stdin);
//	};
//}
//char* invert_str(char* st){
//	/* 函数使用临时字符串来存储翻转字符串 */
//	
//	int length = strlen(st);
//	/* 获取源字符串的长度 */
//	char invert[length];
//	/* 创建逆序字符串的临时存储区域。 */
//	for (int i = 0; i < length; i++)
//		*(invert + i) = *(st + length - 1 - i);
//	/* 逆序翻转字符串，存储入临时字符串。 */
//	for (int i = 0; i < length; i++)
//		*(st + i) = *(invert + i);
//	/* 临时串转换到源字符串，覆盖源字符串*/
//	return st;
//}


//#define SIZE 80
//
//char* trim_str(char* st);
//
//int main(int argc, char *argv[]) {
//	char test_string[SIZE];
//
//	char *p = NULL;
//	printf("Enter a string (blank to quit.): ");
//	fgets(test_string, SIZE, stdin);
//	while (*test_string != '\n'){
//		/* 输入空行结束循环 */
//		p = trim_str(test_string);
//		printf("Done!\nNow the trim string is :");
//		printf("%s\n", test_string);
//		printf("Another? Enter a string (blank to quit.):");
//		fgets(test_string, SIZE, stdin);
//	};
//	return 0;
//}
//
//char* trim_str(char* st){
//	char* head = st;
//	/* 分别使用st 和 head两个指针表示原串和删除串的两个位置。*/
//	int count = 0;
//	/* 记录删除的空格数量 */
//	while (*st != '\0'){
//		if (*st != ' ') {
//			/* 原串不是空格，则两个指针均后移，并且从原复制到删除后。 */
//			*head++ = *st++;
//		}
//		else{
//			st++;
//			count++;
//			/* 原串字符有空格，原串指针后移，删除后串指针不动，计数器加1。 */
//		}
//	}
//	while (count--) *head++ = '\0';
//	/* 删除空格后，末尾添加空字符，并清除剩余字符。*/
//	return st;
//}


//#include <ctype.h>
//#define SIZE 80
//#define NUMBER 5
//
//
//void show_menu(void);
//void input_string(int number, char st[][SIZE]);
//void print_original(int number, char st[][SIZE]);
//void print_ascii(int number, char st[][SIZE]);
//void print_length(int number, char st[][SIZE]);
//void print_words(int number, char st[][SIZE]);
//void sort_order(int number, int order[][2]);
//int get_word_length(char *input);
//
//int main(int argc, char *argv[]) {
//	char test[NUMBER][SIZE];
//	int selected;
//	input_string(NUMBER, test);
//	show_menu();
//	scanf("%d", &selected);
//	while (selected != 5){
//		switch (selected) {
//		case 1: print_original(NUMBER, test); break;
//		case 2: print_ascii(NUMBER, test); break;
//		case 3: print_length(NUMBER, test); break;
//		case 4: print_words(NUMBER, test); break;
//		case 5: break;
//		default:
//			printf("Error select, retry!\n");
//		}
//		show_menu();
//		scanf("%d", &selected);
//	}
//	printf("All done, bye.");
//}
//
//void show_menu(){
//	printf("==============================================================\n");
//	printf("1) print original strings.   2) print string by ascii order\n");
//	printf("3) printf string by length.  4) print string by word length\n");
//	printf("5) quit.\n");
//	printf("===============================================================\n");
//}
//void input_string(int number, char st[][SIZE]){
//	/* 循环读取5个字符串，并保存至二维数组。*/
//	printf("Please input 5 strings serperate by enter.\n");
//	for (int i = 0; i< number; i++){
//		fgets(st[i], SIZE, stdin);
//	}
//}
//void print_original(int number, char st[][SIZE]){
//	/* 无排序处理，按照原顺序打印。*/
//	printf("print 5 strings in original mode.\n");
//	for (int i = 0; i< number; i++){
//		printf("%d. %s", i, st[i]);
//	}
//}
//void print_ascii(int number, char st[][SIZE]){
//	printf("print 5 strings in ascii mode.\n");
//	int order[number][2];
//	for (int i = 0; i< number; i++){
//		/* ascii排序需要将首字母提取，作为特征值存至order数组第二列 */
//		order[i][0] = i;
//		order[i][1] = st[i][0];
//	}
//	/* 通过st[i][0]取出整个字符串的首字母，并将其存储order数组进行排序处理。*/
//	sort_order(number, order);
//	/* 按照ASCII特征值进行排序。*/
//	for (int i = 0; i < number; i++){
//		/*排序完成按照order对应原数组进行打印*/
//		printf("ASCII No.%d. %s", i, st[order[i][0]]);
//	}
//}
//void print_length(int number, char st[][SIZE]){
//	printf("print 5 strings in length mode.\n");
//	int order[number][2];
//	for (int i = 0; i< number; i++){
//		order[i][0] = i;
//		order[i][1] = strlen(st[i]);
//	}
//	/* 分别使用strlen()函数计算字符串长度，并将长度数
//	*值作为排序特征值转存入order数组进行排序处理。*/
//	sort_order(number, order);
//	/* 按照数组长度的特征值进行排序。*/
//	for (int i = 0; i < number; i++){
//		printf("LENGTH No.%d. %s", i, st[order[i][0]]);
//	}
//}
//void print_words(int number, char st[][SIZE]){
//	printf("print 5 strings in words mode.\n");
//	int order[number][2];
//	for (int i = 0; i< number; i++){
//		order[i][0] = i;
//		order[i][1] = get_word_length(st[i]);
//	}
//	/* 分别使用get_word_length()函数计算字符串内单词的长度，并将单词长度数
//	*值作为排序特征值转存入order数组进行排序处理。*/
//	sort_order(number, order);
//	/* 按照数组内单词长度的特征值进行排序。*/
//	for (int i = 0; i < number; i++){
//		printf("WORDS No.%d. %s", i, st[order[i][0]]);
//	}
//}
//
//
//void sort_order(int number, int order[][2]){
//	/* 函数对输入的二维数组进行排序处理。使用二维数组主要目的是
//	保持原字符串内容，并具备一定的通用型，可以灵活的对数组长度
//	单词长度等题目要求进行排序。*/
//	int temp[2];
//	for (int i = 0; i< number - 1; i++){
//		for (int j = 0; j < number - 1 - i; j++){
//			if (order[j][1] > order[j + 1][1]){
//				temp[0] = order[j][0];
//				temp[1] = order[j][1];
//				order[j][0] = order[j + 1][0];
//				order[j][1] = order[j + 1][1];
//				order[j + 1][0] = temp[0];
//				order[j + 1][1] = temp[1];
//			}
//		}
//	}
//}
//
//int get_word_length(char *input){
//	/* 函数功能是计算每一个字符串的第一个单词的长度。*/
//	char *in = input;
//	int length = 0;
//	while (isalpha(*in) == 0) in++;
//	/*  通过while循环删除掉字符串前面非字母字符。 */
//	while (isalpha(*in) != 0){
//		in++;
//		length++;
//	}
//	/* 从第一个非空白字符开始计数，直到单词结束，*/
//	return length;
//}