#include "holberton.h"
/**
 *create_file - a function that creates a file.
 *@filename: the file to be created
 *@text_content: what is inside the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, counter;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	file = open(filename, O_CREAT | O_RDWR, 0600, O_TRUNC);
	if (file < 0)
	{
		return (-1);
	}

	for (counter = 0; text_content[counter] != '\0'; counter++)
	{
		write(file, text_content, STDOUT_FILENO);
	}
	close(file);
	return (1);
}
