#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
//int main(){
//
//	int line = 0;
//	printf("��Ϊc���Դ���\n");
//	while(line <=20000){
//		printf("��һ����Ч����:%d\n",line);
//		line++;
//	}
//	if(line >= 20000)
//		printf("�㽫���һ�ݺ�offer!\n");
//	return 0;
//}

/*
Addǰ��int �涨return����ֵ������
Add�Ǻ�����
int m,int n---��������
{}��������Ĵ���к�����
*/
//int Add(int m,int n){
//	int z = m +n;
//	return z;
//}
//int main(){
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//
//	int a =1;
//	int b=2;
//
//	//sum = num1 + num2;
//	sum =Add(num1,num2);
//	printf("sum=%d\n",sum);//30
//	//sum = a + b;
//	sum =Add(a,b);
//	printf("sum=%d\n",sum);//3
//
//	return 0;
//}

//int main(){
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};//����һ�����10���������ֵ�����
//	int i = 0;
//	printf("%d\n",arr[9]);//���±��������Ԫ��--9
//  
//  //��ӡ����0-9
//	while(i<10)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main(){
//	int a = 1;
//	//����1ռ4���ֽ�-32biλ
//	//0000 0000 0000 0000 0000 0000 0000 0001
//
//	//��a��������һλ a<<1
//	//0000 0000 0000 0000 0000 0000 0000 0010
//
//	//������10=1*2^1+0 = 2
//	int b = a<<1;
//	printf("%d\n",b);//���ʮ����2
//	printf("%d\n",a);//1,a���ֲ���
//	return 0;
//}

//int main(){
//	int a = 3;
//	int b = 5;
//
//	//int c = a&b;
//	//a 011
//	//b 101
//	//c 001
//
//	//int c = a|b;
//	//a 011
//	//b 101
//	//c 111
//
//	int c = a^b;
//	//a 011
//	//b 101
//	//c 110
//	//printf("a&b=%d\n",c);//ʮ����1
//	//printf("a|b=%d\n",c);//ʮ����7
//	printf("a^b=%d\n",c);//ʮ����6
//	return 0;
//}

//int main()
//{	
//	int a = 10;
//	int arr[10] = {0};
//	int sz = 0;
//	//sizeof������Ǳ���/������ռ�ռ�Ĵ�С;��λ���ֽ�
//	printf("LINE1=%d\n",sizeof(a));//���4
//	printf("LINE2=%d\n",sizeof(int));//���4,�ȼ�����һ��
//
//	printf("%d\n",sizeof(arr));//��������С40,��λ���ֽ�
//
//	/*
//	���������Ԫ�ظ���
//	����=����Ԫ���ܴ�С/ÿ��Ԫ�صĴ�С
//	*/
//	sz = sizeof(arr)/sizeof(arr[0]);
//	printf("�����Ԫ�ظ���Ϊ = %d\n",sz);
//	return 0;	
//}