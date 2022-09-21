#include "main.h"

/**
 * _strncat - concetenate two strings.
 * @dest: string to be appended
 * @src: string to be appended from
 * @n: number of bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	if (n <= 0)
	{
		return (dest);
	}

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a++] = src[b++];
	}
	dest[a++] = '\0';
	return (dest);
}
