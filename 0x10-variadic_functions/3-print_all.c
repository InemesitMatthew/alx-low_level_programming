#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Print arguments of specific types.
 * @format: A list of types of arguments passed to the function.
 *          - 'c': char
 *          - 'i': integer
 *          - 'f': float
 *          - 's': char * (if the string is NULL, print "(nil)")
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
			sep = ", ";

		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep,
					(float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
