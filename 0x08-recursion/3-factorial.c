/**
 * factorial - Calculates the factorial of a number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the number @n.
 *         If @n is less than 0, returns -1 to indicate an error.
 *         If @n is 0, returns 1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Error: Invalid input */
	}
	else if (n == 0)
	{
		return (1); /* Base case: factorial of 0 is 1 */
	}
	else
	{
		return (n * factorial(n - 1)); /* Recursive call */
	}
}

