#include <stdio.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	while (1)
	{
		printf("你的电脑即将在一分钟后关机\n请输入'我不要'以取消\n:>");
		scanf("%s", input);
		if (strcmp(input, "我不要") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}