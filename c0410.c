#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð������Ĵ���
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//����1��ɵĽ��:sz = 4 / 4 = 1
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
//		int j = 0;
//		int flag = 1;//��������Ԫ���Ѿ�����
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//��������Ԫ��Ϊ����
//			}
//		}
//		//�����������������Ԫ���Ѿ�����
//		if (flag == 1)
//		{
//			break;//ֱ����ֹ����ִ��
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
//	//��arr������������
//	// arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ--&arr[0]
//	bubble_sort(arr, sz);//������
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
//	1.sizeof(������) -- ��������ʾ��������,
//	sizeof(������)���������������Ĵ�С��λ���ֽ�
//
//
//	2.&�������������������������飬&��������ȡ��������������ĵ�ַ
//	*/
//	printf("%p\n", arr);//00D7F940
//	printf("%p\n", arr+1);//00D7F944
//
//	printf("%p\n", &arr[0]);//00D7F940
//	printf("%p\n", &arr[0]+1);//00D7F944
//
//	printf("%p\n", &arr);//00D7F940--��Ȼ���һ��,��������ȡ��������������ĵ�ַ
//	printf("%p\n", &arr+1);//00D7F960
//	return 0;
//}

