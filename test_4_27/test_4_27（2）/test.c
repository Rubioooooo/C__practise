#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	//��ӡ���������Լ��
	//����һ��
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
	//��������
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
	//��������1000-2000
	int i = 0;
	for (i = 1000; i <= 2000; i += 4)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			printf("%d ", i);
		}
	}
	//��������100-200
	int i = 0;
	for (i = 101; i <= 200; i += 2)
	{
		int flag = 1;//flag��j��Ҫ��ѭ���ڳ�ʼ����
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