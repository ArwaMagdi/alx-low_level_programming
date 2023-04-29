#include "main,h"

/**
 * factorial - a function that returns the factorial of a number.
 * @n: An input integer
 * Return: The factorial of n
 */
int factorial(int n)
{
	return (n * factorial(n - 1));
}
