#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//void sort(char s[10][32])
//{
//	int i, j;
//	for (i = 0; i < 10; i++){
//		for (j = i; j < 10; j++){
//			if (strcmp(s[i], s[j])> 0){
//				char tmp[32];
//				strcpy(tmp, 32, s[i]);
//				strcpy(s[i], 32, s[j]);
//				strcpy(s[j], 32, tmp);
//			}
//		}
//	}
//}
//int main()
//{
//	char str[10][32];
//	printf("Please enter ten strings:\n");
//	for (int i = 0; i < 10; i++){
//		scanf("%s", str[i], 32);
//	}
//	sort(str);
//	printf("\n");
//	for (int i = 0; i < 10; i++){
//		printf("%s\n", str[i]);
//	}
//	return 0;
//}

//void strsort(char *p_str[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (strcmp(*(p_str + i), *(p_str + j)) < 0)
//			{
//				//�������ǵ�ַ
//				char *tmp = *(p_str+i);
//				*(p_str + i) = *(p_str + j);
//				*(p_str + j) = tmp;
//			}
//		}
//	}
//	return;
//}
//int main()
//{
//	char str_array[32][32];
//	char *p_str[32];
//	for (int i = 0; i < 32; i++){
//		p_str[i] = str_array[i];
//	}
//	printf("�������ַ�������:>\n");
//	int n;
//	scanf("%d", &n);
//	printf("������%d���ַ���:>\n",n);
//	for (int i = 0; i < n; i++){
//		scanf("%s", p_str[i]);
//	}
//
//	//n��ʾ����Ԫ�ظ���
//	strsort(p_str, n);
//	//��ӡ������
//	for (int i = 0; i < n; i++){
//		printf("%s\n", p_str[i]);
//	}
//	return 0;
//}


//void reorder(int *arry, int n)
//{
//	int *start = arry;
//	int *end = arry + n - 1;
//	for (; start < end; start++, end--) {
//		int tmp = *start;
//		*start = *end;
//		*end = tmp;
//	}
//	return;
//}
//int main()
//{
//	int arry[10];
//	printf("������10����ֵ:>\n");
//	for (int i = 0; i < 10; i++) {
//		scanf_s("%d", &arry[i]);
//	}
//	reorder(arry, 10);
//	printf("\n");
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arry[i]);
//	}
//	printf("\n");
//	return 0;
//}

//float avg(int arry[][5], int n)
//{
//	float sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += arry[i][0];
//	}
//	printf("Average of course 1:%f\n", (sum / n));
//	return (sum / n);
//}
//void fail(int arry[][5], int n)
//{
//	printf("Information on students who fail in more than two courses: ");
//	for (int i = 0; i < n; i++) {
//		int sum = 0, fail_count = 0;
//		for (int j = 0; j < 5; j++) {
//			if (arry[i][j] < 60) {
//				fail_count++;
//			}
//		}
//		if (fail_count <= 2) {
//			continue;
//		}
//		printf("seq:%d ", i + 1);
//		printf("score: ");
//		for (int j = 0; j < 5; j++) {
//			sum += arry[i][j];
//			printf("%d ", arry[i][j]);
//		}
//		printf("avg:%d ", sum / 5);
//		printf("\n");
//	}
//	return;
//}
//void excellent(int arry[][5], int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++) {
//		int sum = 0, count = 0;
//		for (j = 0; j < 5; j++) {
//			sum += arry[i][j]; //�����ܷ����ڼ���ƽ����
//			if (arry[i][j] > 85) {
//				count++; //��ÿ�ſζ�����85��count�ܻ���jͬ��++
//			}
//		}
//		if ((sum / 5) > 90 || count == j) {
//			printf("Excellent students: %d\n", i + 1);
//		}
//	}
//	return;
//}
//int main()
//{
//	int arry[4][5];
//	printf("Please enter a 4x5 matrix:\n");
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 5; j++) {
//			scanf_s("%d", &arry[i][j]);
//		}
//	}
//	avg(arry, 4);
//	fail(arry, 4);
//	excellent(arry, 4);
//	printf("\n");
//	return 0;
//}


//void count_digit(char *str)
//{
//	int digit[32], count = 0;
//	char *ptr = str;
//	int i = 0, str_len = strlen(str);
//	while (i < str_len) {
//		if (*(ptr + i) >= '0' && *(ptr + i) <= '9') {
//			int len = 1;//����ͳ���������ֵĸ���
//			while (*(ptr + i + len) >= '0' && *(ptr + i + len) <= '9' && (i + len)
//				< str_len) {//�ҳ��ӵ�ǰλ���������ֵĸ���
//				len++;
//			}
//			int sum = *(ptr + i + len - 1) - '0';//�Ȼ�ȡ��λ��������
//			int unit = 1;//ÿһλ�ĵ�λ����ʮλ��ʼÿ�γ���10��Ϊ��λ
//			for (int j = len - 2; j >= 0; j--) {//���������������
//				unit *= 10;
//				sum += (*(ptr + i + j) - '0') * unit;
//			}
//			digit[count++] = sum;
//			i += len; // i��Ҫ����len�ĳ��ȣ�Խ��������֣�				
//			continue;
//		}
//		i++;
//	}
//	for (int i = 0; i < count; i++) {
//		printf("%d ", digit[i]);
//	}
//	return;
//}
//
//int main()
//{
//	char buf[1024] = { 0 };
//	printf("������һ���������ֵ��ַ���:\n");
//	gets_s(buf, 1024);
//	count_digit(buf);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	char str[32] = { 0 };
//	printf("������һ���������ֵ��ַ���:\n");
//	gets(str);
//
//	int array[32] = { 0 };//�洢��������
//	int count = 0;//ͳ�ƶ��ٸ�����
//	int  *ptr = str;//�ַ�����ʼ��
//
//	while (*ptr != '\0')
//	{
//		//�ж������ַ�
//		if (*ptr >= '0'&& *ptr <= '9'){
//			while (*ptr >= '0'&& *ptr <= '9')
//			{
//				*(array + count) = *(array + count) * 10 + (*ptr - '0');
//				ptr++;//����������������ѭ��
//			}
//			count++;
//		}
//		ptr++;
//	}
//	printf("�ܹ���%d�������ַ�:\n", count);
//
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", *(array + i));
//	}
//	return 0;
//}

//int mystrcmp(char *str1, char *str2)
//{
//	char *ptr1 = str1;
//	char *ptr2 = str2;
//	int res;
//	while (*ptr1 != '\0' && *ptr2 != '\0') {
//		if (*ptr1 != *ptr2) {
//			res = *ptr1 - *ptr2;
//			break;
//		}
//		ptr1++;
//		ptr2++;
//	}
//	if (*ptr1 == '\0' || *ptr2 == '\0') {//ע��һ���ַ��������β���������������β�����
//		res = *ptr1 - *ptr2;
//	}
//	return res;
//}
//
//int main()
//{
//	char buf1[1024] = { 0 };
//	char buf2[1024] = { 0 };
//	while (1) {
//		printf("Please enter two strings:\n");
//		gets_s(buf1, 1024);
//		gets_s(buf2, 1024);
//		printf("mystrcmp:%d", mystrcmp(buf1, buf2));
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int month;
//	char* Month[12] = { "January", "February", "March", "April", "May", "June",
//		"July", "August", "September", "October", "November", "December" };
//		printf("Please enter the month: ");
//		scanf("%d", &month);
//		if (month < 1 && month>12) {
//			printf("Input error, Month should be greater than 0 and less than12\n");
//		}
//		printf("%s\n", Month[month - 1]);
//	return 0;
//}

#include <stdlib.h>

//void *mynew(int n)
//{
//	return malloc(n);
//}
//void myfree(char *p)
//{
//	return free(p);
//}
//int main()
//{
//	int num;
//	char *str = NULL;
//	printf("Please enter number: ");
//	scanf_s("%d", &num);
//	printf("before new p--%p:%s\n", str, str);//����ռ�֮ǰ���鿴ָ��ĵ�ַ��ָ��ռ�����
//
//	str = (char*)mynew(num);
//	printf("after new p--%p:%s\n", str, str);//����ռ�֮�󣬲鿴ָ��ĵ�ַ��ָ��ռ�����
//
//	printf("Please enter a string:");
//	scanf_s("%s", str, num);
//	printf("before free p--%p:%s\n", str, str);//�ͷſռ�֮ǰ���鿴ָ��ĵ�ַ��ָ��ռ�����
//
//	myfree(str);
//	printf("after free p--%p:%s\n", str, str);//�ͷſռ�֮�󣬲鿴ָ��ĵ�ַ��ָ��ռ�����
//
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void sort(char *s[10])
//{
//	int i, j;
//	for (i = 0; i < 10; i++){
//		for (j = i; j < 10; j++){
//			if (strcmp(s[i], s[j])> 0){//s[i]����ľ���һ���ַ������׵�ַ
//				char *tmp = s[i]; //ָ��ĺô�����ֱ��ͨ����ֵ���Ըı�ָ��
//				s[i] = s[j]; //ֻҪ�������ַ����ĵ�ַ��ʵ�����ַ����Ľ���
//				s[j] = tmp;//���ͨ��ָ��ָ��Ľ������ܹ�ʵ���������ַ���������
//			}
//		}
//	}
//}
//int main()
//{
//	char *str[5];//�����ַ���ָ�����飬���Էֱ𱣴�ָ��5���ַ������ڿռ��׵�ַ
//	printf("Please enter five strings:\n");
//	for (int i = 0; i < 5; i++) {
//		str[i] = malloc(32);//Ϊÿһ��ָ�����ռ�
//		scanf_s("%s", str[i], 32);
//	}
//	sort(str);
//	printf("\n");
//	for (int i = 0; i < 5; i++){
//		printf("%s\n", str[i]);
//		free(str[i]);
//	}
//	return 0;
//}

//void sort(int *s[], int len)
//{
//	int i, j;
//	for (i = 0; i < len; i++) {
//		for (j = i; j < len; j++) {
//			//s[i]����sָ�������е�i��Ԫ�ر����һ��ָ�룬�ٴν����þ������յ����ݿռ�
//			if (*(s[i]) > *(s[j])) {
//				int tmp = *(s[i]); //ָ��ĺô�����ֱ��ͨ����ֵ���Ըı�ָ��
//				*(s[i]) = *(s[j]); //ֻҪ�������ַ����ĵ�ַ��ʵ�����ַ����Ľ���
//				*(s[j]) = tmp;//���ͨ��ָ��ָ��Ľ������ܹ�ʵ���������ַ���������
//			}
//		}
//	}
//}
//int main()
//{
//	int *integers;
//	int count = 0;
//	printf("Please enter the number of count: ");
//	scanf_s("%d", &count);
//	integers = (int*)malloc(count * sizeof(int));//Ϊָ������count��int�ռ����ڴ�����������
//
//	int **p = (int **)malloc(count * sizeof(int*));//Ϊָ������count��int*�ռ����ڴ��int�ռ���׵�ַ
//
//	printf("Please enter %d integers: \n", count);
//	for (int i = 0; i < count; i++) {
//		p[i] = integers + i; //��������ÿ��intԪ�ؿռ���׵�ַ��ֵ��ָ�������еĸ���Ԫ��
//		scanf_s("%d", p[i]);//p[i]�ͱ���ʱ��i�����ݵĵ�ַ��������ﲻ��ȡ��ַ
//	}
//	sort(p, count);
//	for (int i = 0; i < count; i++) {
//		printf("%d ", integers[i]);
//	}
//	printf("\n");
//	free(integers);
//	free(p);
//	return 0;
//}