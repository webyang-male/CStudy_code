#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


////������������ʽ
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		//��ӡ��
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//}
//
////������ָ����ʽ
//void print2(int (*p)[5],int x,int y)
//{
//	int i = 0;
//	//�ҵ���
//	for ( i = 0; i < x; i++)
//	{
//		int j = 0;
//		//�ҵ��� -- ÿ�������е�Ԫ��
//		for ( j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//p+i�ҵ�ĳһ�еĵ�ַ
//			//*(p + i)�������ҵ���ʵ����
//			//ͨ���±�[j]�ҵ�һ��ĳ������
//			//printf("%d ", (*(p + i))[j]);
//
//			//�ȼ�д��
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
//	//print1(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ -��һ��һά����ĵ�ַ
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

//int arr[5];//arr��һ��5��Ԫ�ص���������
//int *parr1[10];//parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*,parr1��ָ������
//int(*parr2)[10];//parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int - parr2������ָ��
//int(*parr3[10])[5];//'parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ��,������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int



//#include <stdio.h>
//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int *arr)//ok
//{}
//void test2(int *arr[20])//ok,���������С[20]����ʡ��
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
