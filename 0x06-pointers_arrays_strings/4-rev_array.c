#include "main.h"
/**
 * reverse_array - This had better work
 * @a: a
 * @n: n
 * Return: okay
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
