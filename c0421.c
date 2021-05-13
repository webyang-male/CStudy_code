#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//void test(int arr[3][5])//ok
//{}
//void test(int arr[][])//err
//{}
//void test(int arr[][5])//ok
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素
//
//void test(int *arr)//err
//{}
//void test(int* arr[5])//err
//{}
//void test(int(*arr)[5])//ok
//{}
//void test(int **arr)//err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//void test1(int* p)
//{}
//
//void test2(char* p)
//{}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//
//	char ch = 'z';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//}

//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//
//	int* arr[10];
//	test(arr);//指针数组也可
//	return 0;
//}

//void test(char **p)
//{
//}
//
//int main()
//{
//	char c = 'b';
//	char*pc = &c;
//	char**ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//Ok
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	/*int arr[10] = { 0 };
//	int(*p)[10] = &arr;*/
//
//	//&函数名 和 函数名 都是函数的地址
//	//printf("%p\n", Add);
//	//printf("%p\n",&Add);
//
//	int(*pa)(int, int y) = Add;
//	printf("%d\n", (*pa)(512, 8));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("Be Happy");
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组,可以存放4个函数地址 --- 函数指针的数组
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	//函数指针的数组
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针 pf ，能够指向my_strcpy
//
////2．写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//1.char* (*pf)(char*, const char*);
//2.char* (*pfArr[4])(char*, const char*);

