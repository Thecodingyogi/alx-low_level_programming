#include "main.h"

/**
 * read_textfile - reads text file and prints it
 * @filename: name of file to read from
 * @letters: the number of letters it should read and print
 *
 * Return: number of letters it could read and print,
 * 0 if file can not be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(STDIN_FILENO, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}


