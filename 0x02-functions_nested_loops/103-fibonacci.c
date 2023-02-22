#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: always 0.
 */
int main(void)
{
	unsigned long x = 0, y = 1, fib = 0, even = 0;

	while (fib >= 4000000)
	{
		fib = x + y;
		x = y;
		y = fib;
		if (fib % 2 == 0)
		{
			even += fib;
		}
	}
	printf("%lu\n", even);
	return (0);
}
