//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的次数
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//方法1造成的结果:sz = 4 / 4 = 1
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//
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
//	bubble_sort(arr,sz);//排序函数
//
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
