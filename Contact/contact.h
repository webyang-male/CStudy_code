#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 1000 //Ԥ��������
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//������ϵ������
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//����ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];
	int size;//��¼��ǰ�Ѿ��е�������Ϣ����
};

//ö��ѡ��-����ѡ�����ɶ���
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

/*��������*/

//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);

//���
void AddContact(struct Contact* ps);

//��ʾ
void showContact(const struct Contact* ps);//����չʾ,���޸�������const

//ɾ��
void DelContact(struct Contact* ps);

//����
void SearchContact(const struct Contact* ps);

//�޸�
void ModifyContact(struct Contact* ps);

//����
void SortContact( struct Contact* ps);