#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @s: s
 * @x: x
 * Description: X
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int s, char x)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * s);

	if (s == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		str[i] = x;
	return (str);
}
