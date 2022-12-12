#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char c;

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
