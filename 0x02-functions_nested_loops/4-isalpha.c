#include "main.h"
/**
 * _isalpha - checks for char alphabet
 *@c: the character to be checked
 *
 * Return: 1 if char is lower or upper, othewise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
