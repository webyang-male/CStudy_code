#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//typedef struct student
//{
//	int num;
//	double grade;
//	struct student *next;
//} student;
//
//student *del(student *a, student *b)
//{
//	student *pre, *current, *head;
//	head = a;
//	while (b != NULL)
//	{
//		//����ָ��ָ��a�����ͷ��
//		pre = head;
//		current = head->next;
//		//a �����ͷ����b
//		if (pre->num == b->num)
//		{
//			pre->next = NULL;
//			pre = current;
//			current = current->next;
//			//���±�ͷ
//			head = pre;
//		}
//		else
//		{
//			while (pre->next != NULL)
//			{
//				if (current->num == b->num)
//				{
//					//�ҵ���ɾ��
//					pre->next = current->next;
//					break;
//				}
//				else
//				{
//					//�����������
//					pre = pre->next;
//					current = current->next;
//				}
//			}
//		}
//		b = b->next;
//	}
//	return head;
//}
//void printList(student *root)
//{
//	printf("----\n");
//	int i = 0;
//	while (root != NULL)
//	{
//		printf("student %d -> %d -> %.2lf\n", i, root->num, root->grade);
//		root = root->next;
//		i++;
//	}
//}
//int main()
//{
//	student a[3] = { { 1, 79 }, { 4, 36 }, { 5, 79 } };
//	for (int i = 0; i < 2; i++)
//	{
//		a[i].next = &a[i + 1];
//	}
//	a[2].next = NULL;
//	printf("����a:\n");
//	printList(&a[0]);
//	student b[2] = { { 5, 38 }, { 4, 98 } };
//	for (int i = 0; i < 1; i++)
//	{
//		b[i].next = &b[i + 1];
//	}
//	b[1].next = NULL;
//	printf("����b:\n");
//	printList(&b[0]);
//	student *combine = del(a, b);
//	printf("ɾ��֮��\n");
//	while (combine != NULL)
//	{
//		printf("%d -> %.2lf\n", combine->num, combine->grade);
//		combine = combine->next;
//	}
//	return 0;
//}

//typedef struct student
//{
//	int num;
//	char sex[10];
//	char name[100];
//	int age;
//	struct student *next;
//} student;
//
//void printList(student *root)
//{
//	printf("----\n");
//	while (root != NULL)
//	{
//		printf("num:%d, sex: %s, name: %s, age: %d\n", root->num, root->sex,
//			root->name, root->age);
//		root = root->next;
//	}
//}
//
//int main()
//{
//	student a[] = { { 1, "woman", "apple", 12 }, { 2, "woman", "banbana", 36 },
//	{ 3, "man", "candy", 79 }, { 4, "man", "danny", 36 }, { 5, "man", "enjoy", 98 }
//	};
//	for (int i = 0; i < 4; i++)
//	{
//		a[i].next = &a[i + 1];
//	}
//	a[4].next = NULL;
//	printList(&a[0]);
//	int n;
//	printf("������Ҫɾ�������䣺\n");
//	scanf("%d", &n);
//	student *pre = a, *current = a->next, *head;
//	head = a;
//	while (current != NULL)
//	{
//		//���ͷ�����Ҫɾ���������ͷ���
//		if (head->age == n)
//		{
//			pre->next = NULL;
//			pre = current;
//			current = current->next;
//			head = pre;
//		}
//		else
//		{
//			//ɾ���ڵ㣬��������
//			if (current->age == n)
//			{
//				pre->next = current->next;
//			}
//			pre = current;
//			current = current->next;
//		}
//	}
//	printList(head);
//	return 0;
//}