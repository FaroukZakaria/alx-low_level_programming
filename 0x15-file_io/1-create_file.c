#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * create_file - s
 * @filename: s
 * @text_content: s
 * Return: s
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file2;

	file2 = fopen(filename, "wb");
	if (file2 == NULL)
	{
		return (-1);
	}
	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}
	if (fclose(file) == EOF)
	{
		return (-1);
	}
	return (0);
}
