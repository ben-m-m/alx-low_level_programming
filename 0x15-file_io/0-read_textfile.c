#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads the content of the file
 * @filename: name of file
 * @letters: number of letters to print
 *
 * Return: always 0 for success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
