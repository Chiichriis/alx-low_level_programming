#include "main.h"

/**
 * print_diagonal - draws diagonal line on terminal
 * @n: num of time \ will be printed
 * Return: (none) the diagonal line
 */
void print_diagonal(int n)
{
	int count;
	int i;

	for (count = 0; count < n; count++)
	{
		for (i = 0; i <= count; i++)
		{
			if (i != count)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
