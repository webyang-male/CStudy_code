#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>


//int main(){
//	int age = 18;
//	if(age <18)
//		printf("未成年\n");
//	else
//		printf("祝贺成年\n");
//	return 0;
//}

//int main(){
//	int age = 18;
//	if(age <18){
//		printf("未成年\n");
//		printf("游戏时间受限\n");
//	}
//	else 
//	{
//		if(age>=18 && age<30)
//			printf("青年\n");
//		else if(age>=30 && age<50)
//			printf("中年\n");
//		else if(age>=50 && age<70)
//			printf("老年\n");
//	}
//}

//int main(){
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		if(b == 2)
//			printf("加油\n");
//		else
//			printf("努力\n");
//	return 0;
//}

//适当的使用{}可以使代码的逻辑更加清楚
//代码风格很重要
//int main() {
//	int a = 0;
//	int b = 2;
//	if(a == 1) 
//	{
//		if(b == 2) 
//		{
//			printf("hehe\n");
//		}
//	} 
//	else 
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//1. 判断一个数是否为奇数
//int main()
//{
//	int x;
//	printf("请输入一个整数\n");
//	scanf("%d",&x);
//	/*if(x % 2 == 0)
//	{
//	printf("您输入的是偶数\n");
//	}
//	else
//	{
//	printf("您输入的是奇数\n");
//	}*/
//	if(x%2==0){
//		printf("您输入的是偶数\n");
//	}
//	if(x%2==1){
//		printf("您输入的是奇数\n");
//	}
//}

//2. 输出1-100之间的奇数

//int main()
//{
//	int i;
//	for(i=1;i<100;i+=2)
//	{
//		printf("%d\t",i);
//	}
//	getchar();
//	return 0;
//}

//int main()
//{
//	int i;
//	for(i=1;i<=100;i++)
//	{
//		if(i%2 != 0)
//		{
//			printf("%d\t",i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	printf("请输入1至7的整数\n");
//	scanf("%d",&day);
//	if(1 == day)
//		printf("今天是周1\n");
//	else if(2 == day)
//		printf("今天是周2\n");
//	else if(3 == day)
//		printf("今天是周3\n");
//	else if(4 == day)
//		printf("今天是周4\n");
//	else if(5 == day)
//		printf("今天是周5\n");
//	else if(6 == day)
//		printf("今天是周6\n");
//	else if(7 == day)
//		printf("今天是周7\n");
//	return 0;
//}

//int main() {
//	int day = 0;
//	printf("请输入1至7的整数\n");
//	scanf("%d",&day);
//	switch(day) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("用户输入错误\n");
//		break;
//	}
//	return 0;
//}

////switch代码演示 
//int main() {
//	int day = 0;
//	printf("请输入1至7的整数\n");
//	scanf("%d",&day);
//	switch(day) {
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//		    printf("weekend\n");
//			break;
//	}
//	return 0;
//}