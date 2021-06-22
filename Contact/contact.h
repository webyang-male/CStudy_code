#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 1000 //预定义人数
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//创建联系人类型
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//创建通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];
	int size;//记录当前已经有的人数信息个数
};

//枚举选项-增加选项代码可读性
enum Option
{
	EXIT,//0
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

/*声明函数*/

//初始化通讯录
void InitContact(struct Contact* ps);

//添加
void AddContact(struct Contact* ps);

//显示
void showContact(const struct Contact* ps);//仅做展示,不修改内容用const

//删除
void DelContact(struct Contact* ps);

//查找
void SearchContact(const struct Contact* ps);

//修改
void ModifyContact(struct Contact* ps);

//排序
void SortContact( struct Contact* ps);