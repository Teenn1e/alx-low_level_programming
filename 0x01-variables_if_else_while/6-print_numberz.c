#include <stdio.h>

/**
 * main - entry point of function
 * Description: putchar single digit numbers
 * Return: 0 after program is run
 */
int main(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
	putchar('\n');
}
return (0);
}
