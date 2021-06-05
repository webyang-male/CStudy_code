#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	char buf[1024];
//	printf("Please enter a string:>\n ");
//	gets(buf, 1024);
//	int upper_count = 0, lower_count = 0, digit_count = 0, space_count = 0,
//		other_count = 0;
//	char *ptr = buf;
//	while (*ptr != '\0') {
//		if (*ptr >= 'A' && *ptr <= 'Z') { //大写字母
//			upper_count++;
//		}
//		else if (*ptr >= 'a' && *ptr <= 'z'){//小写字母
//			lower_count++;
//		}
//		else if (*ptr >= '0' && *ptr <= '9') {//数字字符
//			digit_count++;
//		}
//		else if (*ptr == ' ') {//空格字符
//			space_count++;
//		}
//		else { //其他字符
//			other_count++;
//		}
//		ptr++;
//	}
//	printf("upper:%d; lower:%d; digit:%d; space:%d; other:%d\n", \
//		upper_count, lower_count, digit_count, space_count, other_count);
//	return 0;
//}


//void change(int array[3][3], int array1[3][3]){
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			*(*(array1 + j) + i) = *(*(array + i) + j);
//		}
//	}
//	return;
//}
//
//int main(){
//	int array[3][3];
//	printf("请输入一个3*3的矩阵:>\n");
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d %d %d", &array[i][0], &array[i][1], & array[i][2]);
//	}
//	int array1[3][3];
//
//	change(array, array1);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d %d %d\n", array1[i][0], array1[i][1], array1[i][2]); 
//	}
//	return 0;
//}

//#include <stdint.h>
//void handler(int *array, int row, int col)
//{
//	//找到最大数字,以及对应下标
//	int max = INT32_MIN, max_idx;
//	for (int i = 0; i < row * col; i++)
//	{
//		if (max < *(array + i))
//		{
//			max = *(array + i);
//			max_idx = i;
//		}
//	}
//	//找到四个最小数字以及对应下标
//	int min = INT32_MAX, min_idx[4];
//	for (int i = 0; i < 4; i++)
//	{
//		min = INT32_MAX;
//		for (int j = 0; j < row*col; j++)
//		{
//			int k;
//			//判断是否已经找到并记录过最小数字的下标
//			for (k = 0; k < i; k++)
//			{
//				//下标被保存过就跳过
//				if (j == min_idx[k]) break;
//			}
//			//已经被比较记录,直接进行下一个循环
//			if (k != i) continue;
//			//未被记录数字进行比较
//			if (min>*(array + j))
//			{
//				min = *(array + j);
//				min_idx[i] = j;
//			}
//		}
//	}
//
//	int center_idx = row * col / 2;
//	int left_up_idx = 0;
//	int right_up_idx = col - 1;
//	int left_down_idx = col*(row - 1);
//	int right_down_idx = col*row - 1;
//	int tmp;
//	tmp = *(array + center_idx); *(array + center_idx) = *(array + max_idx); *(array + max_idx) = tmp;
//	tmp = *(array + left_up_idx); *(array + left_up_idx) = *(array + min_idx[0]); *(array + min_idx[0]) = tmp;
//	tmp = *(array + right_up_idx); *(array + right_up_idx) = *(array + min_idx[1]); *(array + min_idx[1]) = tmp;
//	tmp = *(array + left_down_idx); *(array + left_down_idx) = *(array + min_idx[2]); *(array + min_idx[2]) = tmp;
//	tmp = *(array + right_down_idx); *(array + right_down_idx) = *(array + min_idx[3]); *(array + min_idx[3]) = tmp;
//	return;
//}
//
//int main(){
//	int array[5][5];
//	printf("请输入一个5*5的矩阵:>\n");
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d %d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4]);
//	}
//	
//	handler((int*)array, 5, 5);
//	printf("----------我是可爱分割线----------\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d %d %d %d %d\n", array[i][0], array[i][1], array[i][2], array[i][3], array[i][4]);
//	}
//	return 0;
//}