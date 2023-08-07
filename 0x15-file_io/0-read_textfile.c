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
	FILE *ptr;
	char ch;
	ssize_t sum = 0;

	if (filename == NULL)
		return (0);

	ptr = fopen(filename, "r");

	if (ptr == NULL)
		return (0);

	while (letters != 0)
	{
		ch = fgetc(ptr);
		write(1, &ch, 1);

		if (ch == EOF)
		{
			sum--;
			return (sum);
		}
		sum++;
		letters--;
	}

	return (sum);
}
