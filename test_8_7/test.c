#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 11,22,33,44,55,66,77,88,99,100 };
//	int i = 0;
//	printf("arr1=");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2=");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = *(arr1 + i);
//		*(arr1 + i) = *(arr2 + i);
//		*(arr2 + i) = tmp;
//	}
//	printf("交换后\n");
//	printf("arr1=");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2=");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}


//初始化每个数组元素为0
void init(int* arr,int ret)
{
	int i = 0;
	for (i = 0; i < ret; i++)
	{
		arr[i] = 0;
	}
}

//打印数组中的每个元素
void print(int* arr1,int ret)
{
	int i = 0;
	for (i = 0; i < ret; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

//数组逆置
void reverse(int* arr1,int ret)
{
	int i = 0;
	int left = 0;
	int right = ret - 1;
	while (left < right)
	{
		int tmp = arr1[left];
		arr1[left] = arr1[right];
		arr1[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 0 };
	int ret = sizeof(arr) / sizeof(arr[0]);
	print(arr, ret);
	init(arr,ret);
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	print(arr1,ret);
	int ret1 = sizeof(arr1) / sizeof(arr1[0]);
	reverse(arr1,ret1);
	print(arr1, ret);

	return 0;
}




























