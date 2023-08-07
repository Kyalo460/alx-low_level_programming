#include "main.h"
/**
  *append_text_to_file - adds text to a file if the file exists
  *@filename: pointer to the file name
  *@text_content: string to be added to file
  *
  *Return: return 1 (success) -1 (fail)
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size])
			size++;
	}

	o = open(filename, O_APPEND | O_WRONLY);
	w = write(o, text_content, size);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
