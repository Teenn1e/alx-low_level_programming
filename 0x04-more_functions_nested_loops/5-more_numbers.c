#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers
 * form 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 10)
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
