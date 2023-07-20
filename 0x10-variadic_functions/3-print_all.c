#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all -function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *p, *ptr = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", ptr, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", ptr, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", ptr, va_arg(list, double));
					break;
				case 's':
					p = va_arg(list, char *);

					if (!p)
						p = "(nil)";
					printf("%s%s", ptr, p);
					break;
				default:
					a++;
					continue;
			}
			ptr = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(list);
}
