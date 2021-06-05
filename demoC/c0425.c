#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//笔试题
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	//&a + 1数组地址取出+1=>跳过整个数组(结尾)
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
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//p + 0x1 可以理解为 p + 1,即0x100000+20(10进制)=>转换成16进制=>0x00100014
/*
16进制数1048576=>10进制数1048576
1048576+1=1048577(10进制)=>16进制数100001
*/
//无符号整型大小4,+1在原有大小加4=>100004

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//ptr1[-1]等价于*(ptr1+(-1))等价于*(ptr1-1)=>4
//小端地址顺序倒读
//(int)a + 1往后读取一个字节,整型4个字节


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
//	int *ptr2 = (int *)(*(aa + 1));//*(aa + 1) =>aa[1],第二行首元素地址=>6的地址
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
++cpp前置++移动地址指向到C+2
*++cpp解引用获取C+2
**++cpp获取C+2地址指向的数组C内容=>POINT
*/

/*
*--*++cpp + 3
++cpp前置++移动地址指向到C+1
*++cpp解引用获取C+1空间
--*++cpp空间存放c,此时指针不再指向原C+1对应的数组c元素地址NEW,而是ENTER
*--*++cpp解引用地址,获取到ENTER中E的地址
*--*++cpp + 3=>向后移动3位得到ER
*/

/*
*cpp[-2] + 3 =>**(cpp+(-2))+3=>**(cpp-2)+3
*(cpp-2)获取到c+3空间
**(cpp-2)获取到对应的FIRST空间,指针指向F
**(cpp-2)+3=>向后移动3位得到ST
*/

/*
cpp[-1][-1] + 1=>*(*(cpp-1)-1)+1
*(cpp-1)获取到c+2空间内容,c+2指针指向POINT
*(cpp-1)-1=>获取到c+1空间内容,c+1指针指向NEW
*(*(cpp-1)-1)解引用地址,获取到NEW中N的地址
*(*(cpp-1)-1)+1=>向后移动3位得到EW
*/