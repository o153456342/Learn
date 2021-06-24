#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

#define MAX 1000 

#define MAX_NAME 15
#define MAX_SEX 10
#define MAX_TELE 20
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ 
	int size;//��¼��ǰ����Ԫ�ظ���
};

void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void SortContact(struct Contact* ps);