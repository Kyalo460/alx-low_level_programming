#include "main.h"
/**
  *get_endianness - checks if machine uses Big Endian of Litte Endian
  */
int get_endianness(void)
{
	int hex = 0x12345634;
	char *c;

	c = (char *)&hex;

	if (*c == 0x12)
		return (0);
	else
		return (1);
}
