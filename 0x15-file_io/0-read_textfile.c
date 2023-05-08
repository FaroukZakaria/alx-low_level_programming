#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define SIZE 1024

/**
 * read_textfile - s
 * @filename: s
 * @letters: s
 * Return: s
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rd, wr, totalrd;
	char buffer[SIZE];

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	totalrd = 0;
	while ((rd = read(file, buffer, SIZE)) > 0 && letters > 0)
	{
		if ((ssize_t)letters < rd)
		{
			rd = letters;
		}
		wr = write(STDOUT_FILENO, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			close(file);
			return (0);
		}
		letters -= rd;
		totalrd += rd;
	}
	if (rd == -1)
	{
		close(file);
		return (0);
	}
	if (close(file) == -1)
	{
		return (0);
	}
	return (totalrd);
}
