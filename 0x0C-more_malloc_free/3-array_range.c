#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: pointer to newly created array
 * if min > max, return NULL
 * if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
	return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	if (ar == NULL)
	return (NULL);
	for (i = 0; min < max; i++, min++)
	ar[i] = min;
	return (ar);
}
