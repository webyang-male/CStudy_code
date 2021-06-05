#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	//32位系统平台,所以输出为4(字节)
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(long*));
//
//	return 0;
//}

//int main()
//{
//
//	int a = 0x11223344;
//	int* pa=&a;
//	*pa = 0;
//
//	char* pc = &a;
//	//输出结果都一样
//	//warning 警告: “初始化”: 从“int *”到“char *”的类型不兼容
//	printf("%d\n", pa);
//	printf("%d\n", pc);
//
//	return 0;
//}


////vs F10进行程序调试查看int 和 char类型指针区别
//int main()
//{
//	int a = 0x11223344;
//	//int* pa=&a;
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);//005BFBB0
//	printf("%p\n", pa + 1);//005BFBB4
//
//	printf("%p\n", pc);//005BFBB0
//	printf("%p\n", pc + 1);//005BFBB1
//	return 0;
//}

//int main()
//{
//	int *p;//局部变量指针未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 0;
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	*p = 8;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;//p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];//这里指向元素10的地址
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);//10 8 6 4 2
//		p -= 2;
//	}
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//指针-指针得到的结果是中间元素个数
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	printf("%d\n", &arr[0] - &arr[9]);//-9
//
//	printf("%d\n", &arr[9] - &ch[0]);//err,结果是不可预知的
//	return 0;
//}

////方法3
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen - 计数器的方式1,递归的方式2
//	char arr[] = "bit";//bit\0
//	int len = my_strlen(arr);
//	printf("%d\n",len );
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}