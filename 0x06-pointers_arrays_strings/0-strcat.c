#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: another string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
