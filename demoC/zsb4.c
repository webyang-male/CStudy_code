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
//	printf("������Ҫ���ҵ�����:>\n ");
//	scanf("%d", &key);
//	// ���ֲ���
//	while (left < right)
//	{
//		// �ҵ��м�λ��
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
//		printf("�޴���\n");
//	return 0;
//}

//int main()
//{
//	int upp = 0, low = 0, digit = 0, space = 0, other = 0;
//	char text[3][80];
//	for (int i = 0; i < 3; i++)
//	{
//		// ��ȡһ���ı�
//		printf("please input line %d:\n", i + 1);
//		gets(text[i]);
//		// ͳ�Ƹ����ı���Сд��ĸ����д��ĸ�����֡��ո������ַ��ĸ���
//		for (int j = 0; j < 80 && text[i][j] != '\0'; j++)
//		{
//			if (text[i][j] >= 'A'&& text[i][j] <= 'Z') // ��д��ĸ
//				upp++;
//			else if (text[i][j] >= 'a' && text[i][j] <= 'z') // Сд��ĸ
//				low++;
//			else if (text[i][j] >= '0' && text[i][j] <= '9') // ����
//				digit++;
//			else if (text[i][j] == ' ') // ����
//				space++;
//			else
//				other++; // �����ַ�
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
//	printf("����Ϊ:\n");
//	scanf("%s", s);
//	int len = strlen(s);
//	// ת��
//	for (int i = 0; i < len; ++i)
//	{
//		// �����Сд��ĸ(��д��ĸ��������)��
//		// 1. ����s[i] - 'a'�����s[i]��26����ĸ�д�ǰ�������ĵڼ���
//		// 2. ����26 - (s[i]- 'a') - 1 ת��Ϊ26����ĸ�дӺ���ǰ���ĵڼ���
//		// 3. ��2�Ľ���ϼ���'a'����ת��Ϊ��Ӧ�Ӻ���ǰ�ĵڼ�����ĸ
//		if (s[i] >= 'a' && s[i] <= 'z')
//			s[i] = 'a' + 26 - (s[i] - 'a') - 1;
//		else if (s[i] >= 'A' && s[i] <= 'Z')
//			s[i] = 'A' + 26 - (s[i] - 'A') - 1;
//	}
//	printf("�����ı�Ϊ:%s\n", s);
//	return 0;
//}

//int main()
//{
//	char s1[100] = { 0 };
//	char s2[50] = { 0 };
//	int index1 = 0, index2 = 0;
//	printf("�������ַ���s1��");
//	scanf("%s", s1);
//	printf("�������ַ���s2��");
//	scanf("%s", s2);
//	printf("��s2ƴ����s1֮��: ");
//	// 1. �ҵ�s1��ĩβ
//	while ('\0' != s1[index1])
//		index1++;
//	// 2. ��s2�е��ַ������s1֮��ƴ��
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
//	printf("������s1:");
//	gets(s1);
//	printf("������s2:");
//	gets(s2);
//	// ��s1��s2�е��ַ���ǰ����������бȽϣ���ȼ�������
//	// �����ʱret�н����Ϊ0��!ret��Ϊ0 ѭ������
//	// ���һ���ߵ�ĩβ��һ��δ�ߵ�ĩβ retҲ��Ϊ0�� !retΪ0��ѭ������
//	// ��������ַ�����ȣ�ͬʱ�ﵽĩβ��ѭ������
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
//	printf("�������ַ���s2��");
//	scanf("%s", s2);
//	printf("��s2������s1��, s1����Ϊ: ");
//	// ��s2[index2]λ���ַ�������s1[index]λ�ã�
//	// Ȼ����s1[index1]��ֵ��Ϊѭ�������ж��Ƿ񿽱���s2��ĩβ
//	while (s1[index1++] = s2[index2++]);
//	printf("%s\n", s1);
//	return 0;
//}