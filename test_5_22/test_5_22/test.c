#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 100
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isPalindrome(int x) 
{
    char arr[100];
    sprintf(arr, "%d", x);
    int flag = 1;
    int left = 0;
    int right = strlen(arr) - 1;
    while (left < right) {
        flag = 1;
        if (arr[left] != arr[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }
    if (flag == 1)
        return true;
    else
        return false;
}
int main()
{
    /*char arr[MAX];
    scanf("%s", arr);
    int flag = 1;
    int left = 0;
    int right = strlen(arr) - 1;
    while (left < right)
    {
        flag = 1;
        if (arr[left] != arr[right])
        {
            flag = 0;
            break;
        }
        left++;
        right--;
    }
    if (flag == 1)
        printf("true");
    else
        printf("false");*/
    int input = 0;
    scanf("%d", &input);
    if (isPalindrome(input))
        printf("true");
    else
        printf("false");
    return 0;
}