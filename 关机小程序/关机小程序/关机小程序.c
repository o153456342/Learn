#include <stdio.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	while (1)
	{
		printf("��ĵ��Լ�����һ���Ӻ�ػ�\n������'�Ҳ�Ҫ'��ȡ��\n:>");
		scanf("%s", input);
		if (strcmp(input, "�Ҳ�Ҫ") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}