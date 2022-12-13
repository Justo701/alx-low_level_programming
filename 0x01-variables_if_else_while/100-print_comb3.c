#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int ones = '0';

	int tens = '0';

	for (tens = '0'; tens <= '9; tens++)/*print tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/*print ones digit*/
		{
			if (!((ones == tens) || (tens > ones))/*eliminating repetition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9'; && tens == '8'))/*adding commas and spaces*/
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
puttchar('\n');
return (0);
}
