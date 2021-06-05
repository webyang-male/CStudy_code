#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	int a[15][15], n, i, j, k;
//	while (1)
//	{
//		printf("请输入n(1~15):");
//		scanf("%d", &n);
//		if (n != 0 && n <= 15 && n % 2 != 0)
//			break;
//		else
//		{
//			printf("请输入奇数\n");
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//			a[i][j] = 0;
//	}
//	j = n / 2 + 1;
//	a[1][j] = 1;
//	i = 1;
//	for (k = 2; k <= n*n; k++)
//	{
//		i -= 1;
//		j += 1;
//		if (i<1 && j>n)
//		{
//			i += 2;
//			j -= 1;
//		}
//		else if (i<1)
//		{
//			i = n;
//		}
//		else if (j>n)
//		{
//			j = 1;
//		}
//		if (a[i][j] == 0)
//		{
//			a[i][j] = k;
//		}
//		else
//		{
//			i += 2;
//			j -= 1;
//			a[i][j] = k;
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//#define M 3
//#define N 4
//int main()
//{
//	int max, min, rowindex, colindex, flag = 0;
//	int array[M][N];
//	printf("请输入%d行%d列的数组:\n", M, N);
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//			scanf("%d", &array[i][j]);
//	}
//	for (int i = 0; i < M; ++i)
//	{
//		// 找到i行上最大的元素,记录该元素在列号colindex
//		max = array[i][0];
//		for (int j = 0; j < N; ++j)
//		{
//			if (array[i][j] > max)
//			{
//				max = array[i][j];
//				colindex = j;
//			}
//		}
//		// 找max所在列colindex上最小的元素，并记录其所在的行
//		min = array[0][colindex];
//		for (int j = 0; j < M; ++j)
//		{
//			if (array[j][colindex] < min)
//			{
//				min = array[j][colindex];
//				rowindex = j;
//			}
//		}
//		// 如果最小元素与最小元素相同，并且最小元素也在第i行，则为鞍点
//		if (max == min && i == rowindex)
//		{
//			flag = 1;
//			printf("鞍点为：%d行%d列的元素%d", rowindex, colindex, max);
//			break;
//		}
//	}
//	if (0 == flag)
//		printf("没有鞍点");
//	return 0;
//}

//int main(){
//	int array[100][100] = { 0 };
//	int N;//魔方阵阶数
//	int row = 0, col = 0;
//	int i, j;
//	int prevRow, preCol = 0;//前一个元素的行与列
//	while (1)
//	{
//		printf("请输入3-100之间的奇数:>\n");
//		scanf("%d", &N);
//		if (0 != N % 2 && (N >= 3 && N < 100))
//		{
//			break;
//		}
//	}
//	//放置1:第0行最中间
//	col = N / 2;
//	array[row][col] = 1;
//	//对于剩余的N^2-1个元素,按照以下规则元素存放
//	for (i = 2; i <= N*N; ++i)
//	{//下一个元素存放在当前元素上一行下一列
//		row--;
//		col++;
//		//防止越界
//		if (row < 0)
//		{
//			row = N - 1;
//		}
//		if (col >= N)
//		{
//			col = 0;
//		}
//		if (0 != array[row][col])
//		{
//			//若row,col该位置已经有元素--则新增在前一个元素的当前列下一行
//			row = prevRow + 1;
//			col = preCol;
//		}
//
//		array[row][col] = i;
//		prevRow = row;
//		preCol = col;
//	}
//	//打印魔方阵
//	printf("当前魔方阵:>\n");
//	for (i = 0; i < N; ++i)
//	{
//		for (j = 0; j < N; ++j)
//		{
//			printf("%4d", array[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////#define M 3//行
////#define N 4//列
////int main()
////{
////	//获取输入数组
////	int i, j, max, pos, flag = 0;
////	int array[M][N];
////	printf("请输入%d行%d列的数组:\n", M, N);
////	for (int i = 0; i < M; ++i)
////	{
////		for (int j = 0; j < N; ++j)
////			scanf("%d", &array[i][j]);
////	}
////	//找鞍点
////	for (i = 0; i < M; ++i)
////	{
////		//0.设立默认最大数位置并标记最大数的列号
////		max = array[i][0];
////		//1.找该行最大元素
////		for (j = 1; j < N; ++j)
////		{
////			if (array[i][j]>max)
////			{
////				max = array[i][j];//更新真正一行最大数
////				pos = j;//标记最大数的列
////			}
////		}
////		//2.确认该元素是查为该列上最大的元素
////		for (j = 0; j < M; ++j)
////		{
////			if (array[j][pos] < max)
////			{
////				break;
////			}
////		}
////		//如果在pos列没有发现比max小的元素，说明max是pos列上最小的元素
////		if (j == M)
////		{
////			printf("鞍点为：%d行%d列的元素%d", i, pos, array[i][pos]);
////			flag = 1;
////			break;
////		}
////	}
////	if (flag == 0)
////	{
////		printf("鞍点未找到!!!\n");
////	}
////	return 0;
////}