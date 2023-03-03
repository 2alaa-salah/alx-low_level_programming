#include "main.h"
/**
 * reverse_array - concatenates two strings
 * @a: array
 * @n: number of elements in arr
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
		i++;
	}
}
