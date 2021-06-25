#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<errno.h>


//fseek 定位文字指针
//fseek(pf,positon,SEEk_END末尾/Seek_CUR当前位置/SEEK_SET初始位置）
//long int fetell(pf) 返回文件指针相对于起始位置的偏移量
//void rewind(pf) 文件指针回到起始位置
// feof(pf)=1读取结束后判断是否因为读取完成而结束的
// 如果不是因读取完成而结束则返回ferror(pf)=1
//二进制文件读取中， 如果ret=fread < 1,则返回ferror
// fgetc(pf) == EOF?
// fgets(pf) ==NULL?
// 
//fprintf
//fscanf
//fread
//fwrite

////fgets fputs
//int main()
//{
//	char buf[1024];
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	//fgets(buf, 1024, pf);
//	//printf("%s\n", buf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////从键盘输入
////输出到屏幕
////键盘&屏幕都是外部设备
////
////键盘-标准输入设备- stdin
////屏幕-标准输出设备- stdout
////是一个程序默认打开的两个流设备
////
////stdin FILE*
////stdout FILE*
////stderr FILE*
////
//
//int main()
//{
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);
//	fputs(buf, stdout);
//	//int ch =fgetc(stdin);
//	//fputc(ch, stdout);
//	return 0;
//}

////fgetc
//int main()
//{
//	FILE* pfRead = fopen("text.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//fputc
//int main()
//{
//	FILE* pfWrite = fopen("text.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}