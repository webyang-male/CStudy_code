#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//#include "add.h"//�����Զ���ͷ�ļ���˫����
//int main() 
//{	
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}


//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//
//int main() 
//{	
//	unsigned int num = 0;
//	scanf("%d",&num);//1234
//	//�ݹ��㷨
//	print(num);
//	printf("���");
//	return 0;
//}

//int my_strlen(char* str)
//{	
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

////�ݹ鷽��
////�Ѵ��»�С
////my_strlen("abc")=>1+my_strlen("bc")
////1+1+my_strlen("c")
////1+1+1+my_strlen("")
////1+1+1+0
////3
//int my_strlen(char* str)
//{	
//	if(*str == '\0') 
//		return 0;
//	else 
//		return 1+my_strlen(str+1);//�����my_strlen(str+1)�൱�ڴ�������ĸb��ַ��ʼ��
//}
//
//int main() 
//{	
//	char arr[] = "abc\0";
//
//	int len = my_strlen(arr);//arr������,���鴫��,����ȥ�Ĳ�����������,���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n",len);
//	return 0;
//}

////int Facl(int n)
////{
////	int i = 0;
////	int ret = 1;
////	for(i=1;i<=n;i++)
////	{
////		ret *= i;
////	}
////	return ret;
////}
//
//int Fac2(int n)
//{
//	if(n<=1)
//	{
//		return 1;
//	}
//	else
//		return n*Fac2(n-1);
//}
//
//int main() 
//{	
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	printf("������һ��������:>\n");
//	scanf("%d",&n);
//	//ret = Facl(n);//ѭ���ķ�ʽ
//	ret = Fac2(n);
//	printf("%d\n",ret);
//	return 0;
//}

