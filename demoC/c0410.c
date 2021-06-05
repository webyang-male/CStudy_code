#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的次数
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//方法1造成的结果:sz = 4 / 4 = 1
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		int flag = 1;//假设数组元素已经有序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序元素为乱序
//			}
//		}
//		//程序走这里代表数组元素已经有序
//		if (flag == 1)
//		{
//			break;//直接终止函数执行
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 9, 3, 1, 8, 0, 7, 4, 6, 5, 3, 2 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//对arr进行升序排序
//	// arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址--&arr[0]
//	bubble_sort(arr, sz);//排序函数
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	printf("%p\n",arr);//00BFF828
//	printf("%p\n", &arr[0]);//00BFF828
//	printf("%p\n", *arr);//1
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	/*
//	1.sizeof(数组名) -- 数组名表示整个数组,
//	sizeof(数组名)计算的是整个数组的大小单位是字节
//
//
//	2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//	*/
//	printf("%p\n", arr);//00D7F940
//	printf("%p\n", arr+1);//00D7F944
//
//	printf("%p\n", &arr[0]);//00D7F940
//	printf("%p\n", &arr[0]+1);//00D7F944
//
//	printf("%p\n", &arr);//00D7F940--虽然结果一样,但是这里取出的是整个数组的地址
//	printf("%p\n", &arr+1);//00D7F960
//	return 0;
//}

