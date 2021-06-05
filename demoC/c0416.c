#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int a = 99;
//	int * pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针
//	//int*** pppa = &ppa;//pppa就是三级指针
//	printf("%p\n", pa);
//	printf("%p\n", ppa);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//
//	//整型数组 - 存放整型
//	//字符数组 - 存放字符
//	//指针数组 - 存放指针
//	//int arr[10];
//	int* arr2[3] = { &a, &b, &c };//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ",*(arr2[i]));//10 20 30
//	}
//	return 0;
//}


//描述一个学生--一些数据
//struct -  结构体关键字 Stu - 结构体标签 
//struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}s1,s2,s3;//分号不能丢
////s1,s2,s3是3个全局结构体变量--全局变量应该少用


////换个写法
//typedef struct Stu
//{
//	//成员变量
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}Stu;//Stu在这里被改为Stu
//
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;//局部结构体变量
//	Stu s2;
//	return 0;
//}