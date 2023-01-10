#include<stdio.h>
/**
 * main - prints the name of the program
 * @argc: array size
 * @argv: array containing elements
 *
 *Return: 0 on Success
 */
int main(int argc, char **argv)
{
	puts(argv[argc - 1]);
	return (0);
}
