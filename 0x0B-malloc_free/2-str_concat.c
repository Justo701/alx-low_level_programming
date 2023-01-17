#include <stdlib.h>
/**
 * get_str_len - gets length of the string
 * @str: string in question
 * Return: integer value of the string
 */
int get_str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (i + 1);
}
/**
 * str_concat - join two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string else NULL
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size, s2_size, i, j;
	char *ptr;

	if (s1 == NULL)
	s1 = " ";
	if (s2 == NULL)
	s2 = " ";
	s1_size = get_str_len(s1);
	s2_size = get_str_len(s2);
	ptr = (char *)malloc(((s1_size + s2_size) - 1) * sizeof(char));
	if (ptr == NULL)
	return (NULL);	
	for (i = 0; s1[i] != '\0'; i++)
	ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
	ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}

