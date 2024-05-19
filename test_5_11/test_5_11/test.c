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
		reverse_string(arr + 1);//此时有另外一种写法++arr，虽然说意思相同，但是后者对arr的值发生了改变，而前者arr+1对arr没有发生改变，再有的情况下前者后者结果相同，但在这里就会造成不同
	*(arr + len - 1) = temp;//此时如果上面为++arr，那么这里的值就会改变，造成结果出现问题

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
//		char temp = *(arr + left);//*(arr+left)相当于arr[left]
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