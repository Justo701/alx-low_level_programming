#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each element in a newl
 * @array: array
 * @size: number of elements
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (array == NULL || action == NULL)
	return;
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
