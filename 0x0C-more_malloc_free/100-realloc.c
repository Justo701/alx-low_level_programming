#include "main.h"
#include <stdlib>
/**
 * _realloc - reallocates memory block
 * @ptr: pointer to memory
 * @old_size: old memory in bytes
 * @new_size: new memory size in bytes
 * Return: pointer
 * if new_size == old_size, return pointer without changes
 * if malloc fails, return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	if (ptr == NULL)
	ptr = malloc(new_size);
	if (new_size == old_size)
	return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
