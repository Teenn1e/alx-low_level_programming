#include <stdio.h>

/**
 * main - entry point of function
 * Description: print single digit numbers
 * Return: 0(success)
 */
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
	putchar(a);
	if (a != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
putchar ('\n');
return (0);
}
