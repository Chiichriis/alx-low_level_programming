#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints in lowercaser the alphabet 10-times and new line
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		putchar('\n');
		i++;
	}
}
