#include "main.h"

/**
  * _strncpy - copies a string.
  * @dest: string.
  * @src: string.
  * @n: integer variablr.
  * Return: copied string.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
