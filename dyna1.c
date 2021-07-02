#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

//int main()
//{
//	return 0;
//}

//int main()
//{
//	int *p = (int *)malloc(40);
//	//一旦malloc失败,p将被赋值为NULL
//	//*p= 0;
//
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p+i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////正常使用
//	//int *p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//	//
//
//	int *p = realloc(NULL, 40);//等同于malloc(40)
//	return 0;
//}

//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//	free(p);
//	p = NULL;
//
//	free(p);
//	return 0;
//}

//void test()
//{
//	int *p = (int *)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//}


//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

////改正1
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//char* GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//改
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}


////常规写法
////struct S
////{
////	int n;
////	int arr[10];
////};
//
//struct S
//{
//	int n;
//	int arr[];//未知大小的
//};
//
//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};

//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//int main(){
//	//代码2
//	typedef struct st_type
//	{
//		int i;
//		int *p_a;
//	}type_a;
//	type_a *p = malloc(sizeof(type_a));
//	p->i = 100;
//	p->p_a = (int *)malloc(p->i*sizeof(int));
//	//业务处理
//	for (i = 0; i < 100; i++)
//	{
//		p->p_a[i] = i;
//	}
//	//释放空间
//	free(p->p_a);
//	p->p_a = NULL;
//	free(p);
//	p = NULL;
//}


