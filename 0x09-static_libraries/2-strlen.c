#include "main.h"

/**
  * _strlen -check the  length of string
  * @s: checks string
  * Return: the length of string
  */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
