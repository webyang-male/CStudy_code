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
//	////错误示范
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };//19--随机值
//	//int len = strlen(arr);//19
//
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//size_t == unsigned int
//int main()
//{
//	//3     -     6 =      -3(无符号补码大于0)
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("大于0\n");
//	}
//	else
//	{
//		printf("小于0\n");
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	//错误示范
//	//char *arr1 = "abcdefghi";//常量字符串不可改变
//	//char arr2[] = { 'b', 'i', 't' };//\0未知
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
//	//1.找到目标字符的\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
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
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
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