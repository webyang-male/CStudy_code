#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

//代码1
//int main() {
//	//int ch =getchar();
//	//EOF--end of file,值为-1
//	int ch = 0;
//	//ctr+z组合键结束程序
//	while((ch = getchar()) != EOF){
//		putchar(ch);
//	}
//	//printf("%c\n",ch);
//	return 0;
//}

//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s",password);//输入密码:并存放在Passsword数组中
//	//程序运行到这里时,缓冲区还剩余一个'\n'
//	printf("请确认密码(Y/N):>");
//
//	//getchar()循环读取一下'\n',让缓冲区内容清空,使程序正常往下运行
//	while ((ch = getchar()) != '\n')
//	{
//		//这个循环杜绝了密码带空格情况如--1234 abc
//	}
//	ret = getchar();//Y/N
//	if(ret == 'Y'){
//		printf("确认成功!\n");
//	}else{
//		printf("放弃确认!\n");
//	}
//	return 0;
//}

////只打印字符0-9范围的数字字符,具体可参考ASCII码表
//int main()
//{	
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//			putchar(ch);     
//	}
//	return 0; 
//}

//int main()
//{
//	int i = 0;
//	//for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/) 
//	for(i=1; i<=10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0; 
//}

