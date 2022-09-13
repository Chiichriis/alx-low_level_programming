#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a num
 * @x: int type num
 * Return: return last digit of num
 */
int print_last_digit(int x)
{
	int xy;

	if (x < 0)
	{
		xy = -1 * (x % 10);
		_putchar(xy + '0');
		return (xy);
	}
	else
	{
		xy = x % 10;
		_putchar(xy + '0');
		return (xy);
	}
}
