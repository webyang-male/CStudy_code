#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	//int len = strlen("abcdef");//6
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' ,'\0'};//6
//	////����ʾ��
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };//19--���ֵ
//	//int len = strlen(arr);//19
//
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//size_t == unsigned int
//int main()
//{
//	//3     -     6 =      -3(�޷��Ų������0)
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("����0\n");
//	}
//	else
//	{
//		printf("С��0\n");
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	//����ʾ��
//	//char *arr1 = "abcdefghi";//�����ַ������ɸı�
//	//char arr2[] = { 'b', 'i', 't' };//\0δ֪
//	char arr2[] = "bit";//4
//	
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//


//int main()
//{
//	char arr1[30] = "hello\0xxxxx";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//char* my_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//
//	//1.�ҵ�Ŀ���ַ���\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main(){
//	int c = 0, k;
//	for (k = 0; k < 3; k++)
//	switch (k)
//	{
//		default:
//			c += k;
//			break;
//		case 2:c++; break;
//		case 4:c += 2; break;
//	}
//	printf("%d\n", c);
//}

//int main()
//{
//	//VS2013
//	//> 1
//	//== 0
//	//< -1
//
//	//linux-gcc
//	//> >0
//	//== 0
//	//< <0
//	char* p1 = "qbc";//6
//	char* p2 = "abc";//5
//
//	//int ret = strcmp(p1, p2);
//	//printf("%d\n", ret);
//	if (strcmp(p1, p2)>0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("pa == p2\n");
//	}
//	else if (strcmp(p1, p2)<0)
//	{
//		printf("p1<p2\n");
//	}
//	
//
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcd";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	
//	strncpy(arr1, arr2, 6);
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxx";
//	char arr2[] = "world";
//
//	strncat(arr1, arr2, 8);
//	printf("%s\n", arr1);
//
//	return 0;
//}