#include <stdio.h>
/**
 * swap_int - This had better work
 * @a: a
 * @b: b
 * Return: okay
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
