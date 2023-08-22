#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int password_length = 12; /* Change the length as needed */
	char password[13]; /*12 characters plus the null terminator*/
	int i;

	srand(time(NULL));

	for (i = 0; i < password_length - 1; i++)
	{
	/*Generate random ASCII characters in the range of ' ' to '~'*/
		password[i] = ' ' + rand() % ('~' - ' ');
	}

	/*Make sure the last character is a null terminator*/
		password[password_length - 1] = '\0';

	/*Print the generated password*/
		printf("%s\n", password);

	return (0);
}
