#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");//w-读权限 b-二进制写入
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//.. 表示上一级路径
//	//.  表示当前路径
//	//fopen("../../test.txt", "r")
//	//fopen("test.txt", "r");
//	
//	//绝对路径的写法,\\防止转义
//	//fopen("D:\\2021_C\\test_5_6\\test.txt", "r");
//
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if(pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('l', pfWrite);
//	fputc('o', pfWrite);
//	fputc('v', pfWrite);
//	fputc('e', pfWrite);
//	
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if(pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));//l
//	printf("%c", fgetc(pfRead));//o
//	printf("%c", fgetc(pfRead));//v
//	printf("%c", fgetc(pfRead));//e
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}

////从键盘输入
////输出到屏幕.
////键盘&屏幕都是外部设备
//
////键盘-标准输入设备- stdin
////屏幕-标准输出设备- stdout
////是一个程序默认打开的两个流设备
//
////stdin FILE*
////stdout FILE*
////stderr FILE*
//
//int main()
//{
//	printf("请输入一个字符:>\n");
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//	//puts对文本内容换行保留,并有自己的换行
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = {0};
//	//fgets(buf, 1024, stdin);//从标准输入流读取
//	//fputs(buf, stdout);//输出到标准输出流
//
//	//等价于上面注释写法
//	printf("请输入一行字符:>\n");
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {0};
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	printf("请键盘输入相应数据:>\n");
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//	//%.2f -- 保留2小数位
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//
//int main()
//{
//	struct S s = { 100, 3.14f, "abcdef" };
//	struct S tmp = {0};
//	char buf[1024] = { 0 };
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "张三", 20, 55.6 };
//
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	//struct S s = { "张三", 20, 55.6 };
//	struct S tmp = { 0 };
//
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, -4, SEEK_END);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);//e
//	printf("%c\n", ch);
//	int pos = ftell(pf);
//	printf("%d\n", pos);//5
//
//	/*rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);*/
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);//e
//	printf("%c\n", ch);
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	//EOF
//	//feof();//EOF - end of file - 文件结束标志
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	int ch = fgetc(pf);
//	printf("%d\n", ch);//-1
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//strerror - 把错误码对应的错误信息的字符串地址返回
//	//printf("%s\n", strerror(errno));
//	
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//读文件
//	
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {//判断文件是否存在
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//	{
//		printf("\n");
//		puts("I/O error when reading");
//	}
//
//	else if (feof(fp))
//	{
//		printf("\n");
//		puts("End of file reached successfully");
//	}
//	fclose(fp);
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test.txt");
//		return 0;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	printf("\n");
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//enum { SIZE = 5 };
//int main(void)
//{
//	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
//	double b = 0.0;
//	size_t ret_code = 0;
//	FILE *fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof(*a), SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	fp = fopen("test.bin", "rb");
//	// 读 double 的数组
//	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
//	{
//		printf("%lf\n", b);
//	}
//	if (feof(fp))
//		printf("Error reading test.bin: unexpected end of file\n");
//	else if (ferror(fp)) {
//		perror("Error reading test.bin");
//	}
//	fclose(fp);
//	fp = NULL;
//}