
#include"main.h"

/**
* _strlen - return the length of a string
* @s: input string
* Return: length of a string
*/

int_strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);

}
