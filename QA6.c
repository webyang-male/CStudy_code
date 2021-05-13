#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <assert.h>
#include <stdio.h>

//struct Point
//{
//	int x;
//	int y;
//}p1; //声明类型的同时定义变量p1
//
//struct Point p2; //定义结构体变量p2
//
////初始化：定义变量的同时赋初值。
//struct Point p3 = { x, y };
//
//struct Stu //类型声明
//{
//	char name[15];//名字
//	int age; //年龄
//};
//struct Stu s = { "zhangsan", 20 };//初始化
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, { 4, 5 }, NULL }; //结构体嵌套初始化
//struct Node n2 = { 20, { 5, 6 }, NULL };//结构体嵌套初始化

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

////设置默认对齐数位4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8 4 4
//};
//#pragma pack()
////取消设置的默认对齐数


//设置默认对齐数位1
//#pragma pack(1)
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8 4 4
//};


////取消设置的默认对齐数

//struct S
//{
//	char c1;//1
//	//3,原1+7+8=16
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