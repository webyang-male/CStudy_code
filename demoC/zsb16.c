#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main(void){
//	int length;
//	double sum = 0.0;
//	printf("Enter the limit length: ");
//	scanf("%d", &length);
//	while (length>0){
//		sum = 0.0;
//		for (int i = 1; i <= length; i++){
//			sum = sum + 1.0 / i;
//		}
//		/* ���� 1 + 1/2 + 1/3 ���� */
//		printf("The sum for 1.0 +...+ 1.0/%d.0 is %lf\n", length, sum);
//		sum = 0.0;
//		for (int i = 1; i <= length; i++){
//			if (i % 2 == 0) sum = sum - 1.0 / i;
//			else sum = sum + 1.0 / i;
//		}
//		/* ���� 1 - 1/2 + 1/3 - 1/4 ����*/
//		printf("The sum for 1.0 -...+ 1.0/%d.0 is %lf\n", length, sum);
//
//		sum = 0.0;
//		for (int i = 1; i <= length; i++){
//			if (i % 2 != 0) sum = sum + 2 * 1.0 / i;
//		}/* �������кͣ�ֻ���������ż�����������*/
//		printf("The sum for 1.0 + 1.0+ 2.0/3.0+...+ 2.0/%d.0 is %lf\n", length, sum);
//
//		printf("Enter the limit length: ");
//		scanf("%d", &length);
//	}
//	printf("\nDone!\n");
//	return 0;
//}

//int main(void){
//	int data[8];
//	data[0] = 2;
//	/* ��ʼ����һ��Ԫ��Ϊ2��һ���� */
//	for (int i = 1; i < 8; i++){
//		data[i] = data[i - 1] * 2;
//	}
//	/* 2 �� n ���ݵ��� 2���� 2��n-1���ݡ�*/
//	int i = 0;
//	do{
//		printf("%d  ", data[i++]);
//	} while (i<8);
//
//	printf("\nDone!\n");
//	return 0;
//}


//int main(){
//	double first[8], second[8];
//	printf("Enter 8 data to the FIRST array: ");
//	for (int i = 0; i < 8; i++){
//		scanf("%lf", &first[i]);
//	}
//	/* ��ȡ�û������ 8 �����ݣ�����ֵ����һ�����顣*/
//	for (int i = 0; i < 8; i++){
//		double sum = 0;
//		for (int j = 0; j <= i; j++){
//			sum = sum + first[j];
//		}
//		second[i] = sum;
//	}
//	/* ʹ��Ƕ��ѭ���������һ�������ǰ N ��͡�
//	* Ҳ����ʹ�õ�ѭ�����������£�
//	*     second[0] = first[0];
//	*  for(int i = 1;i < 8;i++){
//	*    second[i] =  second[i-1] + first[i];
//	*   }
//	* */
//	printf("All the data of  two array:\n");
//	printf("First  Array: ");
//	for (int i = 0; i < 8; i++){
//		printf("%12lf. ", first[i]);
//	}
//	printf("\nSecond Array: ");
//	for (int i = 0; i < 8; i++){
//		printf("%12lf. ", second[i]);
//	}
//
//	printf("\nDone!\n");
//	return 0;
//}
//


//int main(void){
//	float daphne, deirdre;
//	daphne = deirdre = 100.0;
//	int year = 0;
//	do{
//		daphne = daphne + 100 * 0.1;
//		deirdre = deirdre + deirdre*0.05;
//		year++;
//		/* �������˵�ÿ����Ϣ��ԭʼͶ�ʵ��ܺ�*/
//	} while ((deirdre - daphne) < 0);
//	/* daphne����deirdre �˳�ѭ��*/
//	printf("%d years later.\nDaphne = %f.\nDeirdre= %f \n", year, daphne, deirdre);
//	printf("\nDone!\n");
//	return 0;
//}


//int main(void){
//	float chuckie = 100;
//	int year = 0;
//	do{
//		chuckie = chuckie + chuckie*0.08;
//		chuckie -= 10;
//		year++;
//		printf("%f\n", chuckie);
//	} while (chuckie >=10);
//	/* �˻����С�� 9 �� ����һ�꽫�ᱻȫ��֧ȡ*/
//	printf("%d years later. Chuckie's account %f \n", year, chuckie);
//	printf("%d years later. Chuckie's account is ZERO \n", ++year);
//	printf("\nDone!\n");
//	return 0;
//}


//int main(void){
//	int rabnud = 5;
//	int weeks = 1;
//	while (rabnud < 150){
//		printf("At %d weeks, Rabnud has %4d friends \n", weeks, rabnud);
//		rabnud = 2 * (rabnud - weeks++);
//		/* ����ÿ��rabnud��ʿ��������*/
//	};
//	printf("\nDone!\n");
//	return 0;
//}


//int main(void)
//{
//	char ch;
//	int counter = 0;
//	printf("Please input chars (# for exit):");
//	while ((ch = getchar()) != '#')
//	{
//		if (counter++ % 8 == 0)
//			printf("\n");
//		/* ʹ�ü�������ÿ�˸��ַ���ӡһ�����з���ע�⣺
//		* ���д�����counterΪ 0 ʱ�����ȴ�ӡһ�����з���
//		* */
//		if (ch == '\n')
//			printf("'\\n'-%03d. ", ch);
//		/* ��׼����Ļ��з���Ҫת����ʾ��ʽ���������ܻ���
//		* ����˸��ַ�ʱ�Ͳ����������С�
//		* */
//		else if (ch == '\t')
//			printf("'\\t'-%03d. ", ch);
//		/* ��׼������Ʊ����Ҫת����ʾ��ʽ * */
//		else printf("'%c'-%03d. ", ch, ch);
//		/* �����ַ�ͨ����ӡԭ�ַ���ʮ������ */
//	}
//	printf("Done\n");
//	return 0;
//}


//int main(void)
//{
//	int odd_sum = 0;
//	int even_sum = 0;
//	int odd_count = 0;
//	int even_count = 0;
//	int input = 0;
//	/* ��������ֱ��������ż�����м�������͡�*/
//	printf("Please input numbers(0 for exit):");
//	while (scanf("%d", &input))
//	{
//		if (input == 0) break;
//		if (input % 2 == 0){
//			even_sum = even_sum + input;
//			/* ʹ��+= ������� even_sum += input; */
//			even_count++;
//		}
//		else{
//			odd_sum = odd_sum + input;
//			/* ʹ��+= �������odd_sum += input; */
//			odd_count++;
//		}
//	}
//	printf("Have %d even number, average is %g\n", even_count, 1.0*even_sum / even_count);
//	/* ƽ����Ӧ���Ը�����������ʾ������ȳ���1.0��1.0*even_sum ���������ת��Ϊ���������� */
//	printf("Have %d odd number, average is %g\n", odd_count, 1.0*odd_sum / odd_count);
//	printf("Done\n");
//	return 0;
//}


//int main(void)
//{
//	int counter = 0;
//	int halfpair = 0;
//	/* ����ƥ���� */
//	char ch;
//	printf("Please input chars (# for exit):");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch){
//		case 'e':
//			halfpair = 1;
//			break;
//			/* �ַ� e ƥ����*/
//		case 'i':
//			if (halfpair == 1){
//				counter++;
//				halfpair = 0;
//			}
//			/* ƥ����Ϊ 1 ����ǰһ���ַ�e�Ѿ�ƥ�� ����ʱ iƥ�����������
//			* �������ƥ���ǡ�*/
//			break;
//		default:
//			halfpair = 0;
//			/* �����ַ�e �Ƿ�ƥ�䣬�ַ��� e��i ��������ղ���ƥ����*/
//		}
//	}
//	printf("\nTotally exist %d \'ei\' in all char!\n", counter);
//	printf("Done\n");
//	return 0;
//}

/*
�����£������ϰ 8
*/


//#define EXTRA_HOUR 1.5
//#define BASE_TAX 0.15
//#define EXTRA_TAX 0.2
//#define EXCEED_TAX 0.25
//
//void show_menu(void);/*��ʾ����н�ʵĲ˵�����*/
//float get_hours(void);
///* ��ȡ�û����빤��ʱ���ĺ���*/
//void calc_salary(float base_salary, float hours);
///* ���ݻ���н�ʺ͹���ʱ�����㹤�ʡ�˰��˰���ʵĺ���*/
//int main(void)
//{
//	float hours = 0;
//	char selected;
//	do{
//		show_menu();
//		scanf("%c", &selected);
//		switch (selected){
//		case '1':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(8.75, hours);
//			break;
//			/* ѡ������н�ʣ���ȡ�û�����Ĺ���ʱ��������н�ʣ�˰��˰����*/
//		case '2':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(9.33, hours);
//			break;
//		case '3':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(10.00, hours);
//			break;
//		case '4':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(11.20, hours);
//			break;
//		case '5':
//			break;
//		default:
//			printf("Error selected! please retry!\n");
//			getchar();
//			break;
//		}
//	} while (selected != '5');
//	printf("Done\n");
//	return 0;
//}
//void show_menu(void){
//	/* ��ʾ��ʾ�˵� */
//	char s1[] = "1) $8.75/hr";
//	char s2[] = "2) $9.33/hr";
//	char s3[] = "3) $10.00/hr";
//	char s4[] = "4) $11.20/hr";
//	char s5[] = "5) quit";
//
//	printf("**********************************************************************\n");
//	printf("Enter the number corresponding to the desired pay rate or action\n");
//	printf("%-40s", s1);
//	printf("%-40s\n", s2);
//	printf("%-40s", s3);
//	printf("%-40s\n", s4);
//	printf("%-40s\n", s5);
//	printf("**********************************************************************\n");
//}
//
//void calc_salary(float base_salary, float hours){
//	float salary, tax, taxed_salary;
//
//	if (hours <= 30){
//		/* ����ʱ��С��30�����*/
//		salary = hours*base_salary;
//		tax = salary*BASE_TAX;
//		taxed_salary = salary - tax;
//	}
//	else if (hours <= 40){
//		/* ����ʱ�����40�����*/
//		salary = hours*base_salary;
//		tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX;
//		taxed_salary = salary - tax;
//	}
//	else{
//		/* ��������ʱ��������˰�ռ��� */
//		salary = (40 + (hours - 40)*EXTRA_HOUR)*base_salary;
//		if (salary <= 450) tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX;
//		else tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX + (salary - 450)*EXCEED_TAX;
//		taxed_salary = salary - tax;
//	}
//	printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
//	printf("\ncontinue....\n");
//}


//int main(void) {
//	int counter = 0;
//	char ch;
//	printf("������һ���ַ�:>\n");
//	while ((ch = getchar()) != EOF){
//		if (counter++ == 10){
//			printf("\n");
//			counter = 1;
//		}/*��������������жϴ�ӡ���з��� */
//		if (ch >= '\040'){
//			printf(" \'%c\'--%3d ", ch, ch);
//			/*���ڿո��ַ��Ŀ���ʾΪ�ַ��Ĵ�����ж�*/
//		}
//		else if (ch == '\n'){
//			printf(" \\n--\\n\n ");
//			counter = 0;
//			/*���з��ŵĴ����軻�У�����������*/
//		}
//		else if (ch == '\t'){
//			printf(" \\t--\\t ");
//			/*�Ʊ���Ĵ���*/
//		}
//		else{
//			printf(" \'%c\'--^%c ", ch, (ch + 64));
//			/*��������ʾ�ַ��Ĵ���*/
//		}
//	}
//	return 0;
//}

//#include <ctype.h>
//int main(void) {
//	int lowercase = 0;
//	int uppercase = 0;
//	char ch;
//	printf("������һ����Сд�����ĸ:>");
//	while ((ch = getchar()) != EOF){
//		/*ʹ��ASCII����������ַ������Խ����ж�*/
//		/*if (ch >= 'A' && ch <= 'Z')
//			uppercase++;
//		if (ch >= 'a' && ch <= 'z')
//			lowercase++;*/
//		if (islower(ch)) lowercase++;
//		if (isupper(ch)) uppercase++;
//		
//		/*
//		* if(islower(ch)) lowercase++;
//		* if(isupper(ch)) uppercase++;
//		* ʹ��ctype.h���е��ַ��жϺ��������жϡ������ͷ�ļ�
//		*/
//	}
//	printf("There are %d uppercase, and %d lowercase in that file!\n", uppercase, lowercase);
//	return 0;
//}

//#include <ctype.h>
//
//int main(void) {
//	int words = 0;
//	int letter = 0;
//	char ch;
//	printf("������һ������:>");
//	while ((ch = getchar()) != EOF){
//		if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a'&&ch <= 'z'))
//			letter++;
//		/* ������������ĸ��ASCII����������ķ����ж���ĸ�����⣬Ҳ����ʹ��
//		* isalpha()���������жϣ�ch����ĸ���ط�0��
//		* if(isalpha(ch) != 0) letter++;
//		* */
//		if (ch == ' ' || ch == ',' || ch == '.' || ch == '\n')
//			words++;
//		/* ���������ַ��Ǳ����Ž����жϣ������жϲ��������������������ţ����ʺ�
//		* ����̾�ŵȵ�δ���룬Ҳ��������ASCII�з���������������жϡ�ʹ��ispuncht()
//		* �������Ӽ�㡣���ǣ��ú����޷��жϿո������Ҫȡ"��"��
//		* if(ispunct(ch) != 0 || ch == ' ') words++;
//		* */
//	}
//	printf("There are %d words, and %d character�� %.2f C/W!\n", words, letter, 1.0*letter / words);
//	return 0;
//}
//
