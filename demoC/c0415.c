#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	//32λϵͳƽ̨,�������Ϊ4(�ֽ�)
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
//	//��������һ��
//	//warning ����: ����ʼ����: �ӡ�int *������char *�������Ͳ�����
//	printf("%d\n", pa);
//	printf("%d\n", pc);
//
//	return 0;
//}


////vs F10���г�����Բ鿴int �� char����ָ������
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
//	int *p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
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
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
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
//	int* p = &arr[9];//����ָ��Ԫ��10�ĵ�ַ
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
//	//ָ��-ָ��õ��Ľ�����м�Ԫ�ظ���
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	printf("%d\n", &arr[0] - &arr[9]);//-9
//
//	printf("%d\n", &arr[9] - &ch[0]);//err,����ǲ���Ԥ֪��
//	return 0;
//}

////����3
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
//	//strlen - ���ַ�������
//	//�ݹ� - ģ��ʵ����strlen - �������ķ�ʽ1,�ݹ�ķ�ʽ2
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