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
///* ��غ�����������*/
//int main(int argc, char *argv[]) {
//	printf("������>");
//	char input[SIZE];
//	int i = 0;
//	while ((input[i++] = getchar()) != EOF){
//		if (i >= SIZE){
//			printf("Overflowed.\n");
//			break;
//		}
//	}
//	/* ��ȡ�û�������ַ���ֱ��EOF������*/
//
//	printf("\nHello you input complete.Now let's counting.\n");
//	printf("Input words %d.\n", check_words(input));
//	printf("Input upper char %d.\n", check_upper(input));
//	printf("Input loewer char %d.\n", check_lower(input));
//	printf("Input punct char %d.\n", check_punct(input));
//	printf("Input digital  %d.\n", chech_digit(input));
//	/* ͳ�Ʋ���ʾ�û����롣*/
//
//}
//int check_words(char* input){
//	/* ������ͳ�ƣ�������һ����ĸ���ñ��λ���������ַ������λ���ʱ
//	* �������� 1 ���λ��ա���������ƶ��� */
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
//	/* ��ĩβ��ʼת������ȡ�ַ����ĳ���*/
//	for (int i = length; i > 0; i--){
//		if (isdigit(*(st + i - 1)) == 0){
//			/* ���ַ�����ĩβ�ǿ��ַ���ʼ��ȡ���ݣ������Ҫ�� 1 ��*/
//			printf("Error in character.\n");
//			return 0;
//			/* ���������λ���ڷ������ַ�������0 */
//		}
//		result += (*(st + i - 1) - '0')*bit_mark;
//		/* result ͨ����ȡ�ַ����������ַ���������bit_mark��¼��λ����������ֵ*/
//		bit_mark *= 10;
//		/* �ַ���ת���Ӹ�λ��ʼ�����bit_markͨ��ѭ�������ϳ� 10 ������*/
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
//	/* �޲���ʱ���ղ���p��������������ȡargv[][1],���������е�'-'��
//	* ��Ҫʱ��Ҳ����ͨ��argv[][0]���ж�'-'���Ƿ���ȷ���롣*/
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
//	/* ����ת���ĺ�����δ�ж��Ƿ���Сд������ͳһת��������ʡ����
//	* if�����жϣ�����ת���ַ����ڲ���ת���ַ�ʱЧ�ʸ��ߡ�*/
//}
//void print_lower(char* st){
//	printf("The lower case text is:\n");
//	while (*st != EOF && *st != '\0'){
//		putchar(tolower(*st++));
//	}
//}

//int main(int argc, char *argv[])
//{
//	int ch;     // ��ȡ�ļ�ʱ������ÿ���ַ��ĵط�
//	FILE *fp;   // ���ļ�ָ�롱
//	unsigned long count = 0;
//	char file_name[50];
//	printf("Input the filename:");
//	scanf("%s", file_name);
//	/* ͨ��scanf()������ȡ�û����룬�������뱣����filename�С�*/
//	if ((fp = fopen(file_name, "r")) == NULL)
//	{
//		printf("Can't open %s\n", file_name);
//		exit(EXIT_FAILURE);
//	}
//	while ((ch = getc(fp)) != EOF)
//	{
//		putc(ch, stdout); // �� putchar(ch);��ͬ
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
//	FILE *in, *out;  // ��������ָ�� FILE ��ָ��
//	int ch;
//	char name[LEN];  // ��������ļ���
//	int count = 0;
//	char input[LEN];
//
//	printf("Input the file name:");
//	scanf("%s", input);
//	/* �������в������������ɾ������ȡ�û��������ļ��� */
//	if ((in = fopen(input, "r")) == NULL)
//	{
//		fprintf(stderr, "I couldn't open the file \"%s\"\n", input);
//		exit(EXIT_FAILURE);
//	} /* �����Զ�ģʽ�������ļ� */
//
//	strncpy(name, input, LEN - 5);
//	name[LEN - 5] = '\0';
//	strcat(name, ".doc");//ƴ���������ļ���:����ԭ�ļ���(�����ļ���׺����׺)+.docΪ��׺���ļ�
//	/* �����������ļ����ļ���������дģʽ�򿪸��ļ�*/
//	if ((out = fopen(name, "w")) == NULL)
//	{
//		fprintf(stderr, "Can't create output file.\n");
//		exit(3);
//	}
//	while ((ch = getc(in)) != EOF)
//	if (count++ >= 0)
//		putc(ch, out);
//		printf("�������%s.doc�ļ���������!\n",input);
//	/* ��ӡ3���ַ��еĵ�1���ַ�*/
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
//	/* �������������л�������*/
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
//	/* �����ļ�������趨�� */
//	/* ��ʼ�����д�ӡ��*/
//	printf("Print the line one bye one.\n");
//	int i = 1;
//	while (fgets(line_one, LINE_SIZE, fp1) != NULL){
//		if (fgets(line_two, LINE_SIZE, fp2) != NULL){
//			printf("File 1 LINE NO.%d : %s", i, line_one);
//			printf("File 2 LINE NO.%d : %s", i, line_two);
//			i++;
//			/* �����ļ�ע���ӡ��*/
//		}
//		else{
//			printf("File 1 LINE NO.%d : %s", i, line_one);
//			i++;
//			/* ��һ���ļ����ڵڶ����ļ�������´�ӡ*/
//		}
//	}/* ��һ���ļ���ȡ���ļ�������*/
//	while (fgets(line_two, LINE_SIZE, fp2) != NULL) printf("File 2 LINE NO.%d : %s", i++, line_two);
//	/* ����ڶ����ļ�����δ��ȡ�У��������ӡ �ڶ����ļ���*/
//	/* ��ʼ�ϲ��д�ӡ��*/
//	printf("Print the combine line.\n");
//	rewind(fp1);
//	rewind(fp2);
//	/* ���ļ�ָ������Ϊ��ͷ��ʼ��*/
//	i = 1;
//	while (fgets(line_one, LINE_SIZE, fp1) != NULL){
//		if (fgets(line_two, LINE_SIZE, fp2) != NULL){
//			printf("LINE NO.%d :", i);
//			while (*line_one != '\n') putchar(*line_one++);
//			putchar('+');
//			printf(" %s", line_two);
//			i++;
//			/* fgets()��ȡ�ļ������б����˻��з���ʹ��putchar()ɾȥ��һ���ļ��Ļ��з���*/
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
