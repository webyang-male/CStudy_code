#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	//数组创建
//	int arr[3][4]; 
//	char arr[3][5]; 
//	double arr[2][4];
//	return 0;
//}

//int main()
//{
//	//数组初始化
//	//没有数据的被初始化为0
//	int arr[3][4] = {1,2,3,4};
//	int arr[3][4] = {{1,2},{4,5}};
//	int arr[][4] = {{2,3},{4,5}};//行可省略,列不能
//	return 0;
//}



//int main () 
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	//确定行
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		//确定列
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf ("%d ", arr[i][j]);
//		}
//		printf ("\n");
//	}
//	return 0;
//}


//int main () 
//{
//	int arr[3][4]; int i = 0;
//	for(i=0; i<3; i++)     {
//		int j = 0;
//		for(j=0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j,&arr[i][j]);
//		}    
//	}
//	return 0;
//}


//int main () 
//{
//	int arr[3][4]; int i = 0;
//	for(i=0; i<3; i++)     {
//		int j = 0;
//		for(j=0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j,&arr[i][j]);
//		}    
//	}
//	return 0;
//}