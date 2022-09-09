#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * This program will assign a random number to the variable n each time it is executed.
 * main - entry point of program.
 * Return 0 after the program runs.
 */

int main(void)  /*entry point of function*/
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
