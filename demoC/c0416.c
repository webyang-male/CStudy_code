#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //ָ����������Ԫ�صĵ�ַ
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
//	int *p = arr; //ָ����������Ԫ�صĵ�ַ
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
//	int* * ppa = &pa;//ppa���Ƕ���ָ��
//	//int*** pppa = &ppa;//pppa��������ָ��
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
//	//�������� - �������
//	//�ַ����� - ����ַ�
//	//ָ������ - ���ָ��
//	//int arr[10];
//	int* arr2[3] = { &a, &b, &c };//ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ",*(arr2[i]));//10 20 30
//	}
//	return 0;
//}


//����һ��ѧ��--һЩ����
//struct -  �ṹ��ؼ��� Stu - �ṹ���ǩ 
//struct Stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//}s1,s2,s3;//�ֺŲ��ܶ�
////s1,s2,s3��3��ȫ�ֽṹ�����--ȫ�ֱ���Ӧ������


////����д��
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//}Stu;//Stu�����ﱻ��ΪStu
//
//int main()
//{
//	//�����ṹ�����
//	struct Stu s1;//�ֲ��ṹ�����
//	Stu s2;
//	return 0;
//}