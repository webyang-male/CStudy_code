#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int num = 0;
//	int count = 0;
//	printf("������һ������:>\n");
//	scanf("%d",&num);
//	//ͳ��num�Ĳ������м���1
//	while (num)
//	{
//		if (num%2==1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("count=%d\n",count);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;//����ֵ��ʼ��
//	int count = 0;//������ʼ��
//	int i = 0;
//	printf("������һ������:>\n");
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//
//	return 0;
//}

////����3��
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;//����
//	printf("������һ������:>\n");
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int weight = 120;//����
//	weight = 89;//������͸�ֵ
//	double salary = 10000.0;
//	salary = 20000.0;//ʹ�ø�ֵ��������ֵ��
//	return 0;
//}


//int main(){
//	//��ֵ��������������ʹ�ã����磺
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;//������ֵ
//	//�����Ĵ���о���ô����
//	//��ͬ�������壬�㿴����
//	x = y + 1;
//	a = x;
//	//������д���ǲ��Ǹ�������ˬ�ʶ������ڵ��ԡ�
//	return 0;
//}

//int main(){
//	int a = 10;
//	a = a + 2;
//	a += 2;//���ϸ�ֵ��
//
//	int x = 8;
//	x = x >> 1;
//	x >>= 1;
//
//	int m = 6;
//	m = m & 1;
//	m &= 1;
//	//���������һ���ĵ���ֻ������д���Ӽ�ࡣ
//	return 0;
//}

//int main(){
//	int a = 0;
//	if (a)
//	{
//		printf("����Ϊ��,����������\n");
//	}
//	if (!a)
//	{
//		printf("����Ϊ��,�������\n");
//	}
//
//	int b = -5;
//	b = -b;
//	printf("%d\n",b);
//
//	int x = 10;
//	int* p = &x;//&ȡ��ַ������
//	*p = 520;//*�����ò�����
//	printf("%d\n", *p);//*p=x=520
//
//	int q = 10;
//	char c = 'c';
//	char *d = &c;
//	int arr[10] = {0};
//
//	//sizeof���������ռ�ڴ�ռ�Ĵ�С
//	printf("%d\n", sizeof(q));//4
//	printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof int);//sizeof������Ͳ���ʡ������
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(d));//4
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int[10]));//��������--40
//	return 0;
//}

