#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//������
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	//&a + 1�����ַȡ��+1=>������������(��β)
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//p + 0x1 �������Ϊ p + 1,��0x100000+20(10����)=>ת����16����=>0x00100014
/*
16������1048576=>10������1048576
1048576+1=1048577(10����)=>16������100001
*/
//�޷������ʹ�С4,+1��ԭ�д�С��4=>100004

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//ptr1[-1]�ȼ���*(ptr1+(-1))�ȼ���*(ptr1-1)=>4
//С�˵�ַ˳�򵹶�
//(int)a + 1�����ȡһ���ֽ�,����4���ֽ�


//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));//*(aa + 1) =>aa[1],�ڶ�����Ԫ�ص�ַ=>6�ĵ�ַ
//	printf("%d\n %d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char *a[] = { "work", "at", "bilibili" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}
/*
**++cpp
++cppǰ��++�ƶ���ַָ��C+2
*++cpp�����û�ȡC+2
**++cpp��ȡC+2��ַָ�������C����=>POINT
*/

/*
*--*++cpp + 3
++cppǰ��++�ƶ���ַָ��C+1
*++cpp�����û�ȡC+1�ռ�
--*++cpp�ռ���c,��ʱָ�벻��ָ��ԭC+1��Ӧ������cԪ�ص�ַNEW,����ENTER
*--*++cpp�����õ�ַ,��ȡ��ENTER��E�ĵ�ַ
*--*++cpp + 3=>����ƶ�3λ�õ�ER
*/

/*
*cpp[-2] + 3 =>**(cpp+(-2))+3=>**(cpp-2)+3
*(cpp-2)��ȡ��c+3�ռ�
**(cpp-2)��ȡ����Ӧ��FIRST�ռ�,ָ��ָ��F
**(cpp-2)+3=>����ƶ�3λ�õ�ST
*/

/*
cpp[-1][-1] + 1=>*(*(cpp-1)-1)+1
*(cpp-1)��ȡ��c+2�ռ�����,c+2ָ��ָ��POINT
*(cpp-1)-1=>��ȡ��c+1�ռ�����,c+1ָ��ָ��NEW
*(*(cpp-1)-1)�����õ�ַ,��ȡ��NEW��N�ĵ�ַ
*(*(cpp-1)-1)+1=>����ƶ�3λ�õ�EW
*/