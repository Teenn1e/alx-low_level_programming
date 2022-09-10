#include <stdio.h>

/**
 * main - entry point of function
 * Description: print lowercase alphabets
 * Return: 0(success)
 */
int main(void)
{
char rev;
for (rev = 'z'; rev >= 'a'; rev--)
{
	putchar(rev);
}
putchar('\n');
return (0);
}
