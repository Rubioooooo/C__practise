#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
bool isValid(char* s)
{
	int i = 0;
	int flag = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == ')' || *(s + i) == ']' || *(s + i) == '}')
		{
			i++;
			continue;
		}
		int j = 1;
		flag = 0;
		int len = strlen(s);
		int k = 0, count1 = 0, count2 = 0, count3 = 0;
		int count4 = 0, count5 = 0, count6 = 0;
		for (k = 0; k < len; k++)
		{
			if (s[k] == '(')
				count1++;
		}
		for (k = 0; k < len; k++)
		{
			if (s[k] == ')')
				count4++;
		}//
		for (k = 0; k < len; k++)
		{
			if (s[k] == '[')
				count2++;
		}
		for (k = 0; k < len; k++)
		{
			if (s[k] == ']')
				count5++;
		}//
		for (k = 0; k < len; k++)
		{
			if (s[k] == '{')
				count3++;
		}
		for (k = 0; k < len; k++)
		{
			if (s[k] == '}')
				count6++;
		}
		if (count1 != count4 || count2 != count5 || count3 != count6)
		{
			break;
		}
		if (*s == ')' || *s == ']' || *s == '}')
		{
			break;
		}
		if (*(s + i) == '(')
		{
			if (*(s + i + 1) == ')')
			{
				flag = 1;
				i += 2;
				continue;
			}
			else
			{
				for (j = 1; *(s + i + j) != '\0'; j += 1)
				{
					if (*(s + i + j) == ')')
					{
						flag = 1;
						break;
					}
				}
				if (flag == 0)
					break;
			}
		}
		if (*(s + i) == '{')
		{
			if (*(s + i + 1) == '}')
			{
				flag = 1;
				i += 2;
				continue;
			}
			else
			{
				for (j = 1; *(s + i + j) != '\0'; j += 1)
				{
					if (*(s + i + j) == '}')
					{
						flag = 1;
						break;
					}
				}
				if (flag == 0)
					break;
			}
		}
		if (*(s + i) == '[')
		{
			if (*(s + i + 1) == ']')
			{
				flag = 1;
				i += 2;
				continue;
			}
			else
			{
				for (j = 1; *(s + i + j) != '\0'; j += 1)
				{
					if (*(s + i + j) == ']')
					{
						flag = 1;
						break;
					}
				}
				if (flag == 0)
					break;
			}
		}
		if ((*(s + i) == '(' && (*(s + i + 1) == ']' || *(s + i + 1) == '}')) || (*(s + i) == '[' && (*(s + i + 1) == ')' || *(s + i + 1) == '}')) || (*(s + i) == '{' && (*(s + i + 1) == ']' || *(s + i + 1) == ')')))
		{
			flag = 0;
			break;
		}
		i++;
	}
	if (flag == 1)
		return true;
	else
		return false;
}
int main()
{
	char arr[100];
	scanf("%s", arr);
	if (isValid(arr))
		printf("true");
	else
		printf("false");
	return 0;
}