#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<errno.h>


//fseek ��λ����ָ��
//fseek(pf,positon,SEEk_ENDĩβ/Seek_CUR��ǰλ��/SEEK_SET��ʼλ�ã�
//long int fetell(pf) �����ļ�ָ���������ʼλ�õ�ƫ����
//void rewind(pf) �ļ�ָ��ص���ʼλ��
// feof(pf)=1��ȡ�������ж��Ƿ���Ϊ��ȡ��ɶ�������
// ����������ȡ��ɶ������򷵻�ferror(pf)=1
//�������ļ���ȡ�У� ���ret=fread < 1,�򷵻�ferror
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
//	//���ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	//fgets(buf, 1024, pf);
//	//printf("%s\n", buf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////�Ӽ�������
////�������Ļ
////����&��Ļ�����ⲿ�豸
////
////����-��׼�����豸- stdin
////��Ļ-��׼����豸- stdout
////��һ������Ĭ�ϴ򿪵��������豸
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
//	//���ļ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//�ر��ļ�
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
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}