#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//struct month{
//	char month_name[10];
//	char month_abbrev[4];
//	int days;
//	int number;
//} months[12] = {
//	{ "January", "Jan", 31, 1 },
//	{ "February", "Feb", 28, 2 },
//	{ "March", "Mar", 31, 3 },
//	{ "April", "Apr", 30, 4 },
//	{ "May", "May", 31, 5 },
//	{ "June", "Jun", 30, 6 },
//	{ "July", "Jul", 31, 7 },
//	{ "August", "Aug", 31, 8 },
//	{ "September", "Sep", 30, 9 },
//	{ "October", "Oct", 31, 10 },
//	{ "November", "Nov", 30, 11 },
//	{ "December", "Dec", 31, 12 }
//};
//int cala_days(char* month, int day);
//int main(int argc, char * argv[]){
//	int year, day;
//	char month[10];
//	int result;
//	printf("Enter the YEAR MONTH DAY(seprate by blank) :");
//	scanf("%d%s%d", &year, &month, &day);
//	while (year > 1000){
//		/* �������С��1000 �˳�ѭ�� */
//		result = cala_days(month, day);
//		if (result < 0)
//			printf("Error input, retry.\n");
//		else
//			printf("The %d/%s/%d is %d days.\n", year, month, day, result);
//		printf("Enter the YEAR MONTH DAY(seprate by blank) :");
//		scanf("%d %s %d", &year, month, &day);
//	};
//	printf("Done.");
//	return 0;
//}
//
//int cala_days(char* month, int day)
//{
//	if (day < 1 || day > 31) return -1;
//	/* ���ڼ����ж�*/
//	int total = 0;
//	int temp = atoi(month);
//	for (int i = 0; i < 12; i++){
//		if ((temp == months[i].number) || (strcmp(month, months[i].month_abbrev) == 0) || (strcmp(month, months[i].month_name) == 0)){
//			if (day > months[i].days) return -1;
//			/* ���������ж�*/
//			return total + day;
//		}
//		else{
//			total += months[i].days;
//		}
//	}
//	return -1;
//}


//#define MAXTITL  40
//#define MAXAUTL  40
//#define MAXBKS 100    /* �鼮��������� */
//struct book{          /* ���� book ģ��  */
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float value;
//};
//
//char * s_gets(char * st, int n);
//void list_book(struct book library[], int count);
//void list_book_title(struct book library[], int count);
//void list_book_value(struct book library[], int count);
///* ���������� */
//int main(int argc, char * argv[])
//{
//	struct book library[MAXBKS];  /* book ���ͽṹ������ */
//	int count = 0;
//	printf("Please enter the book title.\n");
//	printf("Press [enter] at the start of a line to stop.\n");
//	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
//	{
//		printf("Now enter the author.\n");
//		s_gets(library[count].author, MAXAUTL);
//		printf("Now enter the value.\n");
//		scanf("%f", &library[count++].value);
//		while (getchar() != '\n')
//			continue;         /* ����������*/
//		if (count < MAXBKS)
//			printf("Enter the next title.\n");
//	}
//	if (count > 0)
//	{
//		list_book(library, count);
//		list_book_title(library, count);
//		list_book_value(library, count);
//		/* �ֱ���ʾ������ */
//	}
//	else
//		printf("No books? Too bad.\n");
//	return 0;
//}
//void list_book(struct book library[], int count){
//	/* ������˳���ӡͼ�� */
//	printf("Here is the list of your books:\n");
//	for (int index = 0; index < count; index++)
//		printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
//}
//
//void list_book_title(struct book library[], int count){
//	/* ��ͼ����ĸ�����ӡ��Ϊ�˲��ı�ԭ����˳���½���ָ�������������ʹ�ӡ */
//	char * ptitle[count];
//	char *temp;
//	int top, seek;
//
//	for (int index = 0; index < count; index++)
//		ptitle[index] = library[index].title;
//	for (top = 0; top < count - 1; top++)
//	for (seek = top + 1; seek < count; seek++)
//	if (strcmp(ptitle[top], ptitle[seek]) > 0)
//	{
//		temp = ptitle[top];
//		ptitle[top] = ptitle[seek];
//		ptitle[seek] = temp;
//	}
//	/* ͨ��ptitle����ָ���title���бȽ����� */
//	printf("Here is the list of your books by title :\n");
//	for (int index = 0; index < count; index++)
//	for (int i = 0; i < count; i++)
//	if (ptitle[index] == library[i].title)
//		/* ������������ӡͼ��*/
//		printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value);
//
//}
//void list_book_value(struct book library[], int count){
//	/* ����ͼ��۸������ӡ��Ϊ�˲��ı�ԭ����˳���½���ָ�������������ʹ�ӡ */
//	float * pvalue[count];
//	float *temp;
//	int top, seek;
//
//	for (int index = 0; index < count; index++)
//		pvalue[index] = &library[index].value;
//	for (top = 0; top < count - 1; top++)
//	for (seek = top + 1; seek < count; seek++)
//	if ((*pvalue[top] > *pvalue[seek]))
//	{
//		temp = pvalue[top];
//		pvalue[top] = pvalue[seek];
//		pvalue[seek] = temp;
//	}
//	/* ͨ��pvalue������бȽϺ�����*/
//	printf("Here is the list of your books by value :\n");
//	for (int index = 0; index < count; index++)
//	for (int i = 0; i < count; i++)
//	if (*pvalue[index] == library[i].value)
//		/* ������������ӡͼ�� */
//		printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value);
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	char * find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');    // ���һ��з�
//		if (find)                   // �����ַ���� NULL��
//			*find = '\0';           // �ڴ˴�����һ�����ַ�
//		else while (getchar() != '\n')
//			continue;               // ������������ʣ����ַ�
//	}
//	return ret_val;
//}

struct user{
	char fname[15];
	char mname[15];
	char lname[15];
};
struct user_id{
	char sid[30];
	struct user name;
}user_list[5] = {
	{ "302039823", { "Flossie", "Mike", "Dribble" } } };
/* ʹ�÷�������ʽ��Ƕ�ס���ʼ����һ��Ԫ�ء�*/
/*
* �����ǲ��������ṹģʽ����Ľṹģ�棬������ʹ���д�������
struct user_id{
char sid[30];
struct {
char fname[15];
char mname[15];
char lname[15];
};
}user_list[5] = {
{"302039823", "Flossie", "Mike", "Dribble"}};
*/

//void print_user_id(struct user_id list[], int num);
//int main(int argc, char * argv[])
//{
//	printf("Test to printf struct contents:\n");
//	print_user_id(user_list, 5);
//	return 0;
//}
//void print_user_id(struct user_id list[], int num){
//	for (int i = 0; i < num; i++){
//		if (strlen(list[i].sid)< 9) break;
//		printf("No %d: %s, ", i + 1, list[i].name.lname);
//		printf(" %s ", list[i].name.fname);
//		if (strlen(list[i].name.mname) > 0) printf("%c. ", list[i].name.mname[i]);
//		printf("-- %s", list[i].sid);
//		printf("\n");
//	}
//}


//#define CSIZE 4
//typedef struct{
//	char fname[30];
//	char lname[30];
//}FULL_NAME;
///* ���������ṹ��*/
//typedef struct{
//	FULL_NAME name;
//	float grade[3];
//	float average;
//}student;
///* ����ѧ���ĳɼ���ṹģ�档*/
//void set_grade(student list[]);
///* ����ѧ����Ϣ */
//void set_average(student list[]);
///* ����ƽ���� */
//void get_info_all(student list[]);
///* ��ӡѧ����Ϣ */
//void get_agerage_all(student list[]);
///* ����ȫ��ƽ���� */
//int main(int argc, char * argv[]){
//	student student_list[CSIZE] = {0};
//	set_grade(student_list);
//	set_average(student_list);
//	get_info_all(student_list);
//	get_agerage_all(student_list);
//	return 0;
//}
//
//void set_grade(student list[]){
//	char fname[15], lname[15];
//	int i = 0;
//	while (i < CSIZE){
//		printf("Enter the student name(FIRST_NAME  LAST_NAME):");
//		scanf("%s %s", fname, lname);
//		if (strlen(fname) < 1 && strlen(lname) < 1){
//			printf("Error in student name! retry!");
//			printf("Enter the student name(FIRST_NAME  LAST_NAME):");
//			scanf("%s %s", fname, lname);
//			break;
//		}
//		strcpy(list[i].name.fname, fname);
//		strcpy(list[i].name.lname, lname);
//		/* ��ȡ�û����룬�����Ƶ��ṹ������ */
//		printf("Enter the 3 score of %s:", fname);
//		scanf("%f %f %f", &list[i].grade[0], &list[i].grade[1], &list[i].grade[2]);
//		i++;
//		/* ��ȡ�û�����������ɼ� */
//	}
//}
//
//void set_average(student list[]){
//	for (int i = 0; i < CSIZE; i++) {
//		list[i].average = (list[i].grade[0] + list[i].grade[1] + list[i].grade[2]) / 3;
//	}
//}
//
//void get_info_all(student list[]){
//	for (int i = 0; i < CSIZE; i++) {
//		printf("No.%d: %s.%s : %5.2f %5.2f %5.2f, average = %5.2f\n", i, list[i].name.fname,
//			list[i].name.lname, list[i].grade[0], list[i].grade[1], list[i].grade[2], list[i].average);
//	}
//}
//
//void get_agerage_all(student list[]){
//	float sum = 0.0;
//	for (int i = 0; i < CSIZE; ++i) {
//		sum += list[i].average;
//	}
//	printf("Class average is %.2f\n", sum / 4);
//}
//

//typedef struct{
//	int id;
//	char fname[20];
//	char lname[20];
//	int start_num;
//	int hit_num;
//	int base_num;
//	int RBI;
//	float BABIP;
//}PLAYER;
//
//PLAYER player_list[19] = {0};
///* ����ṹģ��ͽṹ���顣*/
//
//void read_data(PLAYER list[], FILE* fp);
///* ��ȡ�ļ���Ϣ�����������ṹ������ */
//void set_babip(PLAYER list[]);
///* ����ṹ������Ϣ */
//void get_info(PLAYER list[]);
///* ��ӡ�ṹ������Ϣ */
//int main(int argc, char * argv[]){
//	FILE *fp;
//	if ((fp = fopen("data.txt", "r")) == NULL)
//	{
//		printf("Can't open %s\n", "data.txt");
//		exit(EXIT_FAILURE);
//	}
//	read_data(player_list, fp);
//	set_babip(player_list);
//	get_info(player_list);
//	fclose(fp);
//	return 0;
//}
//void read_data(PLAYER list[], FILE* fp){
//	if (fp == NULL) {
//		printf("Can not open the file. \n");
//		exit(EXIT_FAILURE);
//	}
//	int id, start_num, hit_num, base_num, RBI;
//	float BABIP;
//	char fname[20], lname[20];
//	int read_count = 1;
//	while (1){
//		read_count = fscanf(fp, "%d %s %s %d %d %d %d", &id, fname, lname, &start_num, &hit_num, &base_num, &RBI);
//		if (read_count < 7) break;
//		/* ���ݸ�ʽ��׼������£�����ֱ��ʹ��fscan()������ȡ��
//		* �䷵��ֵΪ��ȡ���ݵĸ�����������Ϊ��ȡ�ɹ����б��׼��*/
//		strcpy(list[id].fname, fname);
//		strcpy(list[id].lname, lname);
//		list[id].id = id;
//		list[id].start_num += start_num;
//		list[id].hit_num += hit_num;
//		list[id].base_num += base_num;
//		list[id].RBI += RBI;
//	}
//}
//
//void set_babip(PLAYER list[]){
//	for (int i = 0; i < 19; i++) {
//		list[i].BABIP = (float)list[i].hit_num / (float)list[i].start_num;
//	}
//}
//
//void get_info(PLAYER list[]){
//	printf("ID: FIRST_NAME.LAST_NAME START HIT_NUM BASE_NUM RBI BABIP\n");
//	for (int i = 0; i < 19; i++) {
//		printf("%2d %10s.%-10s %5d %5d %7d %6d %.2f\n", list[i].id, list[i].fname, list[i].lname, list[i].start_num, list[i].hit_num, list[i].base_num, list[i].RBI, list[i].BABIP);
//	}
//}


//#define MAXTITL 100
//#define MAXAUTL 100
//#define MAXBKS 20           /* ����鼮���� */
//char * s_gets(char * st, int n);
//struct book{                /* ���� book ģ�� */
//	char title[MAXTITL];//����
//	char author[MAXAUTL];//����
//	float value;//�۸�
//	int delete_flag;
//};
///* ���ɾ����ǳ�Ա */
//
//int main(int argc, char * argv[])
//{
//	struct book library[MAXBKS]; /* �ṹ���� */
//	int count = 0;
//	int index, filecount;
//	FILE * pbooks;
//	int size = sizeof(struct book);
//	char delete;
//	if ((pbooks = fopen("book.txt", "r+b")) == NULL)
//	{
//		fputs("Can't open book.txt file\n", stderr);
//		exit(1);
//	}
//	rewind(pbooks);      /* ��λ���ļ���ʼ */
//	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
//		/* ��ӱ�־λ������Ӱ�����ݵĶ�ȡ���ܣ�fread()�������սṹ��book�Ĵ洢�ռ��С
//		* ���ζ�ȡ��ͬ�ֽڡ��ɲμ���䣺 int size = sizeof(struct book);*/
//	{
//		if (count == 0)
//			puts("Current contents of book.txt:");
//		printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
//		count++;
//	}
//	filecount = count;
//	if (count == MAXBKS)
//	{
//		fputs("The book.txt file is full.", stderr);
//		exit(2);
//	}
//	printf("Do you want to modefy library?(y/n):");
//	scanf("%c", &delete);
//	if (delete == 'y'){
//		for (int i = 0; i < count; i++){
//			printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value);
//			while (getchar() != '\n') continue;
//			puts("Do you want to delete this book ?(Y/N).");
//			scanf("%c", &delete);
//			if (delete == 'y') library[i].delete_flag = 1;
//		}
//	}
//	/* �û��޸�ԭ���飬������������λ�������䱻ɾ������Ӽ�¼��Ϣ�ǿ�ͨ���ı�Ǹ��Ǿ����ݡ�*/
//
//	while (getchar() != '\n') continue;
//	puts("�����������Ϣ,���س��Խ�������");
//	puts("����������:>");
//	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL&&library[count].title[0] != '\0' && library[count].delete_flag != 1)
//	{
//		puts("Now enter the author.");
//		s_gets(library[count].author, MAXAUTL);
//		puts("Now enter the value.");
//		scanf("%f", &library[count].value);
//		library[count++].delete_flag = 0;
//		while (getchar() != '\n')
//			continue;     /* ���������� */
//		if (count < MAXBKS)
//			puts("Enter the next title.");
//	}
//	/* ��¼����Ϣ���Ը��Ǳ�ɾ����Ϣ�� */
//	rewind(pbooks);      /* ��λ���ļ���ʼ */
//	if (count > 0)
//	{
//		puts("Here is the list of your books:");
//		for (index = 0; index < count; index++)
//		if (library[index].delete_flag != 1){
//			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
//			fwrite(&library[filecount], size, count - filecount, pbooks);
//		}
//	}
//	/* ��������ʱ���Ա�ɾ����ǹ�����Ϣ��*/
//	else
//		puts("No books? Too bad.\n");
//	puts("Bye.\n");
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	char * find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');    // ���һ��з�
//		if (find)                   // �����ַ���� NULL��
//			*find = '\0';           // �ڴ˴�����һ�����ַ�
//		else while (getchar() != '\n')
//			continue;           // ����������
//	}
//	return ret_val;
//}
//


