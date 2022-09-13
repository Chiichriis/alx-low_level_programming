#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
