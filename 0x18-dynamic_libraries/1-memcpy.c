#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @src: to be copied from
 * @dest: to be copied to
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
	dest[i] = src[i];
	n--;
	}
	return (dest);
}

