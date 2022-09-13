#include <stdio.h>
#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: type int integer, can be +ve or -ve
 * Description: print +, 0, or - based on the num with return
 * Return: 1 if +, 0, and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
