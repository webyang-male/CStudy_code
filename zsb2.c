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
//	printf("请输入一个正数: ");
//	scanf("%f", &a);
//	x0 = a / 2;
//	x1 = (x0 + a / x0) / 2;
//	do
//	{
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//	} while (fabs(x0 - x1) >= 1e-5);
//	printf("[%f] 的平方根为 [%f]\n", a, x1);
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
//	printf("方程在1.5附近的根为：%lf\n", x1);
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
//	printf("在(-10,10)的根为：%lf", mid);
//	return 0;
//}

//int main()
//{
//	int A_battle, B_battle, C_battle;
//	//如果A对战的对象从“X”到“Z”
//	for (A_battle = 'X'; A_battle <= 'Z'; A_battle++)
//	{
//		//如果B对战的对象从“X”到“Z”
//		for (B_battle = 'X'; B_battle <= 'Z'; B_battle++)
//		{
//			//如果C对战的对象从“X”到“Z”
//			for (C_battle = 'X'; C_battle <= 'Z'; C_battle++)
//			{
//				//去除限制条件
//				if (A_battle == 'X' || C_battle == 'X' || C_battle == 'Z' ||
//					B_battle == A_battle || B_battle == C_battle || A_battle == C_battle)
//				{
//					continue;
//				}
//				printf("A对%c,B对%c,C对%c\n", A_battle, B_battle, C_battle);
//			}
//		}
//	}
//	return 0;
//}

//用筛选法求100以内的素数
//#include<stdio.h>
//int main()
//{
//	int i, j, k = 0;
//	// 将数组汇总每个元素设置为：1~100
//	int a[100];
//	for (i = 0; i < 100; i++)
//		a[i] = i + 1;
//	// 因为1不是素数，把a[0]用0标记
//	// 最后一个位置数字是100，100不是素数，因此循环可以少循环一次
//	a[0] = 0;
//	for (i = 0; i < 99; i++)
//	{
//		// 用a[i]位置的数字去模i位置之后的所有数据
//		// 如果能够整除则一定不是素数，该位置数据用0填充
//		for (j = i + 1; j < 100; j++)
//		{
//			if (a[i] != 0 && a[j] != 0)
//			{
//				//把不是素数的都赋值为0
//				if (a[j] % a[i] == 0)
//					a[j] = 0;
//			}
//		}
//	}
//	printf(" 筛选法求出100以内的素数为：\n");
//	for (i = 0; i < 100; i++)
//	{
//		//数组中不为0的数即为素数
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
//	// 输出原数组
//	printf("排序前数组中数据为：");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// 选择排序过程：
//	// 外循环控制选择的趟数，总共选择size-1趟，
//	// 减1是因为最后一趟选择区间中剩余一个元素，该趟选择可以忽略
//	for (int i = 0; i < size - 1; ++i)
//	{
//		// 用maxPos标记[0, size-i)区间中最大元素
//		// 在该趟选择没有开始前，默认认为0号位置就是最大元素
//		int maxPos = 0;
//		for (int j = 1; j < size - i; ++j)
//		{
//			// 遍历区间[0, size-i)中元素，如果有元素比maxPos位置元素大，maxPos记录该元素位置
//
//			if (array[j] > array[maxPos])
//				maxPos = j;
//		}
//		// 如果最大元素不在区间末尾时，将最大元素与区间末尾元素交换
//		if (maxPos != size - i - 1)
//		{
//			int temp = array[maxPos];
//			array[maxPos] = array[size - i - 1];
//			array[size - i - 1] = temp;
//		}
//	}
//	// 输出原数组
//	printf("选择排序后数组中数据为：");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}



//int main()
//{
//	int array[3][3];
//	int sumLT2RB = 0; // 标记左上角到右下角对角线元素之和
//	int sumRT2LB = 0; // 标记右上角到左下角对角线元素之和
//	printf("请输入3行3列的矩阵：\n");
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//			scanf("%d", &array[i][j]);
//	}
//	// 左上角到右下角对角线
//	for (int i = 0; i < 3; ++i)
//		sumLT2RB += array[i][i];
//	for (int i = 0, j = 2; i < 3; ++i, j--)
//		sumRT2LB += array[i][j];
//	printf("左上角到右下角对角线元素之和: %d\n", sumLT2RB);
//	printf("右上角到左下角对角线元素之和: %d\n", sumRT2LB);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	printf("原数组序列为:\n");
//	for (int i = 0; i < 9; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// 数组为升序
//	// 在数组中找待插入元素的位置，具体找的方式为：
//	// 从后往前依次与数组中元素进行比较，如果要插入元素num比end位置数据小，则num一定插在end位置之前
//	// 因此将end位置数据往后搬移一个位置
//	// 如果num大于end位置元素或者end已经在区间最左侧，则位置找到
//	// 最后将新元素插入到end+1的位置
//	int end = 8;
//	while (end >= 0 && num < array[end])
//	{
//		array[end + 1] = array[end];
//		end--;
//	}
//	array[end + 1] = num;
//	printf("插入元素%d之后的结果为:\n", num);
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int array[5] = { 8, 6, 5, 4, 1 };
//	int begin = 0, end = 4;
//	printf("逆序之前数组为：");
//	for (int i = 0; i < 5; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// 逆序：begin在数组最左侧，end在数组最右侧
//	// 只要begin < end，将begin和end位置元素进行交换
//	// 然后begin往后移动一步，end往前移动一步
//	while (begin < end)
//	{
//		int temp = array[begin];
//		array[begin] = array[end];
//		array[end] = temp;
//		begin++;
//		end--;
//	}
//	printf("逆置之后数组为：");
//	for (int i = 0; i < 5; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int array[5] = { 8, 6, 5, 4, 1 };
//	int begin = 0, end = 4;
//	printf("逆序之前数组为：");
//	for (int i = 0; i < 5; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// 逆序：begin在数组最左侧，end在数组最右侧
//	// 只要begin < end，将begin和end位置元素进行交换
//	// 然后begin往后移动一步，end往前移动一步
//	while (begin < end)
//	{
//		int temp = array[begin];
//		array[begin] = array[end];
//		array[end] = temp;
//		begin++;
//		end--;
//	}
//	printf("逆置之后数组为：");
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
//			 //对角线和第0列上全部为1
//			if (i == j || 0 == j)
//				array[i][j] = 1;
//			else
//				array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
//		}
//	}
//	 //打印杨慧三角的前10行
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