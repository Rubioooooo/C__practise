#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"Contact.h"
void menu()
{
	printf("*************************************\n");
	printf("******  1��add      2��del    *******\n");
	printf("******  3��search   4��modify *******\n");
	printf("******  5��sort     0��exit   *******\n");
	printf("*************************************\n");
}

int main()
{
	int input = 0;
	contact con;//����ͨѶ¼
	InitiaContact(&con);
	do 
	{
		menu();
		printf("��ѡ����Ҫ�Ĺ���:>");
		scanf("%d",&input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			AddContact(&con);
			ShowContact(&con);
			break;
		case 2:
			DelContact(&con);
			ShowContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			ShowContact(&con);
			break;
		case 5:
			SortContact(&con);
			ShowContact(&con);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}