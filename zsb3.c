#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	int a[15][15], n, i, j, k;
//	while (1)
//	{
//		printf("������n(1~15):");
//		scanf("%d", &n);
//		if (n != 0 && n <= 15 && n % 2 != 0)
//			break;
//		else
//		{
//			printf("����������\n");
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
//	printf("������%d��%d�е�����:\n", M, N);
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//			scanf("%d", &array[i][j]);
//	}
//	for (int i = 0; i < M; ++i)
//	{
//		// �ҵ�i��������Ԫ��,��¼��Ԫ�����к�colindex
//		max = array[i][0];
//		for (int j = 0; j < N; ++j)
//		{
//			if (array[i][j] > max)
//			{
//				max = array[i][j];
//				colindex = j;
//			}
//		}
//		// ��max������colindex����С��Ԫ�أ�����¼�����ڵ���
//		min = array[0][colindex];
//		for (int j = 0; j < M; ++j)
//		{
//			if (array[j][colindex] < min)
//			{
//				min = array[j][colindex];
//				rowindex = j;
//			}
//		}
//		// �����СԪ������СԪ����ͬ��������СԪ��Ҳ�ڵ�i�У���Ϊ����
//		if (max == min && i == rowindex)
//		{
//			flag = 1;
//			printf("����Ϊ��%d��%d�е�Ԫ��%d", rowindex, colindex, max);
//			break;
//		}
//	}
//	if (0 == flag)
//		printf("û�а���");
//	return 0;
//}

//int main(){
//	int array[100][100] = { 0 };
//	int N;//ħ�������
//	int row = 0, col = 0;
//	int i, j;
//	int prevRow, preCol = 0;//ǰһ��Ԫ�ص�������
//	while (1)
//	{
//		printf("������3-100֮�������:>\n");
//		scanf("%d", &N);
//		if (0 != N % 2 && (N >= 3 && N < 100))
//		{
//			break;
//		}
//	}
//	//����1:��0�����м�
//	col = N / 2;
//	array[row][col] = 1;
//	//����ʣ���N^2-1��Ԫ��,�������¹���Ԫ�ش��
//	for (i = 2; i <= N*N; ++i)
//	{//��һ��Ԫ�ش���ڵ�ǰԪ����һ����һ��
//		row--;
//		col++;
//		//��ֹԽ��
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
//			//��row,col��λ���Ѿ���Ԫ��--��������ǰһ��Ԫ�صĵ�ǰ����һ��
//			row = prevRow + 1;
//			col = preCol;
//		}
//
//		array[row][col] = i;
//		prevRow = row;
//		preCol = col;
//	}
//	//��ӡħ����
//	printf("��ǰħ����:>\n");
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

////#define M 3//��
////#define N 4//��
////int main()
////{
////	//��ȡ��������
////	int i, j, max, pos, flag = 0;
////	int array[M][N];
////	printf("������%d��%d�е�����:\n", M, N);
////	for (int i = 0; i < M; ++i)
////	{
////		for (int j = 0; j < N; ++j)
////			scanf("%d", &array[i][j]);
////	}
////	//�Ұ���
////	for (i = 0; i < M; ++i)
////	{
////		//0.����Ĭ�������λ�ò������������к�
////		max = array[i][0];
////		//1.�Ҹ������Ԫ��
////		for (j = 1; j < N; ++j)
////		{
////			if (array[i][j]>max)
////			{
////				max = array[i][j];//��������һ�������
////				pos = j;//������������
////			}
////		}
////		//2.ȷ�ϸ�Ԫ���ǲ�Ϊ����������Ԫ��
////		for (j = 0; j < M; ++j)
////		{
////			if (array[j][pos] < max)
////			{
////				break;
////			}
////		}
////		//�����pos��û�з��ֱ�maxС��Ԫ�أ�˵��max��pos������С��Ԫ��
////		if (j == M)
////		{
////			printf("����Ϊ��%d��%d�е�Ԫ��%d", i, pos, array[i][pos]);
////			flag = 1;
////			break;
////		}
////	}
////	if (flag == 0)
////	{
////		printf("����δ�ҵ�!!!\n");
////	}
////	return 0;
////}