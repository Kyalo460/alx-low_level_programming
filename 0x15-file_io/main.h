#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
  *read_textfile - reads a textfile
  *@filename: pointer to the file
  *@letters: characters expected to be read
  *
  *Return: actual number of characters read
  */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
