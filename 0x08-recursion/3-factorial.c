#include "main.h"

/*
 * int factorial - factorial of the given number
 * @n: The interger number
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
