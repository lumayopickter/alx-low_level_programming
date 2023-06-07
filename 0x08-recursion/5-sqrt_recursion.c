/**
 * calculate_sqrt - Helper function to calculate the square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of the number @n.
 *         If @guess is too large, returns -1 to indicate an error.
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess); /* Base case: found the square root */
	}
	else if (guess * guess > n)
	{
		return (-1); /* Error: square root does not exist */
	}
	else
	{
		return (calculate_sqrt(n, guess + 1)); /* Recursive with incremented guess */
	}
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of the number @n.
 *         If @n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Error: Invalid input */
	}
	else if (n == 0)
	{
		return (0); /* Base case: square root of 0 is 0 */
	}
	else
	{
		return (calculate_sqrt(n, 1)); /* calculates square root with guess of 1 */
	}
}

