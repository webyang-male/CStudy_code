#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
////qsort函数简化结果
////void qsort(void* base,
////	size_t num,
////	size_t width,
////	int(*cmp)(const void *e1, const void *e2)
////	);
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void*e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较，应该用strcmp函数
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形值
//	return *(int*)e1 - *(int*)e2;
//}
//
////实现bubble_sort函数的程序员不知道，未来排序待比较的两个元素的类型
//void Swap(char* buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void*base, int sz, int width, int(*cmp)(void*e1, void*e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
//			{
//				//交换
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test5();
//	return 0;
//}



//题目练习
//int main()
//{
//	//数组名不是首元素的地址情况:
//	//1. sizeof(数组名) - 数组名表示整个数组
//	//2. &数组名 - 数组名表示整个数组
//	
//	//一维数组
//	int a[] = { 1, 2, 3, 4 };//4*4 = 16
//	printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节- 16
//	printf("%d\n", sizeof(a + 0));//4/8 - 数组名这里表示收元素的值，a+0 还是首元素地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*a));   //4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
//	printf("%d\n", sizeof(a + 1));//4/8 - 数组名这里表示收元素的值，a+1 第2个元素的地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(a[1])); //4 - 第2个元素的大小
//	printf("%d\n", sizeof(&a));   //4/8 &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*&a));  //16 - &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//	printf("%d\n", sizeof(&a + 1));//4/8   &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]是第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 是第二个元素的地址
//
//	//字符数组
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//
//	printf("%d\n", sizeof(arr));//sizeof计算机的是数组大小，6*1 = 6字节
//	printf("%d\n", sizeof(arr + 0));//4/8 arr是首元素的地址，arr+0还是首元素的地址 地址的大小是4/8字节
//	printf("%d\n", sizeof(*arr));   //1   arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节
//	printf("%d\n", sizeof(arr[1])); //1
//	printf("%d\n", sizeof(&arr));   //4/8 &arr 虽然是数组的地址，但还是地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 是跳过整个数组后的地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err 
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 &arr - 数组的地址-数组指针 char(*p)[7] = &arr;
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//
//	printf("%d\n", sizeof(arr));//sizeof(arr)计算的数组的大小，单位是字节：7
//	printf("%d\n", sizeof(arr + 0));//4/8 计算的是地址的大小-arr + 0是首元素的地址
//	printf("%d\n", sizeof(*arr));   //1 *arr 是首元素，sizeof(*arr)计算首元素的大小
//	printf("%d\n", sizeof(arr[1])); //1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
//	printf("%d\n", sizeof(&arr));   //4/8 &arr虽然是数组的地址，但也是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1是跳过整个数组后的地址，但也是地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1 第二个元素的地址
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	printf("%d\n", sizeof(p));//4/8 - 计算指针变量p的大小
//	printf("%d\n", sizeof(p + 1));//4/8 - p+1 得到的是字符b的地址
//	printf("%d\n", sizeof(*p));//1 *p 就是字符串的第一个字符 - 'a'
//	printf("%d\n", sizeof(p[0]));//1  int arr[10];  arr[0] == *(arr+0)    p[0] == *(p+0) == 'a'
//	printf("%d\n", sizeof(&p));//4/8  地址
//	printf("%d\n", sizeof(&p + 1));//4/8 地址 
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 b地址
//
//	return 0;
//}

//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a[0] + 1);
//	//printf("%p\n", a + 1);
//	//printf("%p\n", &a[0] + 1);
//
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0])); //16 a[0]相当于第一行做为一维数组的数组名，
//	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实就是第一行第一个元素的地址
//	//所以 a[0]+1 就是第一行第二个元素的地址- 地址大小是4/8个字节
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4- *(a[0] + 1)) 是第一行第二个元素，大小是4个字节
//	printf("%d\n", sizeof(a + 1)); //4     //a是二维数组的数组名，没有sizeof(a)，也没有&(a),所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）的地址
//	//a+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//16, sizeof(a[1]) 计算第二行的大小,单位是字节
//	printf("%d\n", sizeof(&a[0] + 1));//4, 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(*a));//a是首元素地址-第一行的地址，*a就是第一行，sizeof(*a)就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}