#include "main.h"
/**
 * factorial - This had better work
 * @x: x
 * Return: okay
 */
int factorial(int x)
{
	if (x < 0)
		return (-1);
	if (x == 0)
		return (1);
	return (x * factorial(x - 1));
}
