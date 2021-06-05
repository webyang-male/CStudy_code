#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//#define MAX 41
//
//int get_number(FILE *);
//int main(void)
//{
//	FILE *fp;
//	char words[MAX];
//	int count = 1;
//
//	if ((fp = fopen("file.txt", "a+")) == NULL)
//	{
//		fprintf(stdout, "Can't open \"file\" file.\n");
//		exit(EXIT_FAILURE);
//	}
//	count = get_number(fp);
//	puts("输入单词(字符串)以追加进指定文件");
//	puts("单独一行输入#用以结束程序:>\n");
//	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
//		fprintf(fp, "%d %s\n", ++count, words);
//	/* 修改frpint()函数，添加行号。程序并未修改wordt文件之前的行号。*/
//
//	puts("文本内容:>");
//	rewind(fp);
//	while (fscanf(fp, "%s", words) >0)
//		puts(words);
//	puts("Done!");
//	if (fclose(fp) != 0)
//		fprintf(stderr, "Error closing file\n");
//	return 0;
//}
//int get_number(FILE * fp){
//	/* 单词保存时每一个单词为一行，因此使用fgets()函数读取到文件末尾并计数。*/
//	int i = 0;
//	char temp[MAX];
//	rewind(fp);
//	while (fgets(temp, MAX, fp) != NULL) i++;
//	return i;
//}
//


//#define SIZE 256
//
//int main(void)
//{
//	FILE *fp;
//	char file_name[40];
//	long position;
//	char buffer[SIZE];
//
//	printf("Input a filename:");
//	scanf("%s", file_name);
//	if ((fp = fopen(file_name, "r")) == NULL)
//	{
//		printf("Can not open %s.\n", file_name);
//		exit(EXIT_FAILURE);
//	}
//	printf("Input the position to read (q or -1 to quit):");
//	while (scanf("%ld", &position) == 1 && position >= 0)
//	{
//		fseek(fp, position, SEEK_SET);
//		/* 调用fseek()函数，进行文件定位。*/
//		if (fgets(buffer, SIZE, fp) != NULL)
//		{
//			printf("Content is : %s", buffer);
//		}
//		/* 读取当前位置到行末的数据，并打印。*/
//		printf("Input the position to read (q or -1 to quit):");
//	}
//	fclose(fp);
//	return 0;
//}


//#define row 20
//#define col 30
//
//int main(int argc, char * argv[])
//{
//	FILE *fin, *fout;
//	int data[row][col];
//	char file_input[] = "file.txt";
//	char file_output[] = "main.txt";
//
//	char convert[] = { ' ', '.', '\'', '\"', '^', '*', '%', '$', '@', '#' };
//	if ((fin = fopen(file_input, "r")) == NULL)
//	{
//		printf("Can not open file %s.\n", file_input);
//		exit(EXIT_FAILURE);
//	}
//	if ((fout = fopen(file_output, "w")) == NULL)
//	{
//		printf("Can not open file %s.\n", file_output);
//		exit(EXIT_FAILURE);
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			fscanf(fin, "%d", &data[i][j]);
//		/* 调用fscanf()函数，按照整型数据转换数据，写入data数组*/
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%c", convert[data[i][j]]);
//			fprintf(fout, "%c", convert[data[i][j]]);
//		}
//		printf("\n");
//		fprintf(fout, "\n");
//	}/* 应用convert[]数组进行整型数据到符号的转换，并存入相应的文件*/
//
//	/* 如果不使用二维整型数组和fscanf()自动数据转换，也可以使用fgets()并手动将字符
//	* 转换成为整型数据，操作过程略微复杂。
//	*  char line[61];
//	while( fgets(line,61*sizeof(char),fin) != NULL)
//	{
//	for (int i = 0; i <= 61; i++) {
//	if(line[i]>=48&&line[i]<=57){
//	printf("%c",convert[line[i] - 48]);
//	fprintf(fout,"%c",convert[line[i] - 48]);
//	}
//	}
//	printf("\n");
//	fprintf(fout,"\n");
//	}
//	*/
//	fclose(fin);
//	fclose(fout);
//
//	return 0;
//}
