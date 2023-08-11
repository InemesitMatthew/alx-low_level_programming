#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by ", ", in ascending order using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;

    while (digit <= 9)
    {
        putchar(digit + '0');

        if (digit < 9)
        {
            putchar(',');
            putchar(' ');
        }

        digit++;
    }

    putchar('\n');

    return (0);
}
