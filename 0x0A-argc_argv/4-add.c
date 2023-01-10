#include <stdio.h>
#include <stdlib.h>
/**
 * isNumeric - checks if a string is a number
 * @str: string
 * Return: true if is number, otherwise false
 */
int isNumeric(const char *str)
{
	while (*str != '\0')
	{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: size of an array
 * @argv: array containing elements
 * Return: 0 on Success
 */
int main(int argc, char **argv)
{
	int count = 1, sum = 0;

	while (count < argc)
	{
	if (isNumeric(argv[count]) == 0)
	{
	puts("Error");
	return (1);
	}
	sum = sum + atoi(argv[count]);
	count++;
	}
	printf("%d\n", sum);
	return (0);
}
