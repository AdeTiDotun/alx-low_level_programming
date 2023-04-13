#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile: The function to work with
 * @filename: The source of the file
 * @letters: The number of letters to be read and printed
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp,readMe;
	char *ch = malloc(sizeof(char *) * letters);

	if (!ch)
		return (0);

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY, 0600);
	if (fp == -1)
		return (0);

	readMe = read(fp, ch, letters);
	write(STDOUT_FILENO, ch, readMe);

	free(ch);
	close(fp);

	return (readMe);
}
