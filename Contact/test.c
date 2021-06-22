#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void menu(){
	printf("*************************************************\n");
	printf("********* 1.add          2.del     **************\n");
	printf("********* 3.search       4.modify  **************\n");
	printf("********* 5.show         6.sort    **************\n");
	printf("********* 0.exit                   **************\n");
	printf("*************************************************\n");
}

int main(){
	int input = 0;//用户输入值初始化

	//创建通讯录
	struct Contact con;//con就是通讯录,存放1k人信息和size

	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("功能菜单如下,请输入数字选择功能:>\n");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			showContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			showContact(&con);
			break;
		case SHOW:
			showContact(&con);//地址传参,减少压栈开销
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("\n成功退出通讯录!\n");
			break;
		default:
			printf("\n选择错误,请重新输入!>\n");
			break;
		}

	} while (1);
	return 0;
}