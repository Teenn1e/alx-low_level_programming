#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c:  int to use for the argument of the function
 *
 * Return: 1, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
