#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: always 0.
 */
int main(void)
{
	unsigned long x = 0, y = 1, fib;
	int i;

	for (i = 0; i < 50; i++)
	{
		fib = x + y;
		printf("%lu", fib);
		x = y;
		y = fib;
		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
