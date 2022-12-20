
#include "main.h"

/**
 * _strlen - return the lenth of a string
 * @s: input string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len;


	while (*s != '\0')
	{
	len += 1;
	*s = *s + 1;
	}
	return (len);
}
