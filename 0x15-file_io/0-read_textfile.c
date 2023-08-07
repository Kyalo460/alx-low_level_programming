#include "main.h"
/**
  *read_textfile - reads a file saved in a folder
  *@filename: name of the file
  *@letters: number of bytes to be printed if present in the file
  *
  *Return: returns the number of characters printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *content;
	ssize_t w, o, r;

	if (filename == NULL)
		return (0);

	content = malloc(sizeof(char) * letters);
	if (content == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, content, letters);
	w = write(STDOUT_FILENO, content, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(content);
		return (0);
	}
	
	free (content);
	close(o);

	return (w);
}
