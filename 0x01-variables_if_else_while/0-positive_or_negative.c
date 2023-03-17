#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main-prints a number checks if it is negative or positive or equals a zero
* Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
