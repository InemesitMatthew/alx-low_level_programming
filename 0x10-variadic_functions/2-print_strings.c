#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings, separated by a given string.
 * @separator: The string to be printed between the strings (can be NULL).
 * @n: The number of strings passed to the function.
 * @...: The variable number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);

		if (i < n - 1 && separator != NULL && str != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
