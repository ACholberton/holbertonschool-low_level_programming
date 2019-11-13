#include "holberton.h"
/**
 *append_text_to_file - appends text at the end of a file.
 *@filename: is the name of the file.
 *@text_content: is the NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, counter;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_RDWR | O_APPEND);
	if (file < 0)
	{
		return (-1);
	}

	for (counter = 0; text_content[counter] != '\0'; counter++)
		;
	write(file, text_content, counter);
	close(file);
	return (1);
}
