#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n:  the number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed
 * If one of the strings if NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *p;
	unsigned int nl;

	va_start(strings, n);

	for (nl = 0; nl < n; nl++)
	{
		p = va_arg(strings, char *);

		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);

		if (nl != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
