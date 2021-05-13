#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

////是素数返回1,否则返回0
//int is_prime(int n)
//{
//	//产生2到n-1的数试除
//	int j = 0;
//	for(j=2;j<n;j++)
//	{
//		if(n%j == 0)
//			return 0;//相当于break,但是比break强,直接退出函数/程序,中止循环和后面代码执行
//	}
//	//代码能走到这里,说明for循环不满足,说明这个数是素数
//	return 1;
//}
//
//int main() 
//{
//	int i = 0;
//	for(i=100;i<=200;i++)
//	{
//		//判断i是否为素数
//		if(is_prime(i) == 1)
//		{
//			printf("%d\n",i);
//		}
//	}
//
//	return 0;
//}

//int is_leap_year(int y){
//	if((y%4 == 0 && y%100 != 0)|| (y%400 == 0)){
//		return 1;
//	} 
//	else{
//		return 0;
//	}
//}
//
//int main() 
//{
//	int year = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		//判断year是否为闰年
//		if(1 == is_leap_year(year))
//		{
//			printf("%d ",year);
//		}
//	}
//
//	return 0;
//}

//int binary_search(int arr[],int k,int sz)
//{
//	//算法实现
//	int left = 0;
//	int right = sz-1;
//	//left<=right说明数组中有元素可被查找
//	while(left<=right){
//
//		int mid = (left+right)/2;//中间元素下标
//
//		if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else
//		{	//arr[mid]=k
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main() 
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了,返回这个数下标,否则返回-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);//数组长度
//
//	int ret = binary_search(arr,k,sz);
//
//	if(ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了,下标为:%d\n",ret);
//	}
//	return 0;
//}
