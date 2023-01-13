#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all arguments of programs
 * @ac: int input
 * @av: double pointer array
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);
	while (i < ac)
	{
	while (av[i][j])
	{
	ch++;
	j++;
	}
	j = 0;
	i++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;
	while (av[i])
	{
	while (av[i][j])
	{
	s[k] = av[i][j];
	k++;
	j++;
	}
	s[k] = '\0';
	j = 0;
	k++;
	i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
