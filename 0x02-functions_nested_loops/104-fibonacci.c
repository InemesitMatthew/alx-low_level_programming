#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line. The numbers are
 * separated by comma and space. The program utilizes the print_fibonacci
 * function to perform the calculation and printing.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    print_fibonacci();

    return (0);
}

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers.
 *
 * Description: This function calculates and prints the first 98 Fibonacci
 * numbers. The numbers are separated by comma and space.
 */
void print_fibonacci(void)
{
    unsigned long int a = 1, b = 2, c, i;

    printf("%lu, %lu", a, b);
    for (i = 1; i < 98; i++)
    {
        c = a + b;
        printf(", %lu", c);
        a = b;
        b = c;
    }
    printf("\n");
}
