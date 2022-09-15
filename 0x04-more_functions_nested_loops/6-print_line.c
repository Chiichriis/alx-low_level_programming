#include "main.h"

/**
 * print_line - draw straight line in the terminal
 * @n: num of times _ should be printed
 * Return:  none (the line)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
