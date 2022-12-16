#include "main.h"

/**
 * print_numbers - print num from 0-9
 * return: numbers 0 to 9
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
