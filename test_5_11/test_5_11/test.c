#include<stdio.h>
#include<string.h>
int Strlen(char* str)
{
	if (*str != '\0')
		return 1 + Strlen(str + 1);
	else
		return 0;
}
//int Strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
void reverse_string(char* arr)
{
	int len = Strlen(arr);
	char temp = *arr;
	*arr = *(arr + len - 1);
	*(arr + len - 1) = '\0';
	if (Strlen(arr) >= 2)
		reverse_string(arr + 1);//��ʱ������һ��д��++arr����Ȼ˵��˼��ͬ�����Ǻ��߶�arr��ֵ�����˸ı䣬��ǰ��arr+1��arrû�з����ı䣬���е������ǰ�ߺ��߽����ͬ����������ͻ���ɲ�ͬ
	*(arr + len - 1) = temp;//��ʱ�������Ϊ++arr����ô�����ֵ�ͻ�ı䣬��ɽ����������

}
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right = Strlen(arr) - 1;
//	while (left < right)
//	{
//		/*char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;*/
//		char temp = *(arr + left);//*(arr+left)�൱��arr[left]
//		*(arr + left) = *(arr + right);//*arr=arr[0]
//		*(arr + right) = temp;
//		left++;
//		right--;
//	}
//
//}
int main()
{
	/*char arr[] = "abcdef";
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}*/
	char arr[] = "abcdef";
	reverse_string(arr);

	printf("%s\n", arr);
	return 0;
}