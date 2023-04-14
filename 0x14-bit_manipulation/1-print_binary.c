#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, start = 0;
	unsigned long int check;

	for (i = 63; i >= 0; i--)
	{
		check = n >> i;
		if (check & 1)
		{
		_putchar('1');
		start = 1;
		}
		else if (start)
		{
			_putchar('0');
		}
	}
	if (!start)
	_putchar('0');
}
