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
//初始化联系人空间
void InitiaContact(contact* pc);

//显示联系人
void ShowContact(contact* pc);

//增加联系人
void AddContact(contact* pc);

//删除联系人
void DelContact(contact* pc);

//寻找名字
int find_name(contact* pc,char name[]);

//查找联系人
void SearchContact(contact* pc);

//修改联系人信息
void ModifyContact(contact* pc);

//排序联系人
void SortContact(contact* pc);

//排序
void bubble(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));

//交换
void Swap(char* buf1, char* buf2, int width);

//按姓名排序
void sort_by_name(contact* pc);
int sort_name(const void* e1, const void* e2);

//按年龄排序
void sort_by_age(contact* pc);
int sort_age(const void* e1, const void* e2);

//按地址排序
void sort_by_address(contact* pc);
int sort_address(const void* e1, const void* e2);









