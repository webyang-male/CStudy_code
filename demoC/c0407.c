#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main() 
//{	
//	int arr[10];//创建一个数组--存放整型--10个
//	char arr1[5];
//
//	//这种创建方式错误
//	int x = 2.1;
//	float arr2[x];
//	return 0;
//}


//int main() 
//{	
//	int arr1[10] = {1,2,3};//不完全初始化,剩下元素默认初始化为0
//	int arr2[] = {1,2,3,4};
//	int arr3[5] = {1,2,3,4,5};
//	char arr4[3] = {'a',98, 'c'};
//	char arr5[] = {'a','b','c'};
//	char arr6[] = "abcdef";
//	//sizeof计算arr6所占空间大小
//	//7个元素-char 7*1 = 7
//	printf("%d\n",sizeof(arr6));//7
//	//strlen 求字符串的长度--'\0'之前的字符
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
//	printf("%d\n",strlen(arr2));//15---虽然输出15,但理论输出是随机值,因为输出结果是要在字符abc之后找到字符`\0`
//	return 0;
//}

//int main() 
//{	
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//printf("%c\n",arr[3]);//输出d
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
//	int arr[10] = {0};//数组的不完全初始化
//	//计算数组的元素个数
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以： 
//	int i = 0;//做下标
//	for(i=0; i<sz; i++)//这里写10，好不好？     
//	{
//		arr[i] = i;
//	}   
//	//输出数组的内容 
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

