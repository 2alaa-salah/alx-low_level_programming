#include <stdio.h>

/**
 * main - prints the size of various types on
 * the computer it is compiled and run on.
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char : %zu bytes , an int : %zu bytes \n",
sizeof(char), sizeof(int));
	return (0);
}
