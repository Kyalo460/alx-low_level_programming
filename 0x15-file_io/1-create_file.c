#include "main.h"
/**
  *create_file - creates a new file or appends to an existing one
  *@filename: pointer to file name
  *@text_content: content to be written in file
  *
  *Return: returns 1 (success) -1 (fail)
  */
int create_file(const char *filename, char *text_content)
{
	ssize_t o, w;
	int size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size])
			size++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, size);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
