#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int res;

	res = 0;

	int i;

	for (i = 0; b[i]; i++)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);

		res = res * 2 + (b[i] - '0');
	}
	return (res);
}
