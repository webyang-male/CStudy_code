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
//				//交换的是地址
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
//	printf("请输入字符串个数:>\n");
//	int n;
//	scanf("%d", &n);
//	printf("请输入%d个字符串:>\n",n);
//	for (int i = 0; i < n; i++){
//		scanf("%s", p_str[i]);
//	}
//
//	//n表示数组元素个数
//	strsort(p_str, n);
//	//打印输出结果
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
//	printf("请输入10个数值:>\n");
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
//			sum += arry[i][j]; //计算总分用于计算平均分
//			if (arry[i][j] > 85) {
//				count++; //若每门课都大于85则count总会与j同步++
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
//			int len = 1;//用于统计连续数字的个数
//			while (*(ptr + i + len) >= '0' && *(ptr + i + len) <= '9' && (i + len)
//				< str_len) {//找出从当前位置连续数字的个数
//				len++;
//			}
//			int sum = *(ptr + i + len - 1) - '0';//先获取个位数的数据
//			int unit = 1;//每一位的单位，从十位开始每次乘以10作为单位
//			for (int j = len - 2; j >= 0; j--) {//从右往左逐个处理
//				unit *= 10;
//				sum += (*(ptr + i + j) - '0') * unit;
//			}
//			digit[count++] = sum;
//			i += len; // i需要加上len的长度，越过这个数字，				
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
//	printf("请输入一串带有数字的字符串:\n");
//	gets_s(buf, 1024);
//	count_digit(buf);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	char str[32] = { 0 };
//	printf("请输入一串带有数字的字符串:\n");
//	gets(str);
//
//	int array[32] = { 0 };//存储数字数组
//	int count = 0;//统计多少个数字
//	int  *ptr = str;//字符串起始处
//
//	while (*ptr != '\0')
//	{
//		//判断数字字符
//		if (*ptr >= '0'&& *ptr <= '9'){
//			while (*ptr >= '0'&& *ptr <= '9')
//			{
//				*(array + count) = *(array + count) * 10 + (*ptr - '0');
//				ptr++;//遇到非数字则跳出循环
//			}
//			count++;
//		}
//		ptr++;
//	}
//	printf("总共有%d个数字字符:\n", count);
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
//	if (*ptr1 == '\0' || *ptr2 == '\0') {//注意一个字符串到达结尾或者两个都到达结尾的情况
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
//	printf("before new p--%p:%s\n", str, str);//申请空间之前，查看指针的地址和指向空间数据
//
//	str = (char*)mynew(num);
//	printf("after new p--%p:%s\n", str, str);//申请空间之后，查看指针的地址和指向空间数据
//
//	printf("Please enter a string:");
//	scanf_s("%s", str, num);
//	printf("before free p--%p:%s\n", str, str);//释放空间之前，查看指针的地址和指向空间数据
//
//	myfree(str);
//	printf("after free p--%p:%s\n", str, str);//释放空间之后，查看指针的地址和指向空间数据
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
//			if (strcmp(s[i], s[j])> 0){//s[i]保存的就是一个字符串的首地址
//				char *tmp = s[i]; //指针的好处在于直接通过赋值可以改变指向
//				s[i] = s[j]; //只要交换了字符串的地址就实现了字符串的交换
//				s[j] = tmp;//因此通过指针指向的交换就能够实现数组中字符串的排序
//			}
//		}
//	}
//}
//int main()
//{
//	char *str[5];//定义字符串指针数组，可以分别保存指向5个字符串所在空间首地址
//	printf("Please enter five strings:\n");
//	for (int i = 0; i < 5; i++) {
//		str[i] = malloc(32);//为每一个指针分配空间
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
//			//s[i]就是s指针数组中第i个元素保存的一级指针，再次解引用就是最终的数据空间
//			if (*(s[i]) > *(s[j])) {
//				int tmp = *(s[i]); //指针的好处在于直接通过赋值可以改变指向
//				*(s[i]) = *(s[j]); //只要交换了字符串的地址就实现了字符串的交换
//				*(s[j]) = tmp;//因此通过指针指向的交换就能够实现数组中字符串的排序
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
//	integers = (int*)malloc(count * sizeof(int));//为指针申请count个int空间用于存放输入的数据
//
//	int **p = (int **)malloc(count * sizeof(int*));//为指针申请count个int*空间用于存放int空间的首地址
//
//	printf("Please enter %d integers: \n", count);
//	for (int i = 0; i < count; i++) {
//		p[i] = integers + i; //将数组中每个int元素空间的首地址赋值给指针数组中的各个元素
//		scanf_s("%d", p[i]);//p[i]就保存时第i个数据的地址，因此这里不用取地址
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