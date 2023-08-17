#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and print how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day in month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month > 2) /* After February */
		{
			day++; /* Increase the day count */
		}

		printf("Day of the year:%d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}
