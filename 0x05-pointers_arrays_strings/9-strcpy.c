#include "main.h"

/**
 * _strcpy - fuction copies the string pointed
 * @dest: pointer to copy the string to.
 * @src: the string to copy to the destination.
 *
 * Return: a copy of the src.
 */
char *_strcpy(char *dest, char *src)
{
	int indx = 0;

	while (*src != '\0')
	{
		dest[indx] = *src;
		indx++;
		src++;
	}
	return (dest);
}
