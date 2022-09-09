#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* betty style doc for function main goes there
 * main - entry point of program
 * Return 0
 */

int main(void)

{

	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive\n", n);
	}
	if (n == 0)
	{
		printf("is zero\n", n);
	}
	else
	{
		printf("is negative\n", n);
	}
	return (0);
}
