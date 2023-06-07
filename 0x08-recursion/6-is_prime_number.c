/**
 * is_prime_recursive - Help function to check if number is prime recursively.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check if it divides @n.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2 || n % divisor == 0)
	{
		return (0); /* Base case: not prime */
	}
	else if (divisor > n / 2)
	{
		return (1); /* Base case: prime */
	}
	else
	{
	return (is_prime_recursive(n, divisor + 1)); /* Recurse incremented divisor */
	}
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0); /* Special case: not prime */
	}
	else
	{
	return (is_prime_recursive(n, 2)); /* Start check primality with divisor 2 */
	}
}

