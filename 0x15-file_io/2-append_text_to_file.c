#include "holberton.h"
/**
 * append_text_to_file - add text to the end of my file
 * @filename: is a name of the file
 * @text_content:string that end in null
 * Return: 1 in case of success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file2;
	int i = 0;

	if (!filename)
		return (-1);

	file2 = open(filename, O_WRONLY | O_APPEND);
	if (file2 == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
			while (text_content[i])
				i++;
			write(file2, text_content, i);
			close(file2);
			return (1);
}
