#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

//int main() {
//	char arr1[] = "hello";
//	char arr2[20] = "#########";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);//输出--hello
//	return 0;
//}

//int main() {
//	char arr[] = "hello learner";
//	memset(arr,'*',5);
//	printf("%s\n",arr);//输出--***** learner
//	return 0;
//}

//int get_max(int x,int y){
//	return (x>y)?(x):(y);
//}
//
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1,num2);
//	printf("max = %d\n",max);
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n",a,b);
//
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}

//void代表空/无返回值的意思
//void Swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa,int* pb)
//{
//    int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	//输出原始数值
//	printf("a=%d b=%d\n",a,b);
//
//	Swap2(&a,&b);
//	//输出交换后数值
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}
//
