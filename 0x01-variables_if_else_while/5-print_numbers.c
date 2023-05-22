#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		write(1, &num, 1);
		num++;
	}
	write(1, "\n", 1);

	return (0);
}

