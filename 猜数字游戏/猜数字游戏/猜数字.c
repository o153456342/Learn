#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <Windows.h>

void meau()
{
	printf("*****************************\n");
	printf("***1.��ʼ��Ϸ   0.�˳���Ϸ***\n");
	printf("*****************************\n");
}
void game()
{
	int i = 0;
	int num = 0;

	i = rand()%100+1;
	printf("��Ϸ��ʼ\n");
	Sleep(500);
	system("cls");
	printf("�����������\n");
	Sleep(1000);
	system("cls");
	printf("�������������������:>");
	scanf("%d", &num);
	while (num != i)
	{
		if (num > i)
		{
			printf("���ִ��ˣ����ٲ�\n");
		}
		else if (num < i)
		{
			printf("����С�ˣ����ٲ�\n");
		}
		printf("����������������������:>");
		scanf("%d", &num);
	
	if (num == i)
	{
		printf("��ϲ�㣬�¶���\n");
		break;
	}
     }
}
int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));
		meau();
		printf("\n�Ƿ�ʼ��Ϸ:>");
		scanf("%d", &input);
	do
	{
		switch (input)
		{
		case 1:
			game();
		    printf("�����Ƿ�����һ��:>");
		    scanf("%d", &input);
			break;
		case 0:
			printf("���˳���Ϸ����������ر�\n");
			goto end;
			break;
		default:
			printf("������������������\n");
			scanf("%d", &input);
			break;
		}
	} while (input);
	printf("���˳���Ϸ����������ر�\n");
	end:
	return 0;
}