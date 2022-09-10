#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * Description: use the main function print n.
 * main - entry point of program.
 * Return: 0 after the program runs(success)
 */

int main(void)  /*entry point of function*/
{
int n; /*variable to assign random no*/

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
