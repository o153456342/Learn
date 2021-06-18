#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <Windows.h>

void meau()
{
	printf("*****************************\n");
	printf("***1.开始游戏   0.退出游戏***\n");
	printf("*****************************\n");
}
void game()
{
	int i = 0;
	int num = 0;

	i = rand()%100+1;
	printf("游戏开始\n");
	Sleep(500);
	system("cls");
	printf("随机数生成中\n");
	Sleep(1000);
	system("cls");
	printf("请输入你所猜想的数字:>");
	scanf("%d", &num);
	while (num != i)
	{
		if (num > i)
		{
			printf("数字大了，请再猜\n");
		}
		else if (num < i)
		{
			printf("数字小了，请再猜\n");
		}
		printf("请继续输入你所猜想的数字:>");
		scanf("%d", &num);
	
	if (num == i)
	{
		printf("恭喜你，猜对了\n");
		break;
	}
     }
}
int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));
		meau();
		printf("\n是否开始游戏:>");
		scanf("%d", &input);
	do
	{
		switch (input)
		{
		case 1:
			game();
		    printf("请问是否再来一盘:>");
		    scanf("%d", &input);
			break;
		case 0:
			printf("已退出游戏，按任意键关闭\n");
			goto end;
			break;
		default:
			printf("输入有误，请重新输入\n");
			scanf("%d", &input);
			break;
		}
	} while (input);
	printf("已退出游戏，按任意键关闭\n");
	end:
	return 0;
}