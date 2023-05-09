#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
/**
 * create_file - s
 * @filename: s
 * @text_content: s
 * Return: s
 */
int create_file(const char *filename, char *text_content)
{
	int file, len = 0, ret = -1;
	mode_t data;
	struct stat st;

	if (filename == NULL)
	{
		return (-1);
	}
	if (stat(filename, &st) == 0)
	{
		data = umask(0);
		file = open(filename, O_WRONLY | O_TRUNC);
		umask(data);
		if (file < 0)
		{
			return (-1);
		}
	}
	else
	{
		file = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
		if (file < 0)
		{
			return (-1);
		}
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		ret = write(file, text_content, len);
	}
	close(file);
	if (ret < len)
	{
		return (-1);
	}
	return (1);
}
