#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
int i;
int c;

for (i = 0; i <= 9; i++)
{
	for (c = 1; c <= 9; j++)
	{
		if (c > i)
		{
			putchar(i + '0');
			putchar(c + '0');
		if (i != 8)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
}
putchar('\n');
return (0);
}
