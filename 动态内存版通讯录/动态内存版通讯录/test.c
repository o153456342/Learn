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
		printf("��ѡ��:>");
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
			//����ͨѶ¼
			DestroyContact(&con);
			printf("�˳��ɹ�����������ر�");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}