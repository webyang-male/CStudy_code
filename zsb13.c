#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main(void) {
//	FILE *fp = NULL;
//	char c;
//	int i;
//	if ((fp = fopen("test", "w")) == NULL) {
//		printf("open file test error!\n");
//		exit(EXIT_FAILURE);
//	}
//	while ((c = getchar()) != EOF && c != '!') {
//		if (c >= 'a' && c <= 'z')
//			c = c - 'a' + 'A';
//		fputc(c, fp);
//	}
//	fclose(fp);
//}

//void swap(char *s, int i, int j) {
//	char t = s[i];
//	s[i] = s[j];
//	s[j] = t;
//}
//void select_sort(char *str) {
//	int i, j;
//	int len = strlen(str);
//	for (i = 0; i < len; i++) {
//		int min = i;
//		for (j = i + 1; j < len; j++) {
//			if (str[j] < str[min])
//				min = j;
//		}
//		swap(str, min, i);
//	}
//}
//int main(void) {
//	FILE *fa, *fb, *fc;
//	char buf[1024] = { 0 };
//	fa = fopen("A", "r");
//	fb = fopen("B", "r");
//	fc = fopen("C", "w");
//	fgets(buf, 1024, fa);
//	int len = strlen(buf);
//	fgets(buf + len, 1024 - len, fb);
//	select_sort(buf);
//	fputs(buf, fc);
//	fclose(fa);
//	fclose(fb);
//	fclose(fc);
//}


//struct student {
//	int num;
//	char name[32];
//	int score[3];
//	float avg;
//};
//
//int main(viod) {
//	int i;
//	struct student stu[5];
//	FILE *fp = NULL;
//	for (i = 0; i<5; i++) {
//		printf("num name score1 score2 score3:\n");
//		scanf("%d %s %d %d %d", &stu[i].num, &stu[i].name,
//			&stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
//		stu[i].avg = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
//	}
//	if ((fp = fopen("stud", "wb")) == NULL) {
//		printf("open file stud for write error\n");
//		return 1;
//	}
//	if (fwrite(stu, sizeof(stu), 1, fp) != 1) {
//		printf("write error\n");
//		return 1;
//	}
//	fclose(fp);
//}

//struct student {
//	int num;
//	char name[32];
//	int score[3];
//	float avg;
//};
//void sort(struct student stu[], int len) {
//	int i, j;
//	struct student tmp;
//	for (i = 0; i<len; i++) {
//		int min = i;
//		for (j = i + 1; j<len; j++) {
//			if (stu[j].avg > stu[min].avg)
//				min = j;
//		}
//		tmp = stu[min];
//		stu[min] = stu[i];
//		stu[i] = tmp;
//	}
//}
//int main(viod) {
//	int i;
//	struct student stu[5];
//	FILE *fp = NULL;
//	if ((fp = fopen("stud", "rb")) == NULL) {
//		printf("open file stud for read error\n");
//		return 1;
//	}
//	if (fread(stu, sizeof(stu), 1, fp) != 1) {
//		printf("write error\n");
//		return 1;
//	}
//	fclose(fp);
//	sort(stu, 5);
//	FILE *fw = fopen("stu_sort", "wb");
//	fwrite(stu, sizeof(stu), 1, fw);
//	fclose(fw);
//}

//struct student {
//	int num;
//	char name[32];
//	int score[3];
//	float avg;
//};
//void sort(struct student stu[], int len) {
//	int i, j;
//	struct student tmp;
//	for (i = 0; i<len; i++) {
//		int min = i;
//		for (j = i + 1; j<len; j++) {
//			if (stu[j].avg > stu[min].avg)
//				min = j;
//		}
//		if (min != i) {
//			tmp = stu[min];
//			stu[min] = stu[i];
//			stu[i] = tmp;
//		}
//	}
//}
//int main(viod) {
//	int i;
//	struct student stu[5];
//	FILE *fp = NULL;
//	if ((fp = fopen("stu_sort", "rb")) == NULL) {
//		printf("open file stud for read error\n");
//		return 1;
//	}
//	if (fread(stu, sizeof(stu), 1, fp) != 1) {
//		printf("write error\n");
//		return 1;
//	}
//	fclose(fp);
//	struct student new_stu[6];
//	memcpy(new_stu, stu, sizeof(stu));
//	printf("num name score0 score1 score2:\n");
//	scanf("%d %s %d %d %d", &new_stu[5].num, &new_stu[5].name,
//		&new_stu[5].score[0],
//		&new_stu[5].score[1], &new_stu[5].score[2]);
//	new_stu[5].avg =
//		(new_stu[5].score[0] + new_stu[5].score[1] + new_stu[5].score[2]) / 3.0;
//	sort(new_stu, 6);
//	FILE *fw = fopen("tmp_sort", "wb");
//	fwrite(new_stu, sizeof(new_stu), 1, fw);
//	fclose(fw);
//}
////查看tmp_sort文件，确实插入和排序了

//struct student {
//	int num;
//	char name[32];
//	int score[3];
//	float avg;
//};
//int main(viod) {
//	int i;
//	struct student stu[6];
//	FILE *fp = NULL;
//	if ((fp = fopen("tmp_sort", "rb")) == NULL) {
//		printf("open file stud for read error\n");
//		return 1;
//	}
//	if (fread(stu, sizeof(stu), 1, fp) != 1) {
//		printf("write error\n");
//		return 1;
//	}
//	fclose(fp);
//	FILE *fw = fopen("stu_sort", "wb");
//	fwrite(stu, sizeof(stu), 1, fw);
//	fclose(fw);
//}
////查看原本的stu_sort文件


//struct employee {
//	int num; // 编号
//	char name[32];
//	char sex[4];
//	int age;
//	char addr[60];
//	int salary;
//	char health[10]; // 健康状况
//	char class[10]; // 文化程度
//};
//struct emp {
//	char name[32];
//	int salary;
//};
//int main(void) {
//	int i;
//	FILE *fp1, *fp2;
//	struct emp emp_arr[5];
//	struct employee employee_arr[5];
//	fp1 = fopen("employee", "rb");
//	fread(employee_arr, sizeof(employee_arr), 1, fp1);
//	fclose(fp1);
//	for (i = 0; i<5; i++) {
//		strcpy(emp_arr[i].name, employee_arr[i].name);
//		emp_arr[i].salary = employee_arr[i].salary;
//	}
//	fp2 = fopen("emp", "wb");
//	fwrite(emp_arr, sizeof(emp_arr), 1, fp2);
//	fclose(fp2);
//}
////查看emp文件的内容

//struct emp {
//	char name[32];
//	int salary;
//};
//int main(void) {
//	int i;
//	FILE *fp;
//	char name[32];
//	struct emp emp_arr[5];
//	fp = fopen("emp", "rb");
//	fread(emp_arr, sizeof(emp_arr), 1, fp);
//	fclose(fp);
//	printf("name:");
//	scanf("%s", &name);
//	fp = fopen("emp", "wb");
//	for (i = 0; i<5; i++) {
//		if (strcmp(emp_arr[i].name, name) == 0) {
//			continue;
//		}
//		fwrite(&emp_arr[i], sizeof(emp_arr[i]), 1, fp);
//	}
//	fclose(fp);
//}
////删除ggg后的源文件内容


//int main(void) {
//	int i;
//	FILE *fp = fopen("tmp.txt", "w");
//	char buf[1024] = {};
//	while (fgets(buf, 1024, stdin) != NULL) {
//		fputs(buf, fp);
//		memset(buf, 0x00, sizeof(buf));
//	}
//	fclose(fp);
//	fp = fopen("tmp.txt", "r");
//	while (!feof(fp)) {
//		memset(buf, 0x00, sizeof(buf));
//		fgets(buf, 1024, fp);
//		for (i = 0; buf[i] != '\0'; i++) {
//			if (buf[i] >= 'a' && buf[i] <= 'z')
//				printf("%c", buf[i] - 32);
//			else
//				printf("%c", buf[i]);
//		}
//	}
//	fclose(fp);
//}