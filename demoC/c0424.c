#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
////qsort�����򻯽��
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
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ
//	return *(int*)e1 - *(int*)e2;
//}
//
////ʵ��bubble_sort�����ĳ���Ա��֪����δ��������Ƚϵ�����Ԫ�ص�����
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
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
//			{
//				//����
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



//��Ŀ��ϰ
//int main()
//{
//	//������������Ԫ�صĵ�ַ���:
//	//1. sizeof(������) - ��������ʾ��������
//	//2. &������ - ��������ʾ��������
//	
//	//һά����
//	int a[] = { 1, 2, 3, 4 };//4*4 = 16
//	printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�- 16
//	printf("%d\n", sizeof(a + 0));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*a));   //4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
//	printf("%d\n", sizeof(a + 1));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1 ��2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(a[1])); //4 - ��2��Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));   //4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*&a));  //16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
//	printf("%d\n", sizeof(&a + 1));//4/8   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
//	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//
//	//�ַ�����
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//	printf("%d\n", sizeof(arr));//sizeof��������������С��6*1 = 6�ֽ�
//	printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4/8�ֽ�
//	printf("%d\n", sizeof(*arr));   //1   arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
//	printf("%d\n", sizeof(arr[1])); //1
//	printf("%d\n", sizeof(&arr));   //4/8 &arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
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
//	printf("%d\n", strlen(&arr));//6 &arr - ����ĵ�ַ-����ָ�� char(*p)[7] = &arr;
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//
//	printf("%d\n", sizeof(arr));//sizeof(arr)���������Ĵ�С����λ���ֽڣ�7
//	printf("%d\n", sizeof(arr + 0));//4/8 ������ǵ�ַ�Ĵ�С-arr + 0����Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));   //1 *arr ����Ԫ�أ�sizeof(*arr)������Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr[1])); //1 arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&arr));   //4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1 �ڶ���Ԫ�صĵ�ַ
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
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	printf("%d\n", sizeof(p));//4/8 - ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1));//4/8 - p+1 �õ������ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));//1 *p �����ַ����ĵ�һ���ַ� - 'a'
//	printf("%d\n", sizeof(p[0]));//1  int arr[10];  arr[0] == *(arr+0)    p[0] == *(p+0) == 'a'
//	printf("%d\n", sizeof(&p));//4/8  ��ַ
//	printf("%d\n", sizeof(&p + 1));//4/8 ��ַ 
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 b��ַ
//
//	return 0;
//}

//int main()
//{
//	//��ά����
//	int a[3][4] = { 0 };
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a[0] + 1);
//	//printf("%p\n", a + 1);
//	//printf("%p\n", &a[0] + 1);
//
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0])); //16 a[0]�൱�ڵ�һ����Ϊһά�������������
//	//sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
//
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ��a[0]��ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ
//	//���� a[0]+1 ���ǵ�һ�еڶ���Ԫ�صĵ�ַ- ��ַ��С��4/8���ֽ�
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4- *(a[0] + 1)) �ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a + 1)); //4     //a�Ƕ�ά�������������û��sizeof(a)��Ҳû��&(a),����a����Ԫ�ص�ַ
//	//���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�У���Ԫ�أ��ĵ�ַ
//	//a+1���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1)));//16, sizeof(a[1]) ����ڶ��еĴ�С,��λ���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));//4, �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 ����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(*a));//a����Ԫ�ص�ַ-��һ�еĵ�ַ��*a���ǵ�һ�У�sizeof(*a)���Ǽ����һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}