#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main(void){
//	char name[40], surname[40];
//	int wname, wsurname;
//	printf("Please input your first name:");
//	scanf("%s", name);
//	printf("Please input your last name:");
//	scanf("%s", surname);
//	/* ͨ��scanf()�����ֱ��ȡ�û�������*/
//	wname = printf("%s", name);
//	printf(" ");
//	wsurname = printf("%s", surname);
//	/* �ֱ��ӡ�û�������ͨ������ֵ��¼���ַ�������*/
//	printf("\n%*d %*d\n", wname, wname, wsurname, wsurname);
//	/* ��ӡ���ַ�����������������ȷ�������ʹ��*�����η��Ͳ�������ʽ��
//	* ���ʹ��strlen()����������Բ��ö���wname,wsurname������
//	* ֱ��ʹ�����´��룺
//	* printf("\n%*d %*d",strlen(name),strlen(name),strlen(surname),strlen(surname));
//	* */
//	return 0;
//}

//int main(int argc, char *argv[]) {
//	int counter, i = 0;
//	printf("PRINT COUNTINUE 10 NUMBERS!\n");
//	printf("PLEASE INPUT THE START NUMBER :");
//	scanf("%d", &counter);
//	/* ��ȡ�û����룬������counter */
//	while (i++ < 11){
//		printf(" %d \n", counter++);
//	}
//	/* ѭ��ʮ�Σ���ӡ��ΧΪ�������ݿ�ʼ�ĺ�ʮ������ */
//	printf("PROGRAM EXIT!\n");
//	return 0;
//}

//#define WEEK_PER_DAY 7 // ÿ��7��
//int main(int argc, char *argv[]) {
//	int days, weeks, input;
//
//	printf("CONVERT DAYS TO WEEKS!\n");
//	printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");
//	scanf("%d", &input);
//	/* ��ȡ�û����룬������input ���� */
//	while (input > 0){
//		weeks = input / WEEK_PER_DAY;
//		/* �������� */
//		days = input%WEEK_PER_DAY;
//		/* ���㲻��һ�ܵ����� */
//		printf("%d days are %d weeks, %d days\n", input, weeks, days);
//		/* ��ӡ������ */
//		printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");
//		scanf("%d", &input);
//		/* ������һ������ */
//	}
//	printf("PROGRAM EXIT!\n");
//	return 0;
//}

//int main(int argc, char *argv[]) {
//    int first, second;
//    printf("This program computes moduli.\n");
//    printf("Enter an integer to server as the second operand:");
//    scanf("%d",&second);
//    /* �û�����second���ݱ��ֲ��� */
//    printf("Now enter the first operand:");
//    scanf("%d",&first);
//    /* �ֱ��ȡ�û��������� */
//    while(first > 0){
//        printf("%d %% %d is %d\n",first,second,(first%second));
//        printf("Enter next number for first operand( <= 0 to quit):");
//        scanf("%d",&first);
//    }
//    /* ѭ����ȡ�û����롢���㲢��ӡ����� */
//    printf("Done!\n");
//    return 0;
//}


//int Temperatures(double fahrenheit);
//int main(int argc, char *argv[]) {
//	double input;
//	printf("This program convert fahrenheit to celsius and kelvin.\n");
//	printf("Enter a fahrenheit to start : ");
//	while (scanf("%lf", &input) == 1){
//		Temperatures(input);
//		printf("Enter next fahrenheit! ( q to quit): ");
//	}
//	printf("Done!\n");
//	return 0;
//}
//int Temperatures(double fahrenheit){
//	const double F_TO_C = 32.0;
//	const double C_TO_K = 273.16;
//	double celsius, kelvin;
//	celsius = 5.0 / 9.0*(fahrenheit - F_TO_C);
//	kelvin = celsius + C_TO_K;
//	printf("%.2f. fahrenheit, equal %.2f celsius, and %.2f kelvin\n", fahrenheit, celsius, kelvin);
//	return 0;
//}


//int main(void){
//	char alphabet[26];
//	int i;
//	char c = 'a';
//	/* �������i ��Ϊ������±꣬c ��Ϊ���ַ� a ��ʼ����
//	* ���26����ĸ��*/
//	for (i = 0; i < 26; i++, c++)
//		alphabet[i] = c;
//	/* for ѭ�� ��ѭ�����²��֣��������±�� ��ĸ��*/
//	for (i = 0; i < 26; i++)
//		printf("%c ", alphabet[i]);
//	return 0;
//}

//int main(void){
//	int i, j, num;
//	char c;
//	printf("Enter the core char you want to print(A...Z):");
//	scanf("%c", &c);
//	char ch = 'A';
//	num = c - 'A' + 1;
//	/* �����ַ���ASCII���ȥ 'A' �� 1�ĵ�ʮ���ƽ�� num
//	* num������Ҫ��ӡ�Ĵ� A ��ʼ���ַ�����Ҳ�Ǵ�ӡ�������� */
//	for (i = 1; i <= num; i++){
//		/* �ⲿѭ�����ƴ�ӡ������ num Ϊ�����ַ��� A �Ĳ�� 1* */
//		for (j = 0; j < num - i; j++)
//			printf(" ");
//		/* ��ӡ�ո񣬿ո���Ϊ���ַ�����ȥ��ǰ��Ӧ��ӡ���ַ�����
//		* ��������Ӧ��ӡ�ո��� + Ӧ��ӡ�ַ��� = ���ַ�������������*/
//		for (ch = 'A'; j < num; j++)
//			printf("%c", ch++);
//		/* ��ӡ�����ַ�������Ҫch��������������ʼֵ j �ڿո��Ѿ�ͨ��ѭ��
//		* ���˳�ʼ������ˣ�ֻ��ӡʣ���ַ����� */
//		for (j = 1, ch -= 2; j < i; j++, ch--)
//			printf("%c", ch);
//		/* ��ӡ�����ַ����ַ����ݼ�������*/
//		printf("\n");
//	}
//	return 0;
//}

//int main(void){
//	char word[30];
//	printf("Please enter the words: ");
//	scanf("%s", word);
//	/* scanf()������ȡ�û����룬������word�ַ����顣*/
//	printf("The word you enter is : %s\n", word);
//	printf("The reverse word you enter is : ");
//	for (int i = strlen(word) - 1; i >= 0; i--){
//		printf("%c", word[i]);
//	}
//	printf("\n");
//	/* �����ӡ���±�ֵͨ��strlen()������á�strlen()���صĳ���ֵ
//	* ������'\0',���������±��0��(����-1)*/
//	return 0;
//}


//int main(){
//	int lower, upper;
//	printf("Enter lower and upper integer limits: ");
//	scanf("%d %d", &lower, &upper);
//	/* ʹ��scanf()������ȡ ��������ֵ��*/
//	while (upper > lower){
//		/* �ж��û�������������ֵ*/
//		int sum = 0;
//		for (int i = lower; i <= upper; i++){
//			sum +=   i*i;
//			/* forѭ������ƽ����*/
//		}
//		printf("The sum of the squares form %d to %d is %d\n", lower, upper, sum);
//		printf("Enter lower and upper integer limits: ");
//		scanf("%d %d", &lower, &upper);
//		/* �û��ٴ����룬��������ֵ*/
//	}
//	printf("Done!");
//	return 0;
//}