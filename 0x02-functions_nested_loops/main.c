#include "main.h"
#include "3-islower.h"
#include "4-isalpha.h"
#include "5-sign.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/*Task 1*/
	/* Call the function to print the alphabet */
	print_alphabet();

	 /* Task 3: islower */
    	int result_islower;
    	char c_islower = 'a';
    	result_islower = _islower(c_islower);
    	_putchar(result_islower + '0');
    	_putchar('\n');

    	/* Task 4: isalpha */
    	int result_isalpha;
    	char c_isalpha = 'A';
    	result_isalpha = _isalpha(c_isalpha);
    	_putchar(result_isalpha + '0');
    	_putchar('\n');

  	/* Task 5: Sign */
    	int n = -10;
    	int result_sign = print_sign(n);
    	_putchar(result_sign + '0');
    	_putchar('\n');

	return (0);
}
