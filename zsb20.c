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
//	puts("���뵥��(�ַ���)��׷�ӽ�ָ���ļ�");
//	puts("����һ������#���Խ�������:>\n");
//	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
//		fprintf(fp, "%d %s\n", ++count, words);
//	/* �޸�frpint()����������кš�����δ�޸�wordt�ļ�֮ǰ���кš�*/
//
//	puts("�ı�����:>");
//	rewind(fp);
//	while (fscanf(fp, "%s", words) >0)
//		puts(words);
//	puts("Done!");
//	if (fclose(fp) != 0)
//		fprintf(stderr, "Error closing file\n");
//	return 0;
//}
//int get_number(FILE * fp){
//	/* ���ʱ���ʱÿһ������Ϊһ�У����ʹ��fgets()������ȡ���ļ�ĩβ��������*/
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
//		/* ����fseek()�����������ļ���λ��*/
//		if (fgets(buffer, SIZE, fp) != NULL)
//		{
//			printf("Content is : %s", buffer);
//		}
//		/* ��ȡ��ǰλ�õ���ĩ�����ݣ�����ӡ��*/
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
//		/* ����fscanf()������������������ת�����ݣ�д��data����*/
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
//	}/* Ӧ��convert[]��������������ݵ����ŵ�ת������������Ӧ���ļ�*/
//
//	/* �����ʹ�ö�ά���������fscanf()�Զ�����ת����Ҳ����ʹ��fgets()���ֶ����ַ�
//	* ת����Ϊ�������ݣ�����������΢���ӡ�
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
