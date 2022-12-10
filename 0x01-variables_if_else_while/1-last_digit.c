#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function generates a random  number
 *Description: the weighs random numbers against 5 for action
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m;
	m = n % 10;
	if (m > 6)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0);
	return (0);
}	
