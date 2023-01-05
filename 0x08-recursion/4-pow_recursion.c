#include "main.h"

/**
 * _pow_recursion - return power values
 * @x: int1
 * @y: int2
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
