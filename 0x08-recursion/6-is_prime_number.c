#include "main.h"
int actual_prime(int a, int b);
/**
 * is_prime_number - This had better work
 * @x: x
 * Return: okay
 */
int is_prime_number(int x)
{
	if (x <= 1)
		return (0);
	return (actual_prime(x, x - 1));
}
/**
 * actual_prime - This had better work
 * @a: a
 * @b: b
 * Return: okay
 */
int actual_prime(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0 && b > 0)
		return (0);
	return (actual_prime(a, b - 1));
}
