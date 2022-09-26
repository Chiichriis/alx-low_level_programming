#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char in s
 * Return: the first occurance or NULL
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	if (s[x] == c)
	{
		return (s + x);
	}
	else
	{
		return ('\0');
	}
}
