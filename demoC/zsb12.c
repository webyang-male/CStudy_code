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
//		//重置指针指向a链表的头部
//		pre = head;
//		current = head->next;
//		//a 链表的头等于b
//		if (pre->num == b->num)
//		{
//			pre->next = NULL;
//			pre = current;
//			current = current->next;
//			//更新表头
//			head = pre;
//		}
//		else
//		{
//			while (pre->next != NULL)
//			{
//				if (current->num == b->num)
//				{
//					//找到就删除
//					pre->next = current->next;
//					break;
//				}
//				else
//				{
//					//否则继续遍历
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
//	printf("链表a:\n");
//	printList(&a[0]);
//	student b[2] = { { 5, 38 }, { 4, 98 } };
//	for (int i = 0; i < 1; i++)
//	{
//		b[i].next = &b[i + 1];
//	}
//	b[1].next = NULL;
//	printf("链表b:\n");
//	printList(&b[0]);
//	student *combine = del(a, b);
//	printf("删除之后：\n");
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
//	printf("请输入要删除的年龄：\n");
//	scanf("%d", &n);
//	student *pre = a, *current = a->next, *head;
//	head = a;
//	while (current != NULL)
//	{
//		//如果头结点需要删除，则更新头结点
//		if (head->age == n)
//		{
//			pre->next = NULL;
//			pre = current;
//			current = current->next;
//			head = pre;
//		}
//		else
//		{
//			//删除节点，重新链接
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