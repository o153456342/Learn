#include "contact.h"

void CheckCapacity(struct Contact* ps);

void LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact: %s\n", strerror(errno));
		return;
	}
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	 }
	fclose(pfRead);
	pfRead = NULL;
}

void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//把已经保存的信息加载到通讯录
	LoadContact(ps);
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->capacity == ps->size)
	{
		printf("空间不足，自动增容中\n");
		Sleep(1000);
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != 0)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}

	}


}

void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);

		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-10s \t%-5s \t%-5s \t%-11s \t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s \t%-5d \t%-5s \t%-11s \t%-20s\n", 
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int Find_By_Name(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp((ps->data[i].name), name))
		{
			return i;
		}
	}
		return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("请输入要删除信息的姓名:>");
		scanf("%s", &name);
		int ret = Find_By_Name(ps, name);
		if(ret == -1)
		{
			printf("查无此人，删除失败");
		}
		else
		{
			printf("找到目标\n");
			printf("删除中\n");
			Sleep(500);
			int j = 0;
			for (j = ret; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
				ps->size--;
				printf("删除成功\n");
			}
		}

	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的人名:>");
	scanf("%s", &name);
	int ret = Find_By_Name(ps, name);
	if (ret == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("已找到目标\n");
		printf("%-10s \t%-5s \t%-5s \t%-11s \t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-10s \t%-5d \t%-5s \t%-11s \t%-20s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的人名:>");
	scanf("%s", &name);
	int ret = Find_By_Name(ps, name);
	if (ret == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[ret].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ret].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ret].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ret].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ret].addr);

		printf("修改成功\n");
	}
}

static int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct Contact*)e1)->data->name, ((struct Contact*)e2)->data->name);
}

void SortContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < ps->size - 1; i++)
		{
			for (j = 0; j < ps->size - 1 - i; j++)
			{
				if (strcmp(ps->data[j].name, ps->data[j + 1].name) == 1)
				{
					struct PeoInfo tmp = { 0 };
					memcpy(&tmp, &ps->data[j], sizeof(ps->data[j]));
					memcpy(&ps->data[j], &ps->data[j + 1], sizeof(ps->data[j]));
					memcpy(&ps->data[j + 1], &tmp, sizeof(ps->data[j]));
				}
			}
		}
		printf("排序成功\n");
		ShowContact(ps);
	}
}

void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(struct Contact* ps)
{
	FILE* pfwrite = fopen("contact.dat", "wb");
	if (pfwrite == NULL)
	{
		printf("SaveContact: %s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfwrite);
	}

	fclose(pfwrite);
	pfwrite = NULL;
}