#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char ch = 'z';
//	char* pc = &ch;
//	*pc = 'y';
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n",arr);//abcdef
//	printf("%s\n", pc);//abcdef
//	printf("%c\n", *pc);//a
//	return 0;
//}

//int main()
//{
//	//char* pc = 'abc';
//	//*pc = 'y';//�δ���/�������
//	const char* pc = 'abc';//׼ȷд��
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	char str1[] = "helloChaser";
//	char str2[] = "helloChaser";
//	char* str3 = "helloChaser";
//	char* str4 = "helloChaser";
//	//׼ȷд��
//	//const char* str3 = "helloChaser";
//	//const char* str4 = "helloChaser";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//
//	//���н��
//	//str1 and str2 are not same
//	//str3 and str4 are same
//}



//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a,&b,&c,&d};
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//int *p = NULL;//p������ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	//����ָ�� - ָ�������ָ�� - ���Դ������ĵ�ַ
//	/*
//	arr ��Ԫ�ص�ַ
//	&arr[0] ��Ԫ�ص�ַ
//	&arr �����ַ
//	*/
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	//p��������ָ��
//	int (*p)[10]= &arr;//�����ַ�洢
//	 
//	/*printf("%p\n",p);
//	printf("%p\n", p[0]);
//	printf("%p\n", p[1]);
//	printf("%p\n", p[2]);*/
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	
//	int(*p)[10] = &arr;//�����ַ�洢
//
//	printf("%p\n",p);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr+1= %p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//����1
//	int *p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//
//	
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	////����2
//	////for ( i = 0; i < 10; i++)
//	////{
//	////	printf("%d ",*(*pa + i));//*pa == arr
//	////}
//
//	////����3
//	//for ( i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//
//	return 0;
//}
