#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

////����������1,���򷵻�0
//int is_prime(int n)
//{
//	//����2��n-1�����Գ�
//	int j = 0;
//	for(j=2;j<n;j++)
//	{
//		if(n%j == 0)
//			return 0;//�൱��break,���Ǳ�breakǿ,ֱ���˳�����/����,��ֹѭ���ͺ������ִ��
//	}
//	//�������ߵ�����,˵��forѭ��������,˵�������������
//	return 1;
//}
//
//int main() 
//{
//	int i = 0;
//	for(i=100;i<=200;i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
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
//		//�ж�year�Ƿ�Ϊ����
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
//	//�㷨ʵ��
//	int left = 0;
//	int right = sz-1;
//	//left<=right˵����������Ԫ�ؿɱ�����
//	while(left<=right){
//
//		int mid = (left+right)/2;//�м�Ԫ���±�
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
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ���,����������±�,���򷵻�-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);//���鳤��
//
//	int ret = binary_search(arr,k,sz);
//
//	if(ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±�Ϊ:%d\n",ret);
//	}
//	return 0;
//}
