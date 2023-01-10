#include <stdio.h>
/**
 * main - prints number of arguments passed to it
 * @argc: size of array
 * @argv: array containing elements
 * Return: Always 0 on Success
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

