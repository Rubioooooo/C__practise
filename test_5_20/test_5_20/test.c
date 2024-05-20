#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("0.退出游戏\n1.开始游戏\n请输入数字:>");
}
void game()
{
	int num = rand() % 100 + 1;
	printf("请输入数字：");
	int guess = 0;
	
	while (1)
	{
		scanf("%d", &guess);
		if (guess > num)
			printf("猜大了");
		else if (guess < num)
			printf("猜小了");
		else
		{
			printf("猜对了");
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
			printf("输入错误，请重新输入");
			break;
		}
	} while (input);

	return 0;
}