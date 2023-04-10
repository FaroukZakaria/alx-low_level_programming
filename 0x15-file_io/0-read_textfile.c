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

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	while (bytes_read = fread(buffer, sizeof(char), letters, file)) > 0
	{
		total += bytes;
	}
	fclose(file);
	free(buffer);
	return (total);
}
