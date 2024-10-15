#include"Contact.h"
void InitiaContact(contact* pc)
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->sz = 0;
}
int find_name(contact* pc,char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void bubble(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void AddContact(contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�ڴ��������޷�����");
		return;
	}
	//������ϵ��
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
}
void ShowContact(contact* pc)
{
	int i = 0;
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-15s\t%-5s\t%-5d\t%-12s\t%-20s\n",
			pc->data[i].name, 
			pc->data[i].sex, 
			pc->data[i].age, 
			pc->data[i].tele, 
			pc->data[i].addr);
	}
}
void DelContact(contact* pc)
{
	char name[20];
	printf("��������Ҫɾ������ϵ������:>");
	scanf("%s", name);
	int del = 0;
	int i = 0;
	int ret = find_name(pc, name);
	for (i = ret; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}
void SearchContact(contact* pc)
{
	char name[20];
	printf("��������Ҫ��ѯ����ϵ������:>");
	scanf("%s", name);
	int ret = find_name(pc, name);
	if (ret == -1)
	{
		printf("ͨѶ¼���޸���ϵ�ˣ�������:>");
	}
	else
	{
		printf("����ϵ����Ϣ������ʾ\n");
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-15s\t%-5s\t%-5d\t%-12s\t%-20s\n",
			pc->data[ret].name,
			pc->data[ret].sex,
			pc->data[ret].age,
			pc->data[ret].tele,
			pc->data[ret].addr);
	}
}
void ModifyContact(contact* pc)
{
	char name[20];
	printf("��������Ҫ�޸ĵ���ϵ������:>");
	scanf("%s", name);
	int ret = find_name(pc, name);
	if (ret == -1)
	{
		printf("ͨѶ¼���޸���ϵ�ˣ�������:>");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[ret].name);
		printf("�������Ա�:>");
		scanf("%s", pc->data[ret].sex);
		printf("����������:>");
		scanf("%d", &(pc->data[ret].age));
		printf("������绰:>");
		scanf("%s", pc->data[ret].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[ret].addr);
	}
}
void SortContact(contact* pc)
{
	printf("******************************\n");
	printf("******  1������������   ******\n");
	printf("******  2������������   ******\n");
	printf("******  3������ַ����   ******\n");
	printf("******************************\n");
	int input = 0;
	printf("��ѡ������ʽ:>");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		sort_by_name(pc);
		break;
	case 2:
		sort_by_age(pc);
		break;
	case 3:
		sort_by_address(pc);
		break;
	default:
		printf("�����������������:>");
		break;
	}
}
int sort_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void sort_by_name(contact* pc)
{
	bubble(pc->data, pc->sz, sizeof(pc->data[0]), sort_name);
}
int sort_age(const void* e1, const void* e2)
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
}
void sort_by_age(contact* pc)
{
	bubble(pc->data, pc->sz, sizeof(pc->data[0]), sort_age);
}
int sort_address(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->addr, ((PeoInfo*)e2)->addr);
}
void sort_by_address(contact* pc)
{
	bubble(pc->data, pc->sz, sizeof(pc->data[0]), sort_address);
}














