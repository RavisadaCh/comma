#define CRT_SECURE_NO_WARNING
#include<stdio.h>
int main()
{
	char num[12];
	scanf_s("%s", num, 11);
	int x = 0,i=0;
	while (i <= 11 && num[i] != '\0')
	{
		x++;
		i++;
	}
	int j = 0;
	while (j<=x)
	{
		if (x == 11)
		{
			printf("%c", num[j]);
			if (j == 1 || j == 4 || j == 7)
			{
				printf(",");
			}
		}
		else if (x == 10)
		{
			printf("%c", num[j]);
			if (j == 0 || j == 3 || j == 6)
			{
				printf(",");
			}
		}
		else if (x == 9)
		{
			printf("%c", num[j]);
			if (j == 2 || j == 5)
			{
				printf(",");
			}
		}
		else if (x == 8)
		{
			printf("%c", num[j]);
			if (j == 1 || j == 4)
			{
				printf(",");
			}
		}
		else if (x == 7)
		{
			printf("%c", num[j]);
			if (j == 0 || j == 3)
			{
				printf(",");
			}
		}
		else if (x == 6)
		{
			printf("%c", num[j]);
			if (j == 2)
			{
				printf(",");
			}
		}
		else if (x == 5)
		{
			printf("%c", num[j]);
			if (j == 1)
			{
				printf(",");
			}
		}
		else if (x == 4)
		{
			printf("%c", num[j]);
			if (j == 0)
			{
				printf(",");
			}
		}
		j++;
	}
	return 0;
}