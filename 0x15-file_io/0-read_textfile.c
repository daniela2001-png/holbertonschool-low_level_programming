#include "holberton.h"

/**
 * read_textfile - function that From the file indicated by the file descriptor
 * @filename:pointer to file
 * @letters:quality of bytes to show in the file
 * Return: if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int puntero;
	char *buffer;
	int cpletters;

	if (filename == NULL)
		return (0);

	buffer = malloc((letters) * sizeof(char));
	if (buffer == NULL)
		return (0);

	buffer[letters] = '\0';

	puntero = open(filename, O_RDONLY);
	if (puntero == -1)
		return (0);
	cpletters = read(puntero, buffer, letters);
	write(STDOUT_FILENO, buffer, cpletters);
	close(puntero);
	free(buffer);
	return (cpletters);
}
