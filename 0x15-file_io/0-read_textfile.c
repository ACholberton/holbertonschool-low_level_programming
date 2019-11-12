#include "holberton.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: is the name of the file to be printed
 *@letters: is the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, counter, writer;
	char *buffer;

	file = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	counter = read(file, buffer, letters);
	if (counter < 0)
	{
		return (0);
	}
	writer = write(STDOUT_FILENO, buffer, counter);
	if (writer < 0)
	{
		return (0);
	}
	close(file);
	free(buffer);
	return (counter);
}
