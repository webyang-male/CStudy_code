//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð������Ĵ���
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//����1��ɵĽ��:sz = 4 / 4 = 1
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
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
//	//��arr������������
//	// arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ--&arr[0]
//	bubble_sort(arr,sz);//������
//
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
