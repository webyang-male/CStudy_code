#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <time.h>

//int main() {
//	int i = 0;
//	char psw[10] = {0};
//	for (i = 0;i < 3;i++) 
//	{
//		printf("请输入密码:\n");
//		scanf("%s",psw);
//		//==不能用来比较两介字符串是否相等,应该使用一个库函数-strcmp
//		if (strcmp(psw,"520") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf( "哦豁!密码错误\n");
//		}
//	}
//	if(i == 3)
//		printf("3次密码输入错误:exit\n"); 
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入3个数字:\n");
//	scanf("%d%d%d",&a,&b,&c);
//	/*算法实现
//	*a放最大值
//	*b放第二大
//	c放最小值
//	*/
//	if(a<b){
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c){
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c){
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("排序结果为:%d %d %d",a,b,c);//注意输入数字带入空格
//	return 0;
//}

//int main() {
//	int i = 0;
//	for(i = 1;i<=100;i++){
//		if(i%3 == 0){
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int m = 0;
//	int n = 0 ;
//	int r = 0;
//	printf("请输入2个数字:\n");
//	scanf("%d%d",&m,&n);
//	while(m % n){
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("====================\n");
//	printf("最大公约数为:%d\n",n);
//	printf("====================\n");
//	return 0;
//}

//int main() {
//	int year = 0;
//	int count = 0;
//	for(year = 1000;year<=2000;year++){
//		//判断闰年规则
//		//1.非整百年:能被4整除的为闰年。(如2004年就是闰年,2001年不是闰年)
//		//2.整百年:能被400整除的是闰年。(如2000年是闰年,1900年不是闰年)
//		if(year%4==0 && year%100 !=0){
//			printf("%d ",year);
//			count++;
//		}
//		else if(year%400==0){
//			printf("%d ",year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);//求得闰年总数
//	return 0;
//}

//#include <math.h>
//int main() {
//	int i = 0;
//	int count = 0;//初始化素数总数
//	for(i = 100;i<=200;i++)
//	{
//		//判断i是否为素数
//		//产生2->i-1的数字
//		int j = 0;
//		//sqrt--开平方的数学库函数
//		for(j = 2;j <= sqrt(i);j++){
//			if(i%j == 0){
//				break;
//			}	
//		}
//		//走到这里有2种情况:1.前面if完成2.for循环推荐不满足
//		if(j > sqrt(i)){
//			count++;
//			printf("%d ",i);
//		}
//	}	
//	printf("\ncount=%d\n",count);//求得素数总数
//	return 0;
//}

//int main() {
//	int i = 0;
//	int count = 0;
//	for(i = 1;i<=100;i++)
//	{
//		if(i%10 == 9)
//			count++;
//		if(i/10 == 9)
//			count++;
//	}
//	printf("count=%d\n",count);
//	return 0;
//}

//int main() {
//	int i = 0;//分母初始化
//	double sum = 0.0;
//	int flag = 1;
//	for(i = 1;i<=100;i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//		//printf("%lf\n",sum);
//	}
//	printf("%lf\n",sum);
//	return 0;
//}


//int main() {
//	int arr[] = {1,-2,3,4,5,6,7,8,9,-10};
//	int max = arr[0];//最大值初始化
//
//	int i = 0;//下标
//
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
//	for(i = 1;i<sz;i++){
//		if(arr[i]>max){
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//	return 0;
//}


//int main() {
//    int i,j;  // i, j控制行或列 
//    for(i=1;i<=9;i++) {
//        for(j=1;j<=9;j++)
//            // %2d 控制宽度为两个字符，且右对齐；如果改为 %-2d 则为左对齐
//            // \t为tab缩进
//            printf("%d*%d=%2d\t", i, j, i*j);
//
//        printf("\n");
//    }
//
//    return 0;
//}

//int main() {
//    int i,j;
//    for(i=1;i<=9;i++){
//        for(j=1;j<=9;j++){
//            if(j<i)
//                //打印八个空格，去掉空格就是左上三角形 
//                printf("        ");
//            else
//                printf("%d*%d=%2d  ",i,j,i*j);
//        }
//
//        printf("\n");  
//    }
//
//    return 0;
//}

//int main(){
//    int i,j,n;
//    for(i=1;i<=9;i++){
//      //打印一行
//        for(j=1;j<=i;j++)
//            printf("%d*%d=%-2d  ",i,j,i*j);
//        
//        printf("\n");
//    }
//
//    return 0;
//}