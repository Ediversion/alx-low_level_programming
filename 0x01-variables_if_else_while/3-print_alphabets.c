#include <stdio.h>
/**
* main - This had better work
*
* Return: okay
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
