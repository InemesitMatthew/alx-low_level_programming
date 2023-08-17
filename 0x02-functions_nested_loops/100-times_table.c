#include "main.h"
#include "unistd.h"
/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: this is the times table value limit
 *
 * Retun: void
 */
void print_times_table(int n)
{
	int multiplicand, multiplier, product;

	if (n >= 0 && n <= 15)
	{
		multiplicand = 0;
		while (multiplicand <= n)
		{
			multiplier = 0;
			while (multiplier <= n)
			{
				product = multiplicand * multiplier;
				if (multiplier != 0)
				{
					write(1, ", ", 2);
					if (product < 10)
						write(1, "  ", 2);
					else if (product < 100)
						_putchar(' ');
				}
				if (product >= 10 && product <= 99)
				{
					_putchar((product / 10) +
						 '0'); /* Tens digit */
					_putchar((product % 10) +
						 '0'); /* Unit digit */
				}
				else if (product >= 100 && product <= 999)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar((product % 10) + '0');
				}
				else
					_putchar(product + '0');
				multiplier++;
			}
			_putchar('\n');
			multiplicand++;
		}
	}
}
