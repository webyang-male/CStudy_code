#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<math.h>

////���Լ��
//size_t GCD(size_t a, size_t b)
//{
//	size_t gcd;
//	gcd = a > b ? b : a;
//	while (gcd > 1)
//	{
//		if ((a % gcd == 0) && (b % gcd == 0))
//			return gcd;
//		gcd--;
//	}
//	return gcd;
//}
////��С������
//size_t LCM(size_t a, size_t b)
//{
//	size_t lcm;
//	lcm = a > b ? a : b;
//	while (1)
//	{
//		if ((lcm % a == 0) && (lcm % b == 0))
//			break;
//		lcm++;
//	}
//	return lcm;
//}
//int main()
//{
//	size_t a, b, result;
//	printf("��������������:>");
//	scanf("%d %d", &a, &b);
//	result = GCD(a, b);
//	printf("%d��%d�����Լ��Ϊ:%d\n", a, b, result);
//	result = LCM(a, b);
//	printf("%d��%d����С������Ϊ:%d\n", a, b, result);
//	return 0;
//}


////x1Ϊ��һ������x2Ϊ�ڶ�����
//float x1, x2, disc, p, q;
//void greater_than_zero(float a, float b)
//{
//	float m = sqrt(disc);
//	x1 = (-b + sqrt(disc)) / (2 * a);
//	x2 = (-b - sqrt(disc)) / (2 * a);
//}
//void equal_to_zero(float a, float b)
//{
//	x1 = x2 = (-b) / (2 * a);
//}
//void smaller_than_zero(float a, float b)
//{
//	p = -b / (2 * a);
//	q = sqrt(-disc) / (2 * a);
//}
//int main()
//{
//	int a, b, c;
//	printf("������ a b c:");
//	scanf("%d %d %d", &a, &b, &c);
//	printf("���ʽΪ: %d*x^2+%d*x+%d = 0\n", a, b, c);
//	disc = b*b - 4 * a*c;
//	if (disc > 0)
//	{
//		greater_than_zero(a, b);
//		printf("disc>0�ĸ�Ϊ: x1=%f x2=%f\n", x1, x2);
//	}
//	else if (disc == 0)
//	{
//		equal_to_zero(a, b);
//		printf("disc==0�ĸ�Ϊ:x1=%f x2=%f\n", x1, x2);
//	}
//	else
//	{
//		smaller_than_zero(a, b);
//		printf("disc<0�ĸ�Ϊ:x1=%f+%f x2=%f-%f\n", p, q, p, q);
//	}
//	return 0;
//}

//#include <stdbool.h>
//bool IsPrime(int value)
//{
//	for (int i = 2; i<value / 2; ++i)
//	{
//		if (value % i == 0) //˵������1�ͱ���֮�⣬���ܱ�����������
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int value;
//	bool flag;
//	printf("������ value :>");
//	scanf("%d", &value);
//	flag = IsPrime(value);
//	if (flag)
//		printf("%d ������.\n", value);
//	else
//		printf("%d ��������.\n", value);
//	return 0;
//}


//void PrintArray(int ar[3][3])
//{
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			printf("%d ", ar[i][j]);
//		}
//		printf("\n");
//	}
//}
//void ReverseArray(int ar[3][3])
//{
//	int tmp;
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			if (i != j) //�м����������仯
//			{
//				//����������
//				tmp = ar[i][j];
//				ar[i][j] = ar[j][i];
//				ar[j][i] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int array[3][3] =
//	{
//		{ 1, 2, 3 },
//		{ 4, 5, 6 },
//		{ 7, 8, 9 }
//	};
//	printf("ת��ǰ��\n");
//	PrintArray(array);
//	//��������ת��
//	ReverseArray(array);
//	printf("ת�ú�\n");
//	PrintArray(array);
//	return 0;
//}

//void ReverseString(char str[])
//{
//	int start, end;
//	char tmp;
//	start = 0;
//	end = strlen(str) - 1; //�ַ�����С���0��ʼ������-1
//	while (start < end)
//	{
//		tmp = str[start];
//		str[start] = str[end];
//		str[end] = tmp;
//		start++;
//		end--;
//	}
//}
//
//int main()
//{
//	char str[100] = { 0 };
//	printf("�������ַ���:>");
//	scanf("%s", str);
//	printf("ԭʼ�ַ���Ϊ:> %s\n", str);
//	ReverseString(str);
//	printf("�����ַ���Ϊ:> %s\n", str);
//	return 0;
//}

//void ConcatStr(char string1[], char string2[], char string[])
//{
//	int i, j;
//	for (i = 0; string1[i] != '\0'; i++)
//		string[i] = string1[i];
//	//�ҵ��ַ���ĩβ�����������������ַ���
//	for (j = 0; string2[j] != '\0'; j++)
//		string[i + j] = string2[j];
//	//�ַ���ĩβ���Ͻ����� \0
//	string[i + j] = '\0';
//}
//int main()
//{
//	char s1[200] = { 0 }, s2[100] = { 0 }, s[100] = { 0 };
//	printf("input string1:");
//	scanf("%s", s1);
//	printf("input string2:");
//	scanf("%s", s2);
//	ConcatStr(s1, s2, s);
//	printf("\nThe new string is %s\n", s);
//	return 0;
//}

//void cpy(char s[], char c[])
//{
//	int i, j;
//	for (i = 0, j = 0; s[i] != '\0'; i++)
//	{
//		//�ж�Ԫ����ĸ
//		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
//			s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
//			s[i] == 'u' || s[i] == 'U')
//		{
//			c[j] = s[i];
//			j++;
//		}
//	}
//	c[j] = '\0';
//}
//int main()
//{
//	char str[80], c[80];
//	printf("input string:");
//	gets(str);
//	cpy(str, c); //��str�е�Ԫ����ĸ������c��
//	printf("The vowel letters are:%s\n", c);
//	return 0;
//}

//void OutString(char str[])
//{
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		printf("%c", str[i]);
//		if (str[i + 1] == '\0') //������һ���ո����
//			break;
//		printf("%c", ' ');
//		i++;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	char str[5] = { 0 };
//	printf("input four digits:");
//	scanf("%s", str);
//	OutString(str);
//	return 0;
//}

//int letter, digit, space, others;
//void CountChar(char str[])
//{
//	int i;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		//ͳ����ĸ
//		if ((str[i] >= 'a'&& str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
//			letter++;
//		else if (str[i] >= '0' && str[i] <= '9') //ͳ������
//			digit++;
//		else if (str[i] == ' ')//ͳ�ƿո�
//			space++;
//		else
//			others++; //ͳ�������ַ�
//	}
//}
//int main()
//{
//	char text[80];
//	printf("input string:\n");
//	gets(text);
//	printf("string: %s\n", text);
//	CountChar(text);
//	printf("\nletter:%d\ndigit:%d\nspace:%d\nothers:%d\n", letter, digit, space,
//		others);
//	return 0;
//}

//void findLongWord(char str[], char word[]){
//	int i, j;
//	i = j = 0;
//	int len = 0;//ͳ�Ƴ���
//	while (str[i] != '\0')
//	{
//		j = i;
//		while (str[j] != ' '&& str[j] != '\0')
//			j++;
//		len = j - i;//���ʳ���
//		if (len > strlen(word))
//		{
//			strncpy(word, str + i, len);//������ʱ�����
//		}
//		j++;
//		i = j;
//	}
//}
//
//int main()
//{
//	char line[256] = "The best thing is studying with you.";
//	char word[256] = { 0 };
//
//	findLongWord(line, word);
//	printf("��ĵ���Ϊ:%s\n", word);
//	return 0;
//}


//void BubbleSort(char str[])
//{
//	int i, j;
//	char tmp;
//	int len = strlen(str);
//	for (i = 0; i<len - 1; ++i)
//	{
//		for (j = 0; j<len - i - 1; ++j)
//		{
//			if (str[j] > str[j + 1])
//			{
//				tmp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i;
//	char str[11] = { 0 };
//	printf("������10���ַ�:>");
//	for (i = 0; i<10; ++i)
//		scanf("%c", &str[i]);
//	BubbleSort(str);
//	printf("�������: %s\n", str);
//	return 0;
//}

//float solut(int a, int b, int c, int d)
//{
//	float x = 1, x0, f, f1;
//	do
//	{
//		x0 = x;
//		f = ((a*x0 + b)*x0 + c)*x0 + d;
//		f1 = (3 * a*x0 + 2 * b)*x0 + c;
//		x = x0 - f / f1;
//	} while (fabs(x - x0) >= 1e-3);
//	return(x);
//}
//int main()
//{
//	int a, b, c, d;
//	printf("input a,b,c,d:");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("x=%10.7f\n", solut(a, b, c, d));
//	return 0;
//}


