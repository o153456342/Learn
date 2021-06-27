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
	//���Ѿ��������Ϣ���ص�ͨѶ¼
	LoadContact(ps);
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->capacity == ps->size)
	{
		printf("�ռ䲻�㣬�Զ�������\n");
		Sleep(1000);
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != 0)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}

	}


}

void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);

		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-10s \t%-5s \t%-5s \t%-11s \t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("������Ҫɾ����Ϣ������:>");
		scanf("%s", &name);
		int ret = Find_By_Name(ps, name);
		if(ret == -1)
		{
			printf("���޴��ˣ�ɾ��ʧ��");
		}
		else
		{
			printf("�ҵ�Ŀ��\n");
			printf("ɾ����\n");
			Sleep(500);
			int j = 0;
			for (j = ret; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
				ps->size--;
				printf("ɾ���ɹ�\n");
			}
		}

	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ�����:>");
	scanf("%s", &name);
	int ret = Find_By_Name(ps, name);
	if (ret == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("���ҵ�Ŀ��\n");
		printf("%-10s \t%-5s \t%-5s \t%-11s \t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ���ҵ�����:>");
	scanf("%s", &name);
	int ret = Find_By_Name(ps, name);
	if (ret == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ret].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ret].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ret].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ret].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ret].addr);

		printf("�޸ĳɹ�\n");
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
		printf("ͨѶ¼Ϊ��\n");
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
		printf("����ɹ�\n");
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