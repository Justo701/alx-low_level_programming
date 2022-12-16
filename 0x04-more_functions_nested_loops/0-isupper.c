#nclude "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to be checked
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
