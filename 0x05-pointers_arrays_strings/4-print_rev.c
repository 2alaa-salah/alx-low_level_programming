#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	i++;
	while (i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
