#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


//void swap(int *p_a, int *p_b)
//{
//	int temp = *p_a;
//	*p_a = *p_b;
//	*p_b = temp;
//}
//int main()
//{
//	int a, b, c, *p_a = &a, *p_b = &b, *p_c = &c; // 获取每个变量空间的地址
//	printf("Please enter three numbers:");
//	scanf_s("%d%d%d", p_a, p_b, p_c);
//	if (*p_a > *p_b) {
//		swap(p_a, p_b);//通过指针进行指向空间内的数据交换
//	}
//	if (*p_a > *p_c) {
//		swap(p_a, p_c);
//	}
//	if (*p_b > *p_c) {
//		swap(p_b, p_c);
//	}
//	printf("%d %d %d\n", *p_a, *p_b, *p_c);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str[3][32];
//	char *p[3];
//	printf("Please enter three strings:>\n");
//	for (int i = 0; i < 3; i++) {
//		p[i] = str[i];
//		scanf("%s", p[i], 32);//后边的数字限制缓冲区边界，防止缓冲区溢出访问越界
//	}
//	//让p[0]和p[1]/p[2]分别进行比较，找出最大的字符串，i+1之后，则让p[1]和p[2]进行比较，找出第二大
//	//i循环总个数-1次,最后一个是不需要比较的
//	for (int i = 0; i < 2; i++) {
//		for (int j = i + 1; j < 3; j++) {
//			if (strcmp(p[i], p[j]) > 0) {
//				char *tmp = p[i]; p[i] = p[j]; p[j] = tmp;
//			}
//		}
//	}
//	printf("%s %s %s\n", p[0], p[1], p[2]);
//	return 0;
//}

//void input(int *arry, int len)
//{
//	for (int i = 0; i < len; i++) {
//		scanf_s("%d", &arry[i]);
//	}
//}
//void print(int *arry, int len)
//{
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arry[i]);
//	}
//	printf("\n");
//}
//void handle(int *arry, int len)
//{
//	int max_num = arry[0], min_num = arry[0];
//	int *p_max = NULL, *p_min = NULL;
//	for (int i = 1; i < len; i++) {
//		if (min_num > arry[i]) {//逐个比对后找出最小值
//			min_num = arry[i];
//			p_min = &arry[i]; //逐个比对后找到最小值的空间地址
//		}
//		if (max_num < arry[i]) {//逐个比对后找出最大值
//			max_num = arry[i];
//			p_max = &arry[i]; //逐个比对后找到最大值的空间地址
//		}
//	}
//	int tmp;
//	tmp = *p_min; *p_min = arry[0]; arry[0] = tmp; //最小值与第一个数据交换
//	tmp = *p_max; *p_max = arry[len - 1]; arry[len - 1] = tmp;//最大值与最后一个数据交换
//}
//
//int main()
//{
//	int arry[10];
//	printf("Please enter ten nums:>\n");
//	input(arry, 10);
//	handle(arry, 10);
//	print(arry, 10);
//	return 0;
//}

//void move(int *arry, int n, int m)
//{
//	int end_idx = n - m;//找到倒数第m个数据的位置，也就是要移动到数组首部的数据的起始位置
//	for (int i = 0; i < m; i++) {
//		int *p = arry + end_idx + i;//从倒数第m个数据的位置开始逐渐向后偏移直到数组尾部
//		int tmp = *p;//获取到这个位置的值，用于数组前边数据向后偏移1位之后，向数组第i位赋值
//		for (int j = end_idx + i; j > i; j--) {//从第i位开始逐个向后偏移一位
//			*p = *(p - 1);
//			p--;
//		}
//		*(arry + i) = tmp;//数组的前第i个数字逐个替换为后边被覆盖的值
//	}
//}
//
//int main()
//{
//	int number[32], n, m, i;
//	printf("Please enter the number of numbers: ");
//	scanf("%d", &n);//先确定要输入多少个数字
//	printf("Please enter %d numbers: ", n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &number[i]);//输入指定个数的数字
//	}
//	printf("Number of positions to move: ");
//	scanf("%d", &m);//确定要向后移动多少个位置
//	move(number, n, m);
//	for (i = 0; i < n; i++) {
//		printf("%d ", number[i]);
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int people[128], n;
//	printf("Please input how many people: ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		people[i] = i + 1; //对每个人顺序排号
//	}
//	int remain = n;
//	int num_off = 1;
//	int *p = NULL;
//	while (remain > 1) {
//		p = people;
//		while (p != people + n) { // 每次从第一个位置开始，直到最后一个位置,报数是一直递增的
//			if ((*p) != 0) {//若这个位置人还在
//				num_off++; //则报数
//				if (num_off == 3) {//否则当前的人即将要报的数字是3
//					*p = 0; //则剔除这个人
//					num_off = 1; //并且重新开始计数，下边会++，所以是从1开始报数
//					remain--;//剩余人数-1
//				}
//			}
//			p++;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (people[i] != 0) {
//			printf("Serial number of the remaining person:%d\n", people[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int mystrlen(char *str)
//{
//	int len = 0;
//	char *ptr = str;
//	while (*ptr != '\0') {
//		ptr++;
//		len++;
//	}
//	return len;
//}
//
//int main()
//{
//	char buf[1024];
//	printf("Please enter a string: ");
//	scanf_s("%s", buf, 1024);
//	printf("string len:%d\n", mystrlen(buf));
//	return 0;
//}

//int main()
//{
//	char buf1[1024], buf2[1024];
//	printf("Please enter a string: ");
//	scanf("%s", buf1, 1024);
//	int m;
//	printf("Please enter a location to start copying: ");
//	scanf("%d", &m);
//	if (m < 0 || m > strlen(buf1)) {//检测输入的位置是否合法
//		printf("Illegal location entered\n");
//		return -1;
//	}
//	char *ptr1 = buf1 + m; // 从第m个位置开始复制新数据
//	char *ptr2 = buf2;
//	while (*ptr1 != '\0') {
//		*ptr2++ = *ptr1++;
//	}
//	*ptr2 = '\0';//不要忘了字符串结尾标志
//	printf("%s\n", buf2);
//	return 0;
//}


//int main(void) {
//	int head = 1;
//	int tail = 100;
//	int guess = (head + tail) / 2;
//	/* 定义三个变量分别标识查找区域的起始、终止位置以及中数 */
//	char ch;
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with an n if it is wrong.\n");
//	do{
//		printf("Un...is your number %d?: ", guess);
//		if (getchar() == 'y') break;
//		printf("Well, then, %d is larger or smaller than yours? (l or s):", guess);
//		while ((ch = getchar()) == '\n') continue;
//		if (ch == 'l' || ch == 'L'){
//			tail = guess - 1;
//			guess = (head + tail) / 2;
//			continue;
//			/* 如果输入L，则表示目标数在区间的前半区，因此可以舍弃中数到终止位置的后半区数据，
//			* 随后切换变量 tail 和中数 guess */
//		}
//		else if (ch == 's' || ch == 'S'){
//			head = guess + 1;
//			guess = (head + tail) / 2;
//			continue;
//			/* 如果输入S，则表示目标数在区间的后半区，因此可以舍弃起始数到中数前半区数据，
//			* 随后切换变量 head 和中数 guess */
//		}
//		else{ continue; }
//	} while (getchar() != 'y');
//
//	printf("I knew i could do it!\n");
//	return 0;
//}
