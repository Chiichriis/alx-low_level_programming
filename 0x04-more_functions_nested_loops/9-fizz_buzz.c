#include <stdio.h>

/**
* main - Fizz and Buzz for multiples of 3 and 5 respec,
* and FizzBuzz for both multiples of 3 and 5.
*
* Return: 0
**/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz ");
		else if (i == 100)
			printf("Buzz");
		else if ((i % 5) == 0 && (i % 3) != 0)
			printf("Buzz ");
		else if ((i % 3) == 0 && (i % 3) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
