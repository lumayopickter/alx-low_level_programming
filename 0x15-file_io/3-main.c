#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return 1;
	}

	if (access(argv[1], R_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return 98;
	}

	if (access(argv[2], F_OK) != -1 && access(argv[2], W_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		return 99;
	}

	if (execl("/bin/cp", "cp", argv[1], argv[2], NULL) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Execution failed\n");
		return 100;
	}

	return 0;
}

