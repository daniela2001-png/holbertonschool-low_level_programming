#include "holberton.h"
/**
 * main - entry to review
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int file_from, file_to,  toread, towrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((toread = read(file_from, buffer, 1024)) > 0)
	{
		towrite = write(file_to, buffer, toread);
		if (towrite != toread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	}
	if (toread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
		close_(file_to);
		close_(file_from);
		return (0);
}
/**
 * close_ - close in case of error
 * @qfiles: argv number one or two
 * Return: void
 */
void close_(int qfiles)
{
	close(qfiles);

	if (qfiles == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", qfiles);
		exit(100);
	}
}
