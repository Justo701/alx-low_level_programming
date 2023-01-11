#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated space in memory
 * @str: string to be copied
 * Return: On success the _strd return pointer else, NULL
 */
char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
	return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	;
	ptr = (char *) malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
