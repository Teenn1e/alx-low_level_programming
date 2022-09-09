#include <stdio.h>

/**
 * Description: main function prints alphabets
 * main - entry point of function
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
