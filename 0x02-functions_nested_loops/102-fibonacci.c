#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: always 0.
 */
int main(void)
{
	int x = 1, y = 2, fib, i;

	printf("%d, %d,", x, y);
	for (i = 0; i < 50; i++)
	{
		fib = x + y;
		x = y;
		y = fib;
		if (i == 49)
		{
			printf(" %d", fib);
		}
		else
		{
			printf(" %d,", fib);
		}
	}
}
