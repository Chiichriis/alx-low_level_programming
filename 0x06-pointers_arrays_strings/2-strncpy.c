#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: sting
 * @src: another sting.
 * @n: integer
 * Return: strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
