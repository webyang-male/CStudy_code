#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2--short����
//	//sizeof�����ı��ʽ������ʵ������
//	printf("%d\n", s);//0
//	return 0;
//}

//int main()
//{
//	int z = 0;
//	//  ~ ��(������)λȡ��
//	//00000000 00000000 00000000 00000000
//	//11111111 11111111 11111111 11111111 - ����
//	//11111111 11111111 11111111 11111110 - ����
//	//10000000 00000000 00000000 00000001 - ԭ��
//	printf("%d\n", ~z);//-1
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//	printf("%d\n", a);//3
//	return 0;
//}

//�ʣ�
//��1������2�������ط��ֱ�������٣�
//��3������4�������ط��ֱ�������٣�

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)--��ƽ̨��ͬ�����������4/8
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)--��ƽ̨��ͬ�����������4/8
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);//����ȥ����������Ԫ�ص�ַ
//	test2(ch);//����ȥ����������Ԫ�ص�ַ
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 5;
//	//int c = a&&b;
//	int c = a||b;
//	printf("%d\n", c);//���1--�� 0--��
//	return 0;
//}

//��������Ľ����ʲô��
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//a++��ʹ�ú�++,������Ϊ0,���治����,֮������Ϊ1
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n i = %d\n", a, b, c, d, i);
//	
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//a++Ϊ��,�����߼��򶼲�����м���,a����1Ϊ2
//	i = a++ || ++b || d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n i = %d\n", a, b, c, d, i);
//	return 0;
//}


//int main()
//{
//
//	int a = 99;
//	int b = 520;
//	int max = 0;
//	if (a > 5)
//		max = a;
//	else
//		max = b;
//
//
//	//�ȼ���
//	max = (a > b ? a : b);
//
//	return 0;
//}


//int main()
//{
//	int	a = 1;
//	int b = 2;
//	//�����ڵ�a > b,a������ֵ
//	//a = b + 10 = 12
//	//b = a+1 = 13
//	//c = b = 13
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//	
//}

//int main()
//{
//	int	a = 1;
//	int b = 2;
//	int c = -1;
//	int d = 0;
//	if (a = b + 1, c = a / 2, d > 0)
//		printf("�ж�Ϊ��,������˾�\n");//d > 0����Ϊ��,��������˾�
//	return 0;
//
//}

//int main()
//{
//	int arr[10];//��������
//	arr[9] = 10;//ʵ���±����ò�������
//	//[]��������������arr��9��
//	return 0;
//}


//void test1()
//{
//	printf("��������Ķ���,\n");
//}
//void test2(const char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1(); //ʵ�ã�����Ϊ�������ò�������
//	test2("����ѽ!\n");//ʵ�ã�����Ϊ�������ò�������
//	return 0;
//}

////ѧ��
////structҲ��һ������
////����һ���ṹ������--- struct Stu
//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//};
//
//int main()
//{
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1,����ʼ��
//	struct Stu s1 = {"��ɺ",20,"2021520"};
//	/*printf("%s\n",s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//
//	struct Stu* ps = &s1;
//	//���淽ʽ�Ե���Щ����
//	/*
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	*/
//
//	//C�����ṩ�ļ򵥷���
//	//�﷨:�ṹ��ָ��->��Ա��
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	return 0;
//}

//int main()
//{
//	//00000000 00000000 00000000 00000011
//	//00000011 - a
//	char a = 3;
//	//00000000 00000000 00000000 01111111
//	//01111111 - b
//	char b = 127;
//
//	//a��b������
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000000 10000010
//	char c = a + b;
//	//10000010 - c
//	//��������,ǰ�油1
//	//11111111 11111111 11111111 10000010 --����
//	//11111111 11111111 11111111 10000001 --����
//	//10000000 00000000 00000000 01111110 --ԭ��
//	printf("%d\n", c);//���ʹ�ӡ,���:-126
//	return 0;
//}

////ʵ��1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a\n");
//	if (b == 0xb600)
//		printf("b\n");
//	if (c == 0xb6000000)
//		printf("c\n");
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//������٣�
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);//12
//	printf("%d\n", i);//4
//	return 0;
//}
