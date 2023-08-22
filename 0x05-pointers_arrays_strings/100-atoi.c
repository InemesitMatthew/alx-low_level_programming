#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int sign = 1;  /*Initialize the sign as positive*/
	int num = 0;
	int i = 0;

	/*Check for and handle leading signs*/
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -sign;
/**
*If negative sign is encountered,
*change sign to negative
*/
		}
		i++;
	}

	/*Iterate through the string and convert to integer*/
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign); /*Apply the sign to the final result*/
}
