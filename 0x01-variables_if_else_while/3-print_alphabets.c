#include <stdio.h>

/**
 * Description: main function prints upper and lowercase alphabets
 * Main - entry point of function
 * Return: 0 after running
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
