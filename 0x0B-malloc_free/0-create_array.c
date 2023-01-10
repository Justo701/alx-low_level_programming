#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: size allocated
 * @c: character to initialize the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count = 0;

	if (size == 0)
	return (NULL);
	arra = (char *)(malloc(size * sizeof(char)));
	if (!array)
	return (NULL);
	while (count < size)
	{
	array[count] = c;
	count++;
	}
	return (arr);
}
