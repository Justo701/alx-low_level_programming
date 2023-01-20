#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - prints the result of simple operation
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: Always 0
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{

	printf("Error\n");
	exit(99);
	}
	num1 = atoi(argv[i]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
	printf("Error\n");
	exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
