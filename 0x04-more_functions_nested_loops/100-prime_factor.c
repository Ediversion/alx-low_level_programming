#include "main.h"
#include <stdio.h>
/**
 * main - This had better work
 *
 * Return: okay
 */

int main(void)
{
	long x, maxf;
	long num = 612852475143;
	double sq = sqrt(num);

	for (x = 1; x <= sq; x++)
	{
	if (num % x == 0)
	{
	maxf = num / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
