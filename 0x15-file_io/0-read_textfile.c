#include "main.h"
/**
 * read_textfile - s
 * @filename: s
 * @letters: s
 * Return: s
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes;
	ssize_t total = 0;
	char *buffer;

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	free(buffer);
	close(o);
}
