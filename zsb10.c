#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//struct Date{
//	int year;
//	int month;
//	int day;
//};
//
//int main(){
//	struct Date date;
//	printf("������������(����Ҫ��0):> ");
//	scanf("%d%d%d", &date.year, &date.month, &date.day);
//	int Days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int i, days = 0;
//	for (i = 1; i < date.month; i++)
//		days += Days[i];
//	days += date.day;
//	//�����������Ķ��£�������1
//	if (date.month > 2)
//	{
//		if (date.year % 400 == 0 || (date.year % 4 == 0 && date.year % 100 != 0)){
//			++days;
//		}
//	}
//	if (date.month == 2 && date.day >=30)
//	{
//		printf("���·�ɶʱ�����������?!\n");
//		return 0;
//	}
//	printf("It's day %d in the year.\n", days);
//	return 0;
//}

//struct Date{
//	int year;
//	int month;
//	int day;
//};
//int Days(struct Date date)
//{
//	static int Days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int i, days = 0;
//	for (i = 1; i < date.month; i++)
//		days += Days[i];
//	days += date.day;
//	//�����������Ķ��£�������1
//	if (date.month > 2)
//	{
//		if (date.year % 400 == 0 || (date.year % 4 == 0 && date.year % 100 !=
//			0)){
//			++days;
//		}
//	}
//	if (date.month == 2 && date.day >= 30)
//	{
//		printf("���·�ɶʱ�����������?!\n");
//		return NULL;
//	}
//	if (date.month != 2 && date.day >31)
//	{
//		printf("ȷ����ǰ����·ݵ�����û���?\n");
//		return -1;
//	}
//	return days;
//}
//
//int main(){
//	struct Date date;
//	printf("Please give date: ");
//	scanf("%d%d%d", &date.year, &date.month, &date.day);
//	int days = Days(date);
//	printf("It's day %d in the year.\n", days);
//	return 0;
//}

//#define NAMLEN 20
//
////����һ��student�ṹ�����飬����5��Ԫ��
//struct student_t{
//	int num;
//	char name[NAMLEN];
//	int score[3];
//} students[5];
//
//void print(struct student_t *stu);
//
//void print(struct student_t *stu){
//	for (int i = 0; i < 5; i++){
//		printf("%d %s %d %d %d\n", students[i].num, students[i].name,
//			students[i].score[0],
//			students[i].score[1], students[i].score[2]);
//	}
//}
//
//int main(){
//	printf("������5��ѧ������(ѧ��/����/�ɼ�[3��]):>\n");
//	for (int i = 0; i < 5; i++){
//		scanf("%d%s%d%d%d", &students[i].num, students[i].name,
//			&students[i].score[0],
//			&students[i].score[1], &students[i].score[2]);
//	}
//	printf("************�ɰ��ָ���************\n");
//	print(students);
//	return 0;
//}


//#define NAMLEN 20
////����һ��student�ṹ�����飬����5��Ԫ��
//struct student_t{
//	int num;
//	char name[NAMLEN];
//	int score[3];
//} students[5];
//
//void print(struct student_t *stu);
//void input(struct student_t *stu);
//
//void input(struct student_t *stu)
//{
//	for (int i = 0; i < 5; i++){
//		scanf("%d%s%d%d%d", &students[i].num, students[i].name,
//			&students[i].score[0],
//			&students[i].score[1], &students[i].score[2]);
//	}
//}
//void print(struct student_t *stu){
//	for (int i = 0; i < 5; i++){
//		printf("%d %s %d %d %d\n", students[i].num, students[i].name,
//			students[i].score[0],
//			students[i].score[1], students[i].score[2]);
//	}
//}
//int main(){
//	printf("������5��ѧ������(ѧ��/����/�ɼ�[3��]):>\n");
//	input(students);
//	printf("************�ɰ��ָ���************\n");
//	print(students);
//	return 0;
//}


//#define NAMLEN 20
//#define STUCNT 10
//typedef struct student_t{
//	int num;
//	char name[NAMLEN];
//	int score[3];
//} student;
//int main(){
//	student students[STUCNT];
//	int maxi = 0, maxsum = 0;
//	double aver_0 = 0, aver_1 = 0, aver_2 = 0;
//	printf("������5��ѧ������(ѧ��/����/�ɼ�[3��]):>\n");
//	for (int i = 0; i < STUCNT; i++){
//		scanf("%d%s%d%d%d", &students[i].num, students[i].name,
//			&students[i].score[0], &students[i].score[1], &students[i].score[2]);
//		int sum = students[i].score[0] + students[i].score[1] +
//			students[i].score[2];
//		if (sum > maxsum){
//			maxsum = sum;
//			maxi = i;
//		}
//		aver_0 += students[i].score[0];
//		aver_1 += students[i].score[1];
//		aver_2 += students[i].score[2];
//	}
//	aver_0 /= STUCNT;
//	aver_1 /= STUCNT;
//	aver_2 /= STUCNT;
//	printf("3�ſγ���ƽ���ɼ�:>%lf %lf %lf\n", aver_0, aver_1, aver_2);
//	printf("%d %s %d %d %d %lf\n", students[maxi].num, students[maxi].name,
//		students[maxi].score[0], students[maxi].score[1], students[maxi].score[2],
//		(students[maxi].score[0] + students[maxi].score[1] +
//		students[maxi].score[2]) / 3.0);
//	return 0;
//}

//#include <stdio.h>
//#define NUM 13
//typedef struct people
//{
//	int num;
//	struct people *next;
//} people;
//int main()
//{
//	int count = NUM;
//	people p[NUM];
//	people *head;
//	head = p; //head ָ��p[0]
//	//1~13���
//	for (int i = 0; i < NUM; i++)
//	{
//		head->num = i + 1;
//		head->next = &p[i + 1];
//		head = head->next;
//	}
//	//���һ��Ԫ��ָ���һ��Ԫ�� �� �γɻ�
//	p[NUM - 1].next = p;
//	int i = 1;
//	head = p;
//	while (count > 1)
//	{
//		//�����Ѿ�����̭�Ľڵ�
//		if (head->num == 0)
//		{
//			head = head->next;
//			continue;
//		}
//		if (i == 3)
//		{
//			//����̭�Ľڵ㣬num��Ϊ0
//			printf("�� %d λ�ñ���̭\n", head->num);
//			head->num = 0;
//			count--;
//		}
//		head = head->next;
//		i++;
//		if (i > 3)
//		{
//			i = 1;
//		}
//	}
//	printf("--------------\n");
//	while (head->num == 0)
//	{
//		//��0�ڵ㼴Ϊ������µ�
//		head = head->next;
//		if (head->num != 0)
//		{
//			printf("���������� %d \n", head->num);
//		}
//	}
//	return 0;
//}

