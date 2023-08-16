#include "main.h"

/*
 * main -Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	/*Task 3: islower*/
	int result_islower;
	char c_islower = 'a';
	result_islower = _islower(c_islower);
	_putchar(result_islower + '0');
	_putchar('\n');

	return (0);
}
