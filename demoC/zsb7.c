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
//	int a, b, c, *p_a = &a, *p_b = &b, *p_c = &c; // ��ȡÿ�������ռ�ĵ�ַ
//	printf("Please enter three numbers:");
//	scanf_s("%d%d%d", p_a, p_b, p_c);
//	if (*p_a > *p_b) {
//		swap(p_a, p_b);//ͨ��ָ�����ָ��ռ��ڵ����ݽ���
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
//		scanf("%s", p[i], 32);//��ߵ��������ƻ������߽磬��ֹ�������������Խ��
//	}
//	//��p[0]��p[1]/p[2]�ֱ���бȽϣ��ҳ������ַ�����i+1֮������p[1]��p[2]���бȽϣ��ҳ��ڶ���
//	//iѭ���ܸ���-1��,���һ���ǲ���Ҫ�Ƚϵ�
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
//		if (min_num > arry[i]) {//����ȶԺ��ҳ���Сֵ
//			min_num = arry[i];
//			p_min = &arry[i]; //����ȶԺ��ҵ���Сֵ�Ŀռ��ַ
//		}
//		if (max_num < arry[i]) {//����ȶԺ��ҳ����ֵ
//			max_num = arry[i];
//			p_max = &arry[i]; //����ȶԺ��ҵ����ֵ�Ŀռ��ַ
//		}
//	}
//	int tmp;
//	tmp = *p_min; *p_min = arry[0]; arry[0] = tmp; //��Сֵ���һ�����ݽ���
//	tmp = *p_max; *p_max = arry[len - 1]; arry[len - 1] = tmp;//���ֵ�����һ�����ݽ���
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
//	int end_idx = n - m;//�ҵ�������m�����ݵ�λ�ã�Ҳ����Ҫ�ƶ��������ײ������ݵ���ʼλ��
//	for (int i = 0; i < m; i++) {
//		int *p = arry + end_idx + i;//�ӵ�����m�����ݵ�λ�ÿ�ʼ�����ƫ��ֱ������β��
//		int tmp = *p;//��ȡ�����λ�õ�ֵ����������ǰ���������ƫ��1λ֮���������iλ��ֵ
//		for (int j = end_idx + i; j > i; j--) {//�ӵ�iλ��ʼ������ƫ��һλ
//			*p = *(p - 1);
//			p--;
//		}
//		*(arry + i) = tmp;//�����ǰ��i����������滻Ϊ��߱����ǵ�ֵ
//	}
//}
//
//int main()
//{
//	int number[32], n, m, i;
//	printf("Please enter the number of numbers: ");
//	scanf("%d", &n);//��ȷ��Ҫ������ٸ�����
//	printf("Please enter %d numbers: ", n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &number[i]);//����ָ������������
//	}
//	printf("Number of positions to move: ");
//	scanf("%d", &m);//ȷ��Ҫ����ƶ����ٸ�λ��
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
//		people[i] = i + 1; //��ÿ����˳���ź�
//	}
//	int remain = n;
//	int num_off = 1;
//	int *p = NULL;
//	while (remain > 1) {
//		p = people;
//		while (p != people + n) { // ÿ�δӵ�һ��λ�ÿ�ʼ��ֱ�����һ��λ��,������һֱ������
//			if ((*p) != 0) {//�����λ���˻���
//				num_off++; //����
//				if (num_off == 3) {//����ǰ���˼���Ҫ����������3
//					*p = 0; //���޳������
//					num_off = 1; //�������¿�ʼ�������±߻�++�������Ǵ�1��ʼ����
//					remain--;//ʣ������-1
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
//	if (m < 0 || m > strlen(buf1)) {//��������λ���Ƿ�Ϸ�
//		printf("Illegal location entered\n");
//		return -1;
//	}
//	char *ptr1 = buf1 + m; // �ӵ�m��λ�ÿ�ʼ����������
//	char *ptr2 = buf2;
//	while (*ptr1 != '\0') {
//		*ptr2++ = *ptr1++;
//	}
//	*ptr2 = '\0';//��Ҫ�����ַ�����β��־
//	printf("%s\n", buf2);
//	return 0;
//}


//int main(void) {
//	int head = 1;
//	int tail = 100;
//	int guess = (head + tail) / 2;
//	/* �������������ֱ��ʶ�����������ʼ����ֹλ���Լ����� */
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
//			/* �������L�����ʾĿ�����������ǰ��������˿���������������ֹλ�õĺ�������ݣ�
//			* ����л����� tail ������ guess */
//		}
//		else if (ch == 's' || ch == 'S'){
//			head = guess + 1;
//			guess = (head + tail) / 2;
//			continue;
//			/* �������S�����ʾĿ����������ĺ��������˿���������ʼ��������ǰ�������ݣ�
//			* ����л����� head ������ guess */
//		}
//		else{ continue; }
//	} while (getchar() != 'y');
//
//	printf("I knew i could do it!\n");
//	return 0;
//}
