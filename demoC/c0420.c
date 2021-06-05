#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


////参数是数组形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		//打印行
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//}
//
////参数是指针形式
//void print2(int (*p)[5],int x,int y)
//{
//	int i = 0;
//	//找到行
//	for ( i = 0; i < x; i++)
//	{
//		int j = 0;
//		//找到列 -- 每个数组中的元素
//		for ( j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//p+i找到某一行的地址
//			//*(p + i)解引用找到真实行数
//			//通过下标[j]找到一行某个数字
//			//printf("%d ", (*(p + i))[j]);
//
//			//等价写法
//			//printf("%d ", *(*(p + i)+j));
//			//printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//print1(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址 -第一行一维数组的地址
//	print2(arr, 3, 5);
//
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int i = 0;
//	//int* p = arr;
//	//for ( i = 0; i < 10; i++)
//	//{
//	//	printf("%d ",p[i]);
//	//	//printf("%d ", *(p + i));
//	//	//printf("%d ", *(arr + i));
//	//	//printf("%d ", arr[i]);//arr[i] == *(arr + i) == *(p + i) == p[i]
//	//}
//	return 0;
//}

//int arr[5];//arr是一个5个元素的整型数组
//int *parr1[10];//parr1是一个数组，数组有10个元素，每个元素的类型是int*,parr1是指针数组
//int(*parr2)[10];//parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int - parr2是数组指针
//int(*parr3[10])[5];//'parr3是一个数组，该数组有10个元素，每个元素是一个数组指针,该数组指针指向的数组有5个元素，每个元素是int



//#include <stdio.h>
//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int *arr)//ok
//{}
//void test2(int *arr[20])//ok,这里数组大小[20]可以省略
//{}
//void test2(int **arr)//ok
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}
