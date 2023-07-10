#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string to concate
 * @s2: second string to concat
 * Return: concated s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int c1;
	int c2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c1 = 0;
	c2 = 0;
	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;
	conct = malloc(sizeof(char) * (c1 + c2 + 1));

	if (conct == NULL)
		return (NULL);
	c1 = 0;
	c2 = 0;
	while (s1[c1] != '\0')
	{
		conct[c1] = s1[c1];
		c1++;
	}

	while (s2[c2] != '\0')
	{
		conct[c1] = s2[c2];
		c1++, c2++;
	}
	conct[c1] = '\0';
	return (conct);
}
