#include <stdio.h>
/**
 * main - print all arguments passed
 * @argc: number of arguments
 * @argv: array containing elements
 * Return: 0 on Success
 */
int main(int argc, char **argv)
{
	int i;

	while (i < argc)
	{
	puts(argv[i]);
	i++;
	}
	return (0);
}

