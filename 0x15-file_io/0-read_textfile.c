#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters it could read and print.
 *         If the file can't be opened or read, or if filename is NULL, return 0.
 *         If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;              /* File descriptor */
    ssize_t num_read;    /* Number of bytes read */
    ssize_t num_written; /* Number of bytes written */
    char *buffer;        /* Buffer for reading */

    if (!filename) /* Check if filename is NULL */
        return (0);

    /* Open the file for reading */
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    /* Allocate memory for the buffer */
    buffer = malloc(letters);
    if (!buffer)
    {
        close(fd);
        return (0);
    }

    /* Read from the file */
    num_read = read(fd, buffer, letters);
    if (num_read == -1)
    {
        close(fd);
        free(buffer);
        return (0);
    }

    /* Write to standard output (stdout) */
    num_written = write(STDOUT_FILENO, buffer, num_read);
    if (num_written == -1 || num_written != num_read)
    {
        close(fd);
        free(buffer);
        return (0);
    }

    close(fd);
    free(buffer);

    return (num_written);
}

