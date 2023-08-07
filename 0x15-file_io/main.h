#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
  *read_textfile - reads a textfile
  *@filename: pointer to the file
  *@letters: characters expected to be read
  *
  *Return: actual number of characters read
  */
ssize_t read_textfile(const char *filename, size_t letters);
#endif
