#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generates a random valid password for the 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1]; /* +1 for the null terminator */
	int i, ascii_value;

	srand(time(0)); /* Seed the random number generator with the current time */

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		/* Generate a random ASCII value between 33 and 126 (inclusive) */
		ascii_value = rand() % 94 + 33;
		password[i] = (char)ascii_value;
	}

	password[PASSWORD_LENGTH] = '\0'; /* Add null terminator at the end */

	printf("%s", password); /* Print the generated password */

	return (0);
}

