#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print anything based on the format specifier.
 * @format: A list of format specifiers for the arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0;

	va_start (args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", separator, va_arg(args, int));
		if (format[i] == 'i')
			printf("%s%d", separator, va_arg(args, int));
		if (format[i] == 'f')
			printf("%s%f", separator, va_arg(args, double));
		if (format[i] == 's')
		{
			char *str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
		}

		separator = ", ";
		i++;
	}

	printf("\n");

	va_end(args);
}
