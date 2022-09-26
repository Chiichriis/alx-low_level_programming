#include "main.h"

/**
 * _memset - function that fills memory with a constan byte
 * @s: char
 * @b: char
 * @n: int
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
