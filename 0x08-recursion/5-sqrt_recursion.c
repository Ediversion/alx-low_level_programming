#include "main.h"
int actual_sqrt_recursion(int a, int b);
/**
 * _sqrt_recursion - This had better work
 * @x: n
 * Return: okay
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (actual_sqrt_recursion(x, 0));
}
/**
 * actual_sqrt_recursion - This had better work
 * @a: a
 * @b: b
 * Return: okay
 */
int actual_sqrt_recursion(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (actual_sqrt_recursion(a, b + 1));
}
