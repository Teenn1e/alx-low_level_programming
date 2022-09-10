#include <stdio.h>

/**
 * main - entry point of function print alphabets
 * Description: using the main function
 * Return: 0 when the program is run
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
