#include "main.h"

/**
 * _strncpy - copies n chars from src to dest
 * @dest: copy to
 * @src: copy from
 * @n: number of chars to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	j = 0;

	while (j < n && src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}
	return (dest);
}

