#include "main.h"

/**
  * _memset - to fill a block of memory with a specified value
  * @s: memory to be filled
  * @b: desired value
  * @n: number of byte to change
  * Return: changed array with new value for n bytes
  */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
