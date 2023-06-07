/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y.
 *         If y is lower than 0, returns -1 to indicate an error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* Error: Invalid input */
	}
	else if (y == 0)
	{
		return (1); /* Base case: any number raised to 0 is 1 */
	}
	else
	{
		return (x * _pow_recursion(x, y - 1)); /* Recursive call */
	}
}

