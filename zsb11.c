#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//typedef struct LNode
//{
//	int num;
//	struct LNode *next;
//} LNode;
////创建含有n个值的节点
//LNode* creat(int n)
//{
//	LNode *head, *p;
//	head = (LNode *)malloc(sizeof(LNode));
//	p = head; //头节点为0 加上头节点共n + 1个节点
//	head->num = 0;
//	head->next = NULL;
//	for (int i = 1; i <= n; i++)
//	{
//		LNode *newNode = (LNode *)malloc(sizeof(LNode));
//		newNode->num = i;
//		newNode->next = NULL;
//		p->next = newNode;
//		p = p->next;
//	}
//	return head;
//}
////删除值为n的节点
//void del(int n, LNode *head)
//{
//	LNode *pre, *current;
//	pre = head;
//	current = head->next;
//	//从第一个有效节点开始查找待删除节点
//	printf("delete node %d\n", n);
//	while (current != NULL)
//	{
//		//找到待删除节点，重新链接，释放待删除节点
//		if (current->num == n)
//		{
//			pre->next = current->next;
//			free(current);
//			break;
//		}
//		//更新查找位置
//		pre = current;
//		current = current->next;
//	}
//}
//int main()
//{
//	LNode *head, *p;
//	int n;
//	head = creat(10);
//	printf("请输入需要删除的节点:1-10\n");
//	scanf("%d", &n);
//	del(n, head);
//	int i = 1;
//	p = head->next;
//	while (p != NULL)
//	{
//		printf("p %d.num -> %d\n", i, p->num);
//		p = p->next;
//		i++;
//	}
//	return 0;
//}

//
//typedef struct LNode
//{
//	int num;
//	struct LNode *next;
//} LNode;
//void insert(int n, LNode *node)
//{
//	//创建新节点
//	LNode *newNode = (LNode *)malloc(sizeof(LNode));
//	newNode->num = n;
//	LNode* next = node->next;
//	// node ---> newNode ---> next
//	newNode->next = next;
//	node->next = newNode;
//}
//LNode* creat(int n)
//{
//	LNode *head, *p;
//	head = (LNode *)malloc(sizeof(LNode));
//	p = head; //头节点为0 加上头节点共11个节点
//	head->num = 0;
//	head->next = NULL;
//	for (int i = 1; i <= n; i++)
//	{
//		LNode *newNode = (LNode *)malloc(sizeof(LNode));
//		newNode->num = i;
//		newNode->next = NULL;
//		p->next = newNode;
//		p = p->next;
//	}
//	return head;
//}
//void printNode(LNode* head)
//{
//	LNode* p = head->next;
//	while (p != NULL)
//	{
//		printf("num -> %d\n", p->num);
//		p = p->next;
//	}
//}
//int main()
//{
//	LNode *head;
//	int n;
//	head = creat(10);
//	printNode(head);
//	printf("请输入需要插入的节点:\n");
//	scanf("%d", &n);
//	insert(n, head);
//	printf("链表的新内容：\n");
//	printNode(head);
//	return 0;
//}

//#define COUNT 5
//typedef struct LNode
//{
//	int num;
//	struct LNode *next;
//} LNode;
//LNode* create(int n)
//{
//	LNode *head, *p;
//	head = (LNode *)malloc(sizeof(LNode));
//	p = head; //头节点为0 加上头节点共11个节点
//	head->num = 0;
//	head->next = NULL;
//	for (int i = 1; i <= n; i++)
//	{
//		LNode *newNode = (LNode *)malloc(sizeof(LNode));
//		newNode->num = i;
//		newNode->next = NULL;
//		p->next = newNode;
//		p = p->next;
//	}
//	return head;
//}
////在指定位置插入数据
//void insert(int n, int positon, LNode *root)
//{
//	//首先找到指定位置
//	while (positon--)
//	{
//		root = root->next;
//	}
//	//插入新的数据，重新链接插入点的前后节点关系
//	LNode *newNode = (LNode *)malloc(sizeof(LNode));
//	newNode->num = n;
//	newNode->next = root->next;
//	root->next = newNode;
//}
//void del(int n, LNode *root)
//{
//	LNode *pre = NULL;
//	while (root->num != n)
//	{
//		pre = root;
//		root = root->next;
//	}
//	pre->next = root->next;
//}
//void printList(LNode *root)
//{
//	printf("----\n");
//	int i = 0;
//	while (root != NULL)
//	{
//		printf("node %d -> %d\n", i, root->num);
//		root = root->next;
//		i++;
//	}
//}
//int main()
//{
//	int n, position;
//	printf("请输入插入/删除的数，及插入的位置，位置最大为:%d\n", COUNT);
//	scanf("%d %d", &n, &position);
//	LNode *head = create(COUNT);
//	printList(head->next);
//	insert(n, position, head->next);
//	printList(head->next);
//	del(n, head->next);
//	printList(head->next);
//	return 0;
//}

//typedef struct student
//{
//	int num;
//	double grade;
//	struct student *next;
//} student;
//student *merge(student *a, student *b)
//{
//	//先合并，后排序
//	student *head = a;
//	while (a->next != NULL)
//	{
//		a = a->next;
//	}
//	a->next = b;
//	//选择排序，每次选最小的，放在未排序的链表头部
//	student *pre;
//	pre = head;
//	while (pre->next != NULL)
//	{
//		a = pre->next;
//		while (a != NULL)
//		{
//			if (pre->num > a->num)
//			{
//				int num = pre->num;
//				double grade = pre->grade;
//				pre->num = a->num;
//				pre->grade = a->grade;
//				a->num = num;
//				a->grade = grade;
//			}
//			a = a->next;
//		}
//		pre = pre->next;
//	}
//	return head;
//}
//int main()
//{
//	student a[3] = { { 1, 79 }, { 4, 36 }, { 5, 79 } };
//	for (int i = 0; i < 2; i++)
//	{
//		a[i].next = &a[i + 1];
//	}
//	student b[2] = { { 2, 38 }, { 6, 98 } };
//	for (int i = 0; i < 1; i++)
//	{
//		b[i].next = &b[i + 1];
//	}
//	student *combine = merge(a, b);
//	while (combine != NULL)
//	{
//		printf("%d -> %.2lf\n", combine->num, combine->grade);
//		combine = combine->next;
//	}
//	return 0;
//}