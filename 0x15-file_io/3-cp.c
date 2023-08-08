#include "main.h"
/**
  *main - used to call the function that copies files
  *@argc: argument count
  *@argv: argument vector
  *
  *Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	n = copy(argv[1], argv[2]);

	if (n == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	else if (n == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (n > 0)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", n);
		exit(100);
	}
	return (0);
}
/**
  *copy - copies from one file to the other
  *@original: file to copy from
  *@duplicate: file to copy to
  *
  *Return: 0 (if success)
  */
int copy(const char *original, char *duplicate)
{
	int o1, o2, r, w, c1, c2;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (99);

	o1 = open(original, O_RDONLY);
	o2 = open(duplicate, O_TRUNC | O_WRONLY | O_CREAT, 0664);
	r = read(o1, buffer, 1024);
	do {
		if (o1 == -1 || r == -1)
			return (98);

		w = write(o2, buffer, r);

		if (o2 == -1 || w == -1)
			return (99);

		r = read(o1, buffer, 1024);
		o2 = open(duplicate, O_WRONLY | O_APPEND);
	} while (r > 0);

	c1 = close(o1);
	c2 = close(o2);
	free(buffer);

	if (c1 == -1)
		return (o1);
	if (c2 == -1)
		return (o2);

	return (0);
}
