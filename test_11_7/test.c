#include<stdio.h>
int main()
{
	int arr[10] = { 2,4,3,1,6,5,8,9,10,7 };
	int i = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < size ; i++)
	{
		printf("%d ", *(arr + i));

	}
	printf("\n");
	for (i = 0; i < size - 1; i++)
	{
		int j = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
	}
	for (i = 0; i < size ; i++)
	{
		printf("%d ", *(arr + i));

	}
	printf("\n");

	return 0;
}