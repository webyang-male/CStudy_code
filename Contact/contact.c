#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

//通讯录初始化
void InitContact(struct Contact* ps){
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有0个元素信息
}

//增加
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("\n通讯录已满,无法增加!!!\n");
	}
	else{
		printf("请输入联系人姓名:>\n");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入联系人年龄:>\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入联系人性别:>\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入联系人电话:>\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入联系人地址:>\n");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("\n通讯录联系人信息添加成功!!!\n");
	}
}

//显示打印
void showContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("\n通讯录为空!\n");
	}
	else{
		printf("%20s\t %4s\t %5s\t %12s\t %20s\t\n", "姓名", "年龄", "性别", "电话", "住址");
		for (int i = 0; i < ps->size; i++)
		{
			printf("%20s\t %4d\t %5s\t %12s\t %20s\t\n",
				ps->data[i].name, ps->data[i].age,
				ps->data[i].sex, ps->data[i].tele,
				ps->data[i].addr
				);
		}
	}
}

//FindByName功能代码抽离
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}

	return -1;//找不到的情况
}

//删除
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的姓名:>");
	scanf("%s", name);
	//1. 查找要删除的人在什么位置
	//找到了返回名字所在元素的下标
	//找不到返回 -1
	int pos = FindByName(ps, name);
	//2. 删除
	if (pos == -1)
	{
		printf("\n要删除的人不存在!\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("\n删除成功!\n");
	}


	//int i = 0;
	////2. 删除
	//for (i = 0; i < ps->size; i++)
	//{
	//	if (0 == strcmp(ps->data[i].name,name))
	//	{
	//		break;
	//	}
	//}
	//	if (i == ps->size)
	//	{
	//		printf("要删除的联系人不存在!\n");
	//	}
	//	else
	//	{
	//		//删除数据
	//		int j = 0;
	//		for ( j = i; j < ps->size-1; j++)
	//		{
	//			ps->data[j] = ps->data[j+1];
	//		}
	//		ps->size--;
	//		printf("删除成功!\n");
	//	}
}

//查找指定联系人信息
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的联系人姓名:>\n");
	scanf("%s", name);
	/*int i = 0;
	for (i = 0; i < ps->size; i++)
	{
	if (0 == strcmp(ps->data[i].name, name))
	{
	break;
	}
	}*/

	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("\n要查找的人不存在!\n");
	}
	else
	{//找到并显示信息
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

//修改
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的联系人姓名:>\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("\n要修改的人不存在!\n");
	}
	else{
		printf("请输入联系人姓名:>\n");
		scanf("%s", ps->data[pos].name);
		printf("请输入联系人年龄:>\n");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入联系人性别:>\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入联系人电话:>\n");
		scanf("%s", ps->data[pos].tele);
		printf("请输入联系人地址:>\n");
		scanf("%s", ps->data[pos].addr);

		printf("\n联系人信息修改完成!\n");

	}
}

//排序
void SortContact(struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("\n通讯录为空!\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			if (1 == strcmp(ps->data[j].name, ps->data[j + 1].name))
			{
				ps->data[j] = ps->data[j + 1];
			}
			else if (-1 == strcmp(ps->data[j].name, ps->data[j + 1].name))
			{
				ps->data[j+1] = ps->data[j];
			}
		}
		printf("\n排序成功!\n");
	}
}