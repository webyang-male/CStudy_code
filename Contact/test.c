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
	int input = 0;//�û�����ֵ��ʼ��

	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼,���1k����Ϣ��size

	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("���ܲ˵�����,����������ѡ����:>\n");
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
			showContact(&con);//��ַ����,����ѹջ����
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("\n�ɹ��˳�ͨѶ¼!\n");
			break;
		default:
			printf("\nѡ�����,����������!>\n");
			break;
		}

	} while (1);
	return 0;
}