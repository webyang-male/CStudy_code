#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main() 
//{	
//	int arr[10];//����һ������--�������--10��
//	char arr1[5];
//
//	//���ִ�����ʽ����
//	int x = 2.1;
//	float arr2[x];
//	return 0;
//}


//int main() 
//{	
//	int arr1[10] = {1,2,3};//����ȫ��ʼ��,ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int arr2[] = {1,2,3,4};
//	int arr3[5] = {1,2,3,4,5};
//	char arr4[3] = {'a',98, 'c'};
//	char arr5[] = {'a','b','c'};
//	char arr6[] = "abcdef";
//	//sizeof����arr6��ռ�ռ��С
//	//7��Ԫ��-char 7*1 = 7
//	printf("%d\n",sizeof(arr6));//7
//	//strlen ���ַ����ĳ���--'\0'֮ǰ���ַ�
//	printf("%d\n",strlen(arr6));//6
//	return 0;
//}


//int main() 
//{	
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",sizeof(arr1));//4--a b c \0
//	printf("%d\n",sizeof(arr2));//3--a b c
//	printf("%d\n",strlen(arr1));//3--a b c
//	printf("%d\n",strlen(arr2));//15---��Ȼ���15,��������������ֵ,��Ϊ��������Ҫ���ַ�abc֮���ҵ��ַ�`\0`
//	return 0;
//}

//int main() 
//{	
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//printf("%c\n",arr[3]);//���d
//	int i = 0;
//	//for(i=0;i<6;i++)
//	//for(i=0;i<(int)strlen(arr);i++)
//	int len = strlen(arr);
//	for(i=0;i<len;i++)
//	{
//		printf("%c\n",arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0};//����Ĳ���ȫ��ʼ��
//	//���������Ԫ�ظ���
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//���������ݸ�ֵ,������ʹ���±������ʵģ��±��0��ʼ�����ԣ� 
//	int i = 0;//���±�
//	for(i=0; i<sz; i++)//����д10���ò��ã�     
//	{
//		arr[i] = i;
//	}   
//	//������������ 
//	for(i=0; i<sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0; 
//
//}


//int main()
//{
//	int arr[10] = {0}; 
//	int i = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); ++i)     
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

