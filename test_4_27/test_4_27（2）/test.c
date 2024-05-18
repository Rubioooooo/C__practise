#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	//打印两数的最大公约数
	//方法一：
	int m = 0, n = 0;
	int k = 0;
	scanf("%d %d", &m, &n);
	k = (m < n ? m : n);
	while (1)
	{
		if (m % k == 0 && n % k == 0)
		{
			break;
		}
		k--;
		printf("%d", k);
		return 0;
	}
	//方法二：
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	int k = 0;
	while (k = m % n)
	{
		m = n;
		n = k;
	}
	printf("%d", n);
	return 0;
	//计算闰年1000-2000
	int i = 0;
	for (i = 1000; i <= 2000; i += 4)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			printf("%d ", i);
		}
	}
	//计算素数100-200
	int i = 0;
	for (i = 101; i <= 200; i += 2)
	{
		int flag = 1;//flag和j都要在循环内初始化！
		int j = 0;
		for (j = 2; j <= (int)sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}