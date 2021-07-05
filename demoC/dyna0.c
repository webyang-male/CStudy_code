#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr[n];
//	int i = 0;
//
//	for ( i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//	for ( i = 0; i < n; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//向内存申请10个整型的空间
//	int*p = (int*)malloc(10 * sizeof(int));
//	//int *p = (int*)malloc(INT_MAX);//失败测试
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不需要时,用free函数释放归还空间
//	free(p);
//	return 0;
//}

//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));//10个0
//		}
//	}
//	//free函数释放动态开辟的空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个自字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	//
//	//realloc使用的注意事项：
//	//1. 如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2. 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//  开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//  最后返回新开辟的内存空间地址
//	//3. 得用一个新的变量来接受realloc函数的返回值
//	//
//	int*ptr = realloc(p, INT_MAX);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//
//	return 0;
//}