#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers, separated by a given string.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 * @...: The variable number of integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
