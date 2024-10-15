#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<string.h>
#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE 12
#define ADDR 20
typedef struct Peoinfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE];
	char addr[ADDR];
}PeoInfo;
typedef struct contact
{
	PeoInfo data[100];
	int sz;
}contact;
//��ʼ����ϵ�˿ռ�
void InitiaContact(contact* pc);

//��ʾ��ϵ��
void ShowContact(contact* pc);

//������ϵ��
void AddContact(contact* pc);

//ɾ����ϵ��
void DelContact(contact* pc);

//Ѱ������
int find_name(contact* pc,char name[]);

//������ϵ��
void SearchContact(contact* pc);

//�޸���ϵ����Ϣ
void ModifyContact(contact* pc);

//������ϵ��
void SortContact(contact* pc);

//����
void bubble(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));

//����
void Swap(char* buf1, char* buf2, int width);

//����������
void sort_by_name(contact* pc);
int sort_name(const void* e1, const void* e2);

//����������
void sort_by_age(contact* pc);
int sort_age(const void* e1, const void* e2);

//����ַ����
void sort_by_address(contact* pc);
int sort_address(const void* e1, const void* e2);









