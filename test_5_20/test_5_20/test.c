#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("0.�˳���Ϸ\n1.��ʼ��Ϸ\n����������:>");
}
void game()
{
	int num = rand() % 100 + 1;
	printf("���������֣�");
	int guess = 0;
	
	while (1)
	{
		scanf("%d", &guess);
		if (guess > num)
			printf("�´���");
		else if (guess < num)
			printf("��С��");
		else
		{
			printf("�¶���");
			break;
		}
	}
}
int main()
{
	menu();
	int input = 0;
	srand(time(NULL));
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (input);

	return 0;
}