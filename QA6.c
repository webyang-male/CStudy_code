#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <assert.h>
#include <stdio.h>

//struct Point
//{
//	int x;
//	int y;
//}p1; //�������͵�ͬʱ�������p1
//
//struct Point p2; //����ṹ�����p2
//
////��ʼ�������������ͬʱ����ֵ��
//struct Point p3 = { x, y };
//
//struct Stu //��������
//{
//	char name[15];//����
//	int age; //����
//};
//struct Stu s = { "zhangsan", 20 };//��ʼ��
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, { 4, 5 }, NULL }; //�ṹ��Ƕ�׳�ʼ��
//struct Node n2 = { 20, { 5, 6 }, NULL };//�ṹ��Ƕ�׳�ʼ��

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//struct S1 s1 = {0};
//	//printf("%d\n", sizeof(s1));//12
//	//struct S2 s2 = { 0 };
//	//printf("%d\n", sizeof(s2));//8
//	struct S3 s3;
//	printf("%d\n", sizeof(s3));
//	struct S4 s4;
//	printf("%d\n", sizeof(s4));
//	return 0;
//}

////����Ĭ�϶�����λ4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8 4 4
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����


//����Ĭ�϶�����λ1
//#pragma pack(1)
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8 4 4
//};


////ȡ�����õ�Ĭ�϶�����

//struct S
//{
//	char c1;//1
//	//3,ԭ1+7+8=16
//	double d;//8 4 4
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//
//
//	return 0;
//}

//#include <stddef.h>
//
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof();
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, d));//8
//
//	return 0;
//}