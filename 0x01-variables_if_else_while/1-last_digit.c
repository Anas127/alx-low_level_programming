#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*
* main- checks if n is 0 or
* is greater than 5
* or less than 6 and not 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
    int x;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

    x = n % 10;
    printf("Last digit of %d is %d ", n, x);
	/* your code goes there */
    if (n > 5)
    {
        printf("and is greater than 5\n");
    }
    if (x==0)
    {
        printf("and is 0\n");
    }
    if (x < 6 && x != 0)
    {
        printf("and is less than 6 and not 0\n");
    }
	return (0);
}
