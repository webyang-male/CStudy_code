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
//	/* ��ӡ��ʾ�������������Ҳ����ʹ��ѭ����ʾ����Ԫ����ʽ��
//	* ĳЩ�������ʾ�����ͬ�� */
//	return 0;
//}
//
//char * read_char(char *st, int n){
//	int i = 0;
//	do{
//		st[i] = getchar();
//	} while (st[i] != EOF && ++i < n);
//	/* ��ȡ�û�������ַ���ֱ������EOF���ߵ�������ޡ�
//	* �˴�Ҳ����ʹ��ָ����ʽ���в��������磺
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
//	/* ��ӡ��ʾ�������������Ҳ����ʹ��ѭ����ʾ����Ԫ����ʽ��
//	* ĳЩ�������ʾ�����ͬ�� */
//	return 0;
//}
//
//char * read_char(char *st, int n){
//	int i = 0;
//	do{
//		st[i] = getchar();
//		if (st[i] == '\n' || st[i] == '\t' || st[i] == ' ')
//			break;
//		/* ������һ���հ׼��˳�ѭ�����ÿհ׻��洢��������δ�滻����
//		* ���뻺������������δ����������st�ڴ��һ���հ�֮ǰ���ַ�*/
//	} while (st[i] != EOF && ++i < n);
//	/* ��ȡ�û�������ַ���ֱ������EOF���ߵ�������ޡ�
//	* �˴�Ҳ����ʹ��ָ����ʽ���в��������磺
//	* *(st + i) = getchar();
//	* */
//	return st;
//}


//#include <ctype.h>
///* ʹ��isalpha()��Ҫ��Ӹ�ͷ�ļ� */
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
//	/*  ͨ��whileѭ��ɾ�����ַ���ǰ��հס��˴���Ҫע���޵��ʵ��ַ�����
//	* ��ǰ����ֻ��ɾ��ָ�����ַ����ճ�ʹ�ÿ���ʹ��isalpha()���ж���
//	* ��Ӣ���ַ�����������ɾ�����ֱ����ź������ַ����ɶ��Ժ�Ӧ���Ը��ӹ㷺��
//	* */
//	while (*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0'){
//		*out++ = *in++;
//	}
//	/* �ӵ�һ���ǿհ��ַ���ʼ���ƣ�ֱ�����ʽ���������ͬ������ʹ��isalpha()��
//	* ��ĿδҪ��������ַ�������˿��Խ����������Ҫ�������ַ�������ӣ�
//	* *out++ = '\0';
//	* */
//	return out;
//}
//


//#include <ctype.h>
///* ʹ��isalpha()��Ҫ��Ӹ�ͷ�ļ� */
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
//	/*  ͨ��whileѭ��ɾ�����ַ���ǰ��հס��˴���Ҫע���޵��ʵ��ַ�����
//	* ��ǰ����ֻ��ɾ��ָ�����ַ����ճ�ʹ�ÿ���ʹ��isalpha()���ж���
//	* ��������ɾ�����ֱ����ź������ַ����ɶ��Ժ�Ӧ���Ը��ӹ㷺��
//	* */
//
//	while (*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0' && i < n){
//		*out++ = *in++;
//		i++;
//	}
//	/* �ӵ�һ���ǿհ��ַ���ʼ���ƣ�ֱ�����ʽ���������ͬ������ʹ��isalpha()��
//	* ��Ӻ��������������Զ�ȡ������ַ��������������Զ��ضϡ�
//	* �����Ҫ�������ַ�������ӣ�
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
//	/* ��ȡһ�����������ַ��� */
//	while (dest != EOF){
//		/* ���������ַ����ܻᱻ����ʹ�ã��˳��ַ�ʹ��EOF */
//		printf("Enter a char to find (EOF for Quit):");
//		while ((dest = getchar()) == '\n') continue;
//		/* ��ȡĿ���ַ�����ɾ������Ļ��з���*/
//		if ((position = string_char(source, dest)) != NULL)
//			printf("Found the char %c in the %p\n", *position, position);
//		else
//			printf("Char %c not found. Try another?\n", dest);
//		/* ���ú�������ӡ���������*/
//	}
//	return 0;
//}
//char* string_char(char* st, char c){
//	while (*st != '\0'){
//		/* ѭ������������ж��Ƿ��ַ�����β��*/
//		if (*st == c)
//			return st;
//		/* ƥ�䣬�����ص�ǰָ�롣*/
//		else
//			st++;
//		/* �����ж���һ���ַ�*/
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
//	/* ��ȡһ�����������ַ��� */
//	while (dest != EOF){
//		/* ���������ַ����ܻᱻ����ʹ�ã��˳��ַ�ʹ��EOF */
//		printf("Enter a char to find (EOF for Quit):");
//		while ((dest = getchar()) == '\n') continue;
//		/* ��ȡĿ���ַ�����ɾ������Ļ��з���*/
//		if (is_within(dest, source) != 0)
//			printf("Found the char %c in the string\n", dest);
//		else
//			printf("Char %c not found. Try another?\n", dest);
//		/* ���ú�������ӡ���������*/
//	}
//	return 0;
//}
//int is_within(char c, char* st){
//	while (*st != '\0'){
//		/* ѭ������������ж��Ƿ��ַ�����β��*/
//		if (*st == c)
//			return 1;
//		/* ƥ�䣬�����ص�ǰָ�롣*/
//		else
//			st++;
//		/* �����ж���һ���ַ�*/
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
//	/* ��ȡ�û������Դ�ַ����͸����ַ����� n */
//	while (*source != '\n'){
//		mystrncpy(destination, source, i);
//		printf("Done!\nNow the dest string is:");
//		puts(destination);
//		while (getchar() != '\n') break;
//		/* ������뻺���е�ʣ�໻�з��� */
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
//	/* ��Դ�ַ�����Ϊ�գ���С��nʱ���ơ� */
//	if (count < n){
//		while (count < n)
//			*(dest + count++) = '\0';
//	}
//	/* ���Դ�ַ���С��n����հס�*/
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
//		/* ��ȡ�û����������(main_string)���Ӵ�(sub) */
//		p = string_in(main_string, sub);
//		/* �����Ӵ��������������Ӵ���ַ�� */
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
//		/* count��ʾ�Ӵ��б�ƥ����ַ�����ѭ�����Ϊ
//		* ������Ϊ�ա������Ӵ�ƥ����� */
//		if (*(st + count) == *(sub + count)){
//			count++;
//			/* ƥ�䵽��һ���ַ�������ָ�벢δ���ƣ�����ͨ���Ӵ�����
//			* ��ʼ����ʣ���ַ���ƥ���顣 */
//		}
//		else{
//			count = 0;
//			st++;
//			/* ���û��ƥ�䵽�Ӵ����ַ���������ָ����ơ�������Ӵ�������*/
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
//		/* ѭ����ȡ�������ַ�����ֱ��ֱ������س��� */
//		p = invert_str(test_string);
//		printf("Done!\nNow the invert string is :");
//		printf("%s\n", test_string);
//		printf("Another? Enter a string (enter to quit.):");
//		fgets(test_string, SIZE, stdin);
//	};
//}
//char* invert_str(char* st){
//	/* ����ʹ����ʱ�ַ������洢��ת�ַ��� */
//	
//	int length = strlen(st);
//	/* ��ȡԴ�ַ����ĳ��� */
//	char invert[length];
//	/* ���������ַ�������ʱ�洢���� */
//	for (int i = 0; i < length; i++)
//		*(invert + i) = *(st + length - 1 - i);
//	/* ����ת�ַ������洢����ʱ�ַ����� */
//	for (int i = 0; i < length; i++)
//		*(st + i) = *(invert + i);
//	/* ��ʱ��ת����Դ�ַ���������Դ�ַ���*/
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
//		/* ������н���ѭ�� */
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
//	/* �ֱ�ʹ��st �� head����ָ���ʾԭ����ɾ����������λ�á�*/
//	int count = 0;
//	/* ��¼ɾ���Ŀո����� */
//	while (*st != '\0'){
//		if (*st != ' ') {
//			/* ԭ�����ǿո�������ָ������ƣ����Ҵ�ԭ���Ƶ�ɾ���� */
//			*head++ = *st++;
//		}
//		else{
//			st++;
//			count++;
//			/* ԭ���ַ��пո�ԭ��ָ����ƣ�ɾ����ָ�벻������������1�� */
//		}
//	}
//	while (count--) *head++ = '\0';
//	/* ɾ���ո��ĩβ��ӿ��ַ��������ʣ���ַ���*/
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
//	/* ѭ����ȡ5���ַ���������������ά���顣*/
//	printf("Please input 5 strings serperate by enter.\n");
//	for (int i = 0; i< number; i++){
//		fgets(st[i], SIZE, stdin);
//	}
//}
//void print_original(int number, char st[][SIZE]){
//	/* ������������ԭ˳���ӡ��*/
//	printf("print 5 strings in original mode.\n");
//	for (int i = 0; i< number; i++){
//		printf("%d. %s", i, st[i]);
//	}
//}
//void print_ascii(int number, char st[][SIZE]){
//	printf("print 5 strings in ascii mode.\n");
//	int order[number][2];
//	for (int i = 0; i< number; i++){
//		/* ascii������Ҫ������ĸ��ȡ����Ϊ����ֵ����order����ڶ��� */
//		order[i][0] = i;
//		order[i][1] = st[i][0];
//	}
//	/* ͨ��st[i][0]ȡ�������ַ���������ĸ��������洢order�������������*/
//	sort_order(number, order);
//	/* ����ASCII����ֵ��������*/
//	for (int i = 0; i < number; i++){
//		/*������ɰ���order��Ӧԭ������д�ӡ*/
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
//	/* �ֱ�ʹ��strlen()���������ַ������ȣ�����������
//	*ֵ��Ϊ��������ֵת����order�������������*/
//	sort_order(number, order);
//	/* �������鳤�ȵ�����ֵ��������*/
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
//	/* �ֱ�ʹ��get_word_length()���������ַ����ڵ��ʵĳ��ȣ��������ʳ�����
//	*ֵ��Ϊ��������ֵת����order�������������*/
//	sort_order(number, order);
//	/* ���������ڵ��ʳ��ȵ�����ֵ��������*/
//	for (int i = 0; i < number; i++){
//		printf("WORDS No.%d. %s", i, st[order[i][0]]);
//	}
//}
//
//
//void sort_order(int number, int order[][2]){
//	/* ����������Ķ�ά�������������ʹ�ö�ά������ҪĿ����
//	����ԭ�ַ������ݣ����߱�һ����ͨ���ͣ��������Ķ����鳤��
//	���ʳ��ȵ���ĿҪ���������*/
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
//	/* ���������Ǽ���ÿһ���ַ����ĵ�һ�����ʵĳ��ȡ�*/
//	char *in = input;
//	int length = 0;
//	while (isalpha(*in) == 0) in++;
//	/*  ͨ��whileѭ��ɾ�����ַ���ǰ�����ĸ�ַ��� */
//	while (isalpha(*in) != 0){
//		in++;
//		length++;
//	}
//	/* �ӵ�һ���ǿհ��ַ���ʼ������ֱ�����ʽ�����*/
//	return length;
//}