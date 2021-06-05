#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//
//}

//int main()
//{
//	int array[15] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
//	int left = 0;
//	int right = sizeof(array) / sizeof(array[0]);
//	int key = 0;
//	printf("请输入要查找的数字:>\n ");
//	scanf("%d", &key);
//	// 二分查找
//	while (left < right)
//	{
//		// 找到中间位置
//		int mid = left + ((right - left) >> 1);
//		if (key == array[mid])
//		{
//			printf("%d\n", mid);
//			break;
//		}
//		else if (key < array[mid])
//		{
//			right = mid;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	if (left >= right)
//		printf("无此数\n");
//	return 0;
//}

//int main()
//{
//	int upp = 0, low = 0, digit = 0, space = 0, other = 0;
//	char text[3][80];
//	for (int i = 0; i < 3; i++)
//	{
//		// 获取一行文本
//		printf("please input line %d:\n", i + 1);
//		gets(text[i]);
//		// 统计该行文本中小写字母、大写字母、数字、空格、其他字符的个数
//		for (int j = 0; j < 80 && text[i][j] != '\0'; j++)
//		{
//			if (text[i][j] >= 'A'&& text[i][j] <= 'Z') // 大写字母
//				upp++;
//			else if (text[i][j] >= 'a' && text[i][j] <= 'z') // 小写字母
//				low++;
//			else if (text[i][j] >= '0' && text[i][j] <= '9') // 数字
//				digit++;
//			else if (text[i][j] == ' ') // 控制
//				space++;
//			else
//				other++; // 其他字符
//		}
//	}
//	printf("\nupper case: %d\n", upp);
//	printf("lower case: %d\n", low);
//	printf("digit : %d\n", digit);
//	printf("space : %d\n", space);
//	printf("other : %d\n", other);
//	return 0;
//}


//int main()
//{
//	char s[1024] = { 0 };
//	printf("明文为:\n");
//	scanf("%s", s);
//	int len = strlen(s);
//	// 转换
//	for (int i = 0; i < len; ++i)
//	{
//		// 如果是小写字母(大写字母出来类似)：
//		// 1. 先用s[i] - 'a'计算出s[i]是26个字母中从前往后数的第几个
//		// 2. 再用26 - (s[i]- 'a') - 1 转换为26个字母中从后往前数的第几个
//		// 3. 在2的结果上加上'a'，即转换为对应从后往前的第几个字母
//		if (s[i] >= 'a' && s[i] <= 'z')
//			s[i] = 'a' + 26 - (s[i] - 'a') - 1;
//		else if (s[i] >= 'A' && s[i] <= 'Z')
//			s[i] = 'A' + 26 - (s[i] - 'A') - 1;
//	}
//	printf("加密文本为:%s\n", s);
//	return 0;
//}

//int main()
//{
//	char s1[100] = { 0 };
//	char s2[50] = { 0 };
//	int index1 = 0, index2 = 0;
//	printf("请输入字符串s1：");
//	scanf("%s", s1);
//	printf("请输入字符串s2：");
//	scanf("%s", s2);
//	printf("将s2拼接在s1之后: ");
//	// 1. 找到s1的末尾
//	while ('\0' != s1[index1])
//		index1++;
//	// 2. 将s2中的字符逐个往s1之后拼接
//	while (s1[index1++] = s2[index2++]);
//	printf("%s\n", s1);
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int index = 0;
//	char s1[100] = { 0 };
//	char s2[100] = { 0 };
//	printf("请输入s1:");
//	gets(s1);
//	printf("请输入s2:");
//	gets(s2);
//	// 将s1和s2中的字符从前往后逐个进行比较，相等继续往后，
//	// 不相等时ret中结果不为0，!ret则为0 循环结束
//	// 如果一个走到末尾，一个未走到末尾 ret也不为0， !ret为0，循环结束
//	// 如果两个字符串相等，同时达到末尾，循环结束
//	while (!(ret = s1[index] - s2[index]) && '\0' != s1[index] && '\0' !=
//		s2[index])
//	{
//		++index;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char s1[100] = { 0 };
//	char s2[50] = { 0 };
//	int index1 = 0, index2 = 0;
//	printf("请输入字符串s2：");
//	scanf("%s", s2);
//	printf("将s2拷贝到s1中, s1现在为: ");
//	// 将s2[index2]位置字符拷贝到s1[index]位置，
//	// 然后以s1[index1]的值作为循环条件判断是否拷贝到s2的末尾
//	while (s1[index1++] = s2[index2++]);
//	printf("%s\n", s1);
//	return 0;
//}