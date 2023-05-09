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

	mode_t old_mask = umask(S_IWGRP | S_IWOTH);

	file2 = fopen(filename, "wb");
	if (file2 == NULL)
	{
		return (-1);
	}
	if (fputs(text_content, file2) == EOF)
	{
		fclose(file2);
		return (-1);
	}
	if (fclose(file2) == EOF)
	{
		return (-1);
	}
	umask(old_mask);
	return (0);
}
