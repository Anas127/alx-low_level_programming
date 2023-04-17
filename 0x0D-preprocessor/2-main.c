#include <stdio.h>

/**
 * main - prints name of the file compiled
 * Return : 0 if success
 */

int main(void)
{
	printf("The program was compiled from: %s\n", __FILE__);
	return (0);
}
