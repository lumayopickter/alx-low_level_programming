#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to which the text will be appended.
 * @text_content: The NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a"); /* Open the file in append mode */
	if (file == NULL)
		return (-1);

	while (text_content[text_length] != '\0') {
		text_length++;
	}

	if (fwrite(text_content, 1, text_length, file) == text_length) {
		fclose(file);
		return (1);
	} else {
		fclose(file);
		return (-1);
	}
}

