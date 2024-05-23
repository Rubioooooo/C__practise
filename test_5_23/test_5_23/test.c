#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int romanToInt(char* s)
{
    int i = 0;
    int sum = 0;
    while (*(s + i) != '\0')
    {
        if (*(s + i) == 'I')
        {
            if (*(s + i) == 'I' && *(s + i + 1) == 'V')
            {
                sum = sum + 4;
                break;
            }
            else if (*(s + i) == 'I' && *(s + i + 1) == 'X')
            {
                sum = sum + 9;
                break;
            }
            sum = sum + 1;
        }
        else if (*(s + i) == 'V')
            sum = sum + 5;
        else if (*(s + i) == 'X')
        {
            if (*(s + i) == 'X' && *(s + i + 1) == 'L')
            {
                sum = sum + 40;
                i += 2;
                continue;
            }
            else if (*(s + i) == 'X' && *(s + i + 1) == 'C')
            {
                sum = sum + 90;
                i += 2;
                continue;
            }
            sum = sum + 10;
        }
        else if (*(s + i) == 'L')
            sum = sum + 50;
        else if (*(s + i) == 'C')
        {
            if (*(s + i) == 'C', *(s + i + 1) == 'D')
            {
                sum = sum + 400;
                i += 2;
                continue;
            }
            else if (*(s + i) == 'C', *(s + i + 1) == 'M')
            {
                sum = sum + 900;
                i += 2;
                continue;
            }
            sum = sum + 100;
        }
        else if (*(s + i) == 'D')
            sum = sum + 500;
        else if (*(s + i) == 'M')
            sum = sum + 1000;
        i++;
    }
    return sum;
}
int main()
{
	//char s;如果想要输入一组字符串，需要用到字符数组而不是单一char变量，因为这个是指一个字符
	char s[100];
	scanf("%s", s);
	/*printf("%s\n", s);
	printf("%c\n", *s);
	int i = 0;
	while (*(s + i) != '\0')
	{
		printf("%c\n", *(s + i));
		i++;
	}*/
    int num=romanToInt(s);
    printf("%d\n", num);
	return 0;
}