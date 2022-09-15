#include "main.h"

/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 *
 * Return: values.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}