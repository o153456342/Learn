#include "contact.h"

void meau()
{
	printf("***************************************\n");
	printf("***    1.add            2.del      ****\n");
	printf("***    3.search         4.modify   ****\n");
	printf("***    5.show           6.SORT     ****\n");
	printf("***    7.save           0.EXIT     ****\n");
	printf("***************************************\n");
}

int main()
{
	int input = 0;
	int size=0;
	struct Contact con;
		InitContact(&con);

	do 
	{
		meau();
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
		    ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			//销毁通讯录
			DestroyContact(&con);
			printf("退出成功，按任意键关闭");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}