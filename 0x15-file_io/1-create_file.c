#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: The name of the file to create.
 * @text_content: Is a string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int f;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fp = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (fp < 0)
	{
		if (errno == EEXIST)
		{
			fp = open(filenmae, O_WRONLY | O_TRUNC);
			if (fp == -1)
				return (-1);
		}
		else
			return (-1);
	}
	for (f = 0; text_content[f] != '\0'; f++)
	{
		if (write(fp, &text_content[f], 1) == -1)
			return (-1);
	}
	close (fp);
	return (1);
}
