#include <stdio.h>

/**
 * main - entry point of function print alphabets
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'q' && ch != 'e')
		putchar(ch);
}
putchar('\n');
return (0);
}
