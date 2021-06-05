#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//#include <ctype.h>
//#define SIZE 256
//
//int check_words(char* input);
//int check_upper(char* input);
//int check_lower(char* input);
//int check_punct(char* input);
//int chech_digit(char* input);
///* 相关函数的声明。*/
//int main(int argc, char *argv[]) {
//	printf("请输入>");
//	char input[SIZE];
//	int i = 0;
//	while ((input[i++] = getchar()) != EOF){
//		if (i >= SIZE){
//			printf("Overflowed.\n");
//			break;
//		}
//	}
//	/* 读取用户输入的字符，直到EOF结束。*/
//
//	printf("\nHello you input complete.Now let's counting.\n");
//	printf("Input words %d.\n", check_words(input));
//	printf("Input upper char %d.\n", check_upper(input));
//	printf("Input loewer char %d.\n", check_lower(input));
//	printf("Input punct char %d.\n", check_punct(input));
//	printf("Input digital  %d.\n", chech_digit(input));
//	/* 统计并显示用户输入。*/
//
//}
//int check_words(char* input){
//	/* 单词数统计，遇见第一个字母设置标记位，遇见非字符，标记位标记时
//	* 单词数加 1 标记位清空。否则继续移动。 */
//	int count = 0;
//	int start = 0;
//	while (*input != EOF){
//		if (isalpha(*input) == 0 && start == 0){
//			input++;
//		}
//		else if (isalpha(*input) == 0 && start == 1){
//			input++;
//			count++;
//			start = 0;
//		}
//		else if (isalpha(*input) != 0){
//			input++;
//			start = 1;
//		}
//	}
//	if (start == 1) count++;
//	return count;
//}
//
//int check_upper(char* input){
//	int count = 0;
//	while (*input != EOF){
//		if (isupper(*input++) != 0)count++;
//	}
//	return count;
//}
//int check_lower(char* input){
//	int count = 0;
//	while (*input != EOF){
//		if (islower(*input++) != 0)count++;
//	}
//	return count;
//}
//int check_punct(char* input){
//	int count = 0;
//	while (*input != EOF){
//		if (ispunct(*input++) != 0)count++;
//	}
//	return count;
//}
//
//int chech_digit(char* input){
//	int count = 0;
//	while (*input != EOF){
//		if (isdigit(*input++) != 0)count++;
//	}
//	return count;
//}


//#include <ctype.h>
//#include <string.h>
//
//int myatoi(char* st);
//int main(int argc, char *argv[]) {
//	char test[8];
//	printf("Enter a number of int:");
//	scanf("%s", test);
//	printf("you input int is: %d\n", myatoi(test));
//	return 0;
//}
//int myatoi(char* st){
//	int result = 0;
//	int bit_mark = 1;
//	int length = strlen(st);
//	/* 从末尾开始转换，获取字符串的长度*/
//	for (int i = length; i > 0; i--){
//		if (isdigit(*(st + i - 1)) == 0){
//			/* 从字符串的末尾非空字符开始读取数据，因此需要减 1 。*/
//			printf("Error in character.\n");
//			return 0;
//			/* 如果任意数位存在非数字字符，返回0 */
//		}
//		result += (*(st + i - 1) - '0')*bit_mark;
//		/* result 通过提取字符串中数字字符，并根据bit_mark记录的位数计算数据值*/
//		bit_mark *= 10;
//		/* 字符串转换从个位开始，因此bit_mark通过循环，不断乘 10 递增。*/
//	}
//	return result;
//}


//#include <string.h>
//#define SIZE 256
//void print_orig(char* st);
//void print_upper(char* st);
//void print_lower(char* st);
//
//int main(int argc, char *argv[]) {
//	char c;
//	if (argc < 2) {
//		c = 'p';
//	}
//	c = argv[1][1];
//	/* 无参数时按照参数p操作，其他参数取argv[][1],忽略命令行的'-'号
//	* 需要时，也可以通过argv[][0]来判断'-'号是否正确输入。*/
//	char test[SIZE];
//	printf("Enter a string to convert:");
//	fgets(test, SIZE, stdin);
//	switch (c){
//	case 'p':
//	case 'P':
//		print_orig(test);
//		break;
//	case 'u':
//	case 'U':
//		print_upper(test);
//		break;
//	case 'l':
//	case 'L':
//		print_lower(test);
//		break;
//	}
//	return 0;
//}
//void print_orig(char* st){
//	printf("The original text is:\n%s", st);
//}
//void print_upper(char* st){
//	printf("The upper case text is:\n");
//	while (*st != EOF && *st != '\0'){
//		putchar(toupper(*st++));
//	}
//	/* 处理转换的函数并未判断是否是小写，而是统一转化，这样省略了
//	* if条件判断，当待转化字符大于不用转换字符时效率更高。*/
//}
//void print_lower(char* st){
//	printf("The lower case text is:\n");
//	while (*st != EOF && *st != '\0'){
//		putchar(tolower(*st++));
//	}
//}

//int main(int argc, char *argv[])
//{
//	int ch;     // 读取文件时，储存每个字符的地方
//	FILE *fp;   // “文件指针”
//	unsigned long count = 0;
//	char file_name[50];
//	printf("Input the filename:");
//	scanf("%s", file_name);
//	/* 通过scanf()函数读取用户输入，并将输入保存至filename中。*/
//	if ((fp = fopen(file_name, "r")) == NULL)
//	{
//		printf("Can't open %s\n", file_name);
//		exit(EXIT_FAILURE);
//	}
//	while ((ch = getc(fp)) != EOF)
//	{
//		putc(ch, stdout); // 与 putchar(ch);相同
//		
//		count++;
//	}
//	printf("\n");
//	fclose(fp);
//	printf("%s has %lu characters\n", file_name, count);
//	return 0;
//}

//#define LEN 40
//int main(int argc, char *argv[])
//{
//	FILE *in, *out;  // 声明两个指向 FILE 的指针
//	int ch;
//	char name[LEN];  // 储存输出文件名
//	int count = 0;
//	char input[LEN];
//
//	printf("Input the file name:");
//	scanf("%s", input);
//	/* 将命令行参数的条件语句删除，读取用户的输入文件名 */
//	if ((in = fopen(input, "r")) == NULL)
//	{
//		fprintf(stderr, "I couldn't open the file \"%s\"\n", input);
//		exit(EXIT_FAILURE);
//	} /* 设置以读模式打开输入文件 */
//
//	strncpy(name, input, LEN - 5);
//	name[LEN - 5] = '\0';
//	strcat(name, ".doc");//拼接生成新文件名:输入原文件名(如有文件后缀带后缀)+.doc为后缀的文件
//	/* 设置完成输出文件的文件名，并以写模式打开该文件*/
//	if ((out = fopen(name, "w")) == NULL)
//	{
//		fprintf(stderr, "Can't create output file.\n");
//		exit(3);
//	}
//	while ((ch = getc(in)) != EOF)
//	if (count++ >= 0)
//		putc(ch, out);
//		printf("您输入的%s.doc文件理论生成!\n",input);
//	/* 打印3个字符中的第1个字符*/
//	if (fclose(in) != 0 || fclose(out) != 0)
//		fprintf(stderr, "Error in closing files\n");
//	return 0;
//}

//#define LINE_SIZE 256
//
//int main(int argc, char *argv[])
//{
//	char *line_one = (char*)malloc(LINE_SIZE * sizeof(char));
//	char *line_two = (char*)malloc(LINE_SIZE * sizeof(char));
//	/* 定义两个读入行缓冲区。*/
//	int first_end = 1;
//	if (argc != 3)
//	{
//		fprintf(stderr, "Usage:%s filename filename", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//	FILE *fp1, *fp2;
//	if ((fp1 = fopen(argv[1], "r")) == NULL)
//	{
//		fprintf(stderr, "Open %s failed\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//	if ((fp2 = fopen(argv[2], "r")) == NULL)
//	{
//		fprintf(stderr, "Open %s failed\n", argv[2]);
//		exit(EXIT_FAILURE);
//	}
//	/* 输入文件的相关设定。 */
//	/* 开始独立行打印。*/
//	printf("Print the line one bye one.\n");
//	int i = 1;
//	while (fgets(line_one, LINE_SIZE, fp1) != NULL){
//		if (fgets(line_two, LINE_SIZE, fp2) != NULL){
//			printf("File 1 LINE NO.%d : %s", i, line_one);
//			printf("File 2 LINE NO.%d : %s", i, line_two);
//			i++;
//			/* 两个文件注意打印。*/
//		}
//		else{
//			printf("File 1 LINE NO.%d : %s", i, line_one);
//			i++;
//			/* 第一个文件长于第二个文件的情况下打印*/
//		}
//	}/* 第一个文件读取到文件结束。*/
//	while (fgets(line_two, LINE_SIZE, fp2) != NULL) printf("File 2 LINE NO.%d : %s", i++, line_two);
//	/* 如果第二个文件还有未读取行，则继续打印 第二个文件。*/
//	/* 开始合并行打印。*/
//	printf("Print the combine line.\n");
//	rewind(fp1);
//	rewind(fp2);
//	/* 将文件指针设置为从头开始。*/
//	i = 1;
//	while (fgets(line_one, LINE_SIZE, fp1) != NULL){
//		if (fgets(line_two, LINE_SIZE, fp2) != NULL){
//			printf("LINE NO.%d :", i);
//			while (*line_one != '\n') putchar(*line_one++);
//			putchar('+');
//			printf(" %s", line_two);
//			i++;
//			/* fgets()读取文件内容中保存了换行符，使用putchar()删去第一个文件的换行符。*/
//		}
//		else{
//			printf("LINE NO.%d : %s", i, line_one);
//			i++;
//		}
//	}
//	while (fgets(line_two, LINE_SIZE, fp2) != NULL) printf("LINE NO.%d : %s", i++, line_two);
//	fclose(fp1);
//	fclose(fp2);
//	return 0;
//}
