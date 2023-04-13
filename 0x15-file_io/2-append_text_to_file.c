#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: String to append at the end of a file.
 * Return: 1 if the file exist, -1 if the file does not exist, or if you
 * don't have the required permissions to write to the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		if (write(fp, text_content, -strlen(text_content)) == -1)
			return (-1);
	}

	close(fp);
	return (1);

}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
 */

int _strlen(char *s)
{
	int b = 0;

	while (s[b])
		b++;

	return (b);
}
