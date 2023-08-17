#include "main.h" 
/** Include the header file that contains 
* the function prototype
*
* main - tests the positive_or_negative() function with input value 0
* Return: 0
*/
int main(void)
{ 
	int i;

	i = 0; /* set the input value to 0*/
	positive_or_negative(i); /* Call the function with the input value*/

	return (0);
}
