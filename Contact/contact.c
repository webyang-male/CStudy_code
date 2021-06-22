#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

//ͨѶ¼��ʼ��
void InitContact(struct Contact* ps){
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ����Ϣ
}

//����
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("\nͨѶ¼����,�޷�����!!!\n");
	}
	else{
		printf("��������ϵ������:>\n");
		scanf("%s", ps->data[ps->size].name);
		printf("��������ϵ������:>\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("��������ϵ���Ա�:>\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("��������ϵ�˵绰:>\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("��������ϵ�˵�ַ:>\n");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("\nͨѶ¼��ϵ����Ϣ��ӳɹ�!!!\n");
	}
}

//��ʾ��ӡ
void showContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("\nͨѶ¼Ϊ��!\n");
	}
	else{
		printf("%20s\t %4s\t %5s\t %12s\t %20s\t\n", "����", "����", "�Ա�", "�绰", "סַ");
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

//FindByName���ܴ������
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

	return -1;//�Ҳ��������
}

//ɾ��
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//1. ����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ������� -1
	int pos = FindByName(ps, name);
	//2. ɾ��
	if (pos == -1)
	{
		printf("\nҪɾ�����˲�����!\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("\nɾ���ɹ�!\n");
	}


	//int i = 0;
	////2. ɾ��
	//for (i = 0; i < ps->size; i++)
	//{
	//	if (0 == strcmp(ps->data[i].name,name))
	//	{
	//		break;
	//	}
	//}
	//	if (i == ps->size)
	//	{
	//		printf("Ҫɾ������ϵ�˲�����!\n");
	//	}
	//	else
	//	{
	//		//ɾ������
	//		int j = 0;
	//		for ( j = i; j < ps->size-1; j++)
	//		{
	//			ps->data[j] = ps->data[j+1];
	//		}
	//		ps->size--;
	//		printf("ɾ���ɹ�!\n");
	//	}
}

//����ָ����ϵ����Ϣ
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ������:>\n");
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
		printf("\nҪ���ҵ��˲�����!\n");
	}
	else
	{//�ҵ�����ʾ��Ϣ
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

//�޸�
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ������:>\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("\nҪ�޸ĵ��˲�����!\n");
	}
	else{
		printf("��������ϵ������:>\n");
		scanf("%s", ps->data[pos].name);
		printf("��������ϵ������:>\n");
		scanf("%d", &(ps->data[pos].age));
		printf("��������ϵ���Ա�:>\n");
		scanf("%s", ps->data[pos].sex);
		printf("��������ϵ�˵绰:>\n");
		scanf("%s", ps->data[pos].tele);
		printf("��������ϵ�˵�ַ:>\n");
		scanf("%s", ps->data[pos].addr);

		printf("\n��ϵ����Ϣ�޸����!\n");

	}
}

//����
void SortContact(struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("\nͨѶ¼Ϊ��!\n");
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
		printf("\n����ɹ�!\n");
	}
}