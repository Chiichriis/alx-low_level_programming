#include "main.h"

/**
 * _pow_recursion - return value of x raised to the pow of y
 * @x: base integer
 * @y: power integer or index
 * Return: int val of x to pow y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0 || x == 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
