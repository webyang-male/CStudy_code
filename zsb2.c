#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	int day = 9;
//	int prev_day_count;
//	int cur_day_count = 1;
//	while (day > 0)
//	{
//		prev_day_count = (cur_day_count + 1) * 2;
//		cur_day_count = prev_day_count;
//		day--;
//	}
//	printf("total count : %d\n", cur_day_count);
//	return 0;
//}


//int main()
//{
//	float a, x0, x1;
//	printf("������һ������: ");
//	scanf("%f", &a);
//	x0 = a / 2;
//	x1 = (x0 + a / x0) / 2;
//	do
//	{
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//	} while (fabs(x0 - x1) >= 1e-5);
//	printf("[%f] ��ƽ����Ϊ [%f]\n", a, x1);
//	return 0;
//}

//int main()
//{
//	double x1, x0, f, f1;
//	x1 = 1.5;
//	do
//	{
//		x0 = x1;
//		f = ((2 * x0 - 4) * x0 + 3) * x0 - 6;
//		f1 = (6 * x0 - 8) * x0 + 3;
//		x1 = x0 - f / f1;
//	} while (fabs(x1 - x0) >= 1e-5);
//	printf("������1.5�����ĸ�Ϊ��%lf\n", x1);
//	return 0;
//}

//int main()
//{
//	double left = -10, right = 10, mid;
//	double temp = 10;
//	while (fabs(temp) > 1e-5)
//	{
//		mid = (left + right) / 2;
//		//((2x - 4)*x + 3) * x - 6 ==> 2x^3 - 4x^2 + 3x -6
//		temp = ((2 * mid - 4) * mid + 3) * mid - 6;
//		if (temp > 0)
//		{
//			right = mid;
//		}
//		else if (temp < 0)
//		{
//			left = mid;
//		}
//	}
//	printf("��(-10,10)�ĸ�Ϊ��%lf", mid);
//	return 0;
//}

//int main()
//{
//	int A_battle, B_battle, C_battle;
//	//���A��ս�Ķ���ӡ�X������Z��
//	for (A_battle = 'X'; A_battle <= 'Z'; A_battle++)
//	{
//		//���B��ս�Ķ���ӡ�X������Z��
//		for (B_battle = 'X'; B_battle <= 'Z'; B_battle++)
//		{
//			//���C��ս�Ķ���ӡ�X������Z��
//			for (C_battle = 'X'; C_battle <= 'Z'; C_battle++)
//			{
//				//ȥ����������
//				if (A_battle == 'X' || C_battle == 'X' || C_battle == 'Z' ||
//					B_battle == A_battle || B_battle == C_battle || A_battle == C_battle)
//				{
//					continue;
//				}
//				printf("A��%c,B��%c,C��%c\n", A_battle, B_battle, C_battle);
//			}
//		}
//	}
//	return 0;
//}

//��ɸѡ����100���ڵ�����
//#include<stdio.h>
//int main()
//{
//	int i, j, k = 0;
//	// ���������ÿ��Ԫ������Ϊ��1~100
//	int a[100];
//	for (i = 0; i < 100; i++)
//		a[i] = i + 1;
//	// ��Ϊ1������������a[0]��0���
//	// ���һ��λ��������100��100�������������ѭ��������ѭ��һ��
//	a[0] = 0;
//	for (i = 0; i < 99; i++)
//	{
//		// ��a[i]λ�õ�����ȥģiλ��֮�����������
//		// ����ܹ�������һ��������������λ��������0���
//		for (j = i + 1; j < 100; j++)
//		{
//			if (a[i] != 0 && a[j] != 0)
//			{
//				//�Ѳ��������Ķ���ֵΪ0
//				if (a[j] % a[i] == 0)
//					a[j] = 0;
//			}
//		}
//	}
//	printf(" ɸѡ�����100���ڵ�����Ϊ��\n");
//	for (i = 0; i < 100; i++)
//	{
//		//�����в�Ϊ0������Ϊ����
//		if (a[i] != 0)
//			printf("%3d", a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int array[] = { 2, 8, 3, 9, 5, 7, 1, 4, 0, 6 };
//	int size = sizeof(array) / sizeof(array[0]);
//	// ���ԭ����
//	printf("����ǰ����������Ϊ��");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// ѡ��������̣�
//	// ��ѭ������ѡ����������ܹ�ѡ��size-1�ˣ�
//	// ��1����Ϊ���һ��ѡ��������ʣ��һ��Ԫ�أ�����ѡ����Ժ���
//	for (int i = 0; i < size - 1; ++i)
//	{
//		// ��maxPos���[0, size-i)���������Ԫ��
//		// �ڸ���ѡ��û�п�ʼǰ��Ĭ����Ϊ0��λ�þ������Ԫ��
//		int maxPos = 0;
//		for (int j = 1; j < size - i; ++j)
//		{
//			// ��������[0, size-i)��Ԫ�أ������Ԫ�ر�maxPosλ��Ԫ�ش�maxPos��¼��Ԫ��λ��
//
//			if (array[j] > array[maxPos])
//				maxPos = j;
//		}
//		// ������Ԫ�ز�������ĩβʱ�������Ԫ��������ĩβԪ�ؽ���
//		if (maxPos != size - i - 1)
//		{
//			int temp = array[maxPos];
//			array[maxPos] = array[size - i - 1];
//			array[size - i - 1] = temp;
//		}
//	}
//	// ���ԭ����
//	printf("ѡ�����������������Ϊ��");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}



//int main()
//{
//	int array[3][3];
//	int sumLT2RB = 0; // ������Ͻǵ����½ǶԽ���Ԫ��֮��
//	int sumRT2LB = 0; // ������Ͻǵ����½ǶԽ���Ԫ��֮��
//	printf("������3��3�еľ���\n");
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//			scanf("%d", &array[i][j]);
//	}
//	// ���Ͻǵ����½ǶԽ���
//	for (int i = 0; i < 3; ++i)
//		sumLT2RB += array[i][i];
//	for (int i = 0, j = 2; i < 3; ++i, j--)
//		sumRT2LB += array[i][j];
//	printf("���Ͻǵ����½ǶԽ���Ԫ��֮��: %d\n", sumLT2RB);
//	printf("���Ͻǵ����½ǶԽ���Ԫ��֮��: %d\n", sumRT2LB);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("������һ��������");
//	scanf("%d", &num);
//	printf("ԭ��������Ϊ:\n");
//	for (int i = 0; i < 9; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// ����Ϊ����
//	// ���������Ҵ�����Ԫ�ص�λ�ã������ҵķ�ʽΪ��
//	// �Ӻ���ǰ������������Ԫ�ؽ��бȽϣ����Ҫ����Ԫ��num��endλ������С����numһ������endλ��֮ǰ
//	// ��˽�endλ�������������һ��λ��
//	// ���num����endλ��Ԫ�ػ���end�Ѿ�����������࣬��λ���ҵ�
//	// �����Ԫ�ز��뵽end+1��λ��
//	int end = 8;
//	while (end >= 0 && num < array[end])
//	{
//		array[end + 1] = array[end];
//		end--;
//	}
//	array[end + 1] = num;
//	printf("����Ԫ��%d֮��Ľ��Ϊ:\n", num);
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int array[5] = { 8, 6, 5, 4, 1 };
//	int begin = 0, end = 4;
//	printf("����֮ǰ����Ϊ��");
//	for (int i = 0; i < 5; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// ����begin����������࣬end���������Ҳ�
//	// ֻҪbegin < end����begin��endλ��Ԫ�ؽ��н���
//	// Ȼ��begin�����ƶ�һ����end��ǰ�ƶ�һ��
//	while (begin < end)
//	{
//		int temp = array[begin];
//		array[begin] = array[end];
//		array[end] = temp;
//		begin++;
//		end--;
//	}
//	printf("����֮������Ϊ��");
//	for (int i = 0; i < 5; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int array[5] = { 8, 6, 5, 4, 1 };
//	int begin = 0, end = 4;
//	printf("����֮ǰ����Ϊ��");
//	for (int i = 0; i < 5; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// ����begin����������࣬end���������Ҳ�
//	// ֻҪbegin < end����begin��endλ��Ԫ�ؽ��н���
//	// Ȼ��begin�����ƶ�һ����end��ǰ�ƶ�һ��
//	while (begin < end)
//	{
//		int temp = array[begin];
//		array[begin] = array[end];
//		array[end] = temp;
//		begin++;
//		end--;
//	}
//	printf("����֮������Ϊ��");
//	for (int i = 0; i < 5; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int array[10][10];
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j <= i; ++j)
//		{
//			 //�Խ��ߺ͵�0����ȫ��Ϊ1
//			if (i == j || 0 == j)
//				array[i][j] = 1;
//			else
//				array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
//		}
//	}
//	 //��ӡ������ǵ�ǰ10��
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j <= i; ++j)
//		{
//			printf("%5d", array[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}