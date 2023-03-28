#include "main.h"
#include <stdio.h>
/**
 * print_array - This had better work
 * @a: a
 * @n: n
 * Return: okay
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
