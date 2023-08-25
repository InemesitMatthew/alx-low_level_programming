#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string where the result is stored.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest; /*Store the starting address of dest.*/

	/*Step 1: Move the dest pointer to the end of the destination string*/
	while (*dest)
	{
		dest++;
	}

	/*Step 2: Append characters from src to dest.*/
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	/*
	 * Step 3: Add the null terminator to terminante
	 * the concatenated string.
	 */

	return (result);
	/*
	 * Step 4: Return a pointer to the beginning of the
	 * concatenated string.
	 */
}

int main_strcat(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1); /*Print the initial s1: "Hello "*/
	printf("%s", s2);/*Print s2: "World!\n"*/

	/*Concatenate s2 to s1 using _strcat and store the result in ptr.*/
	ptr = _strcat(s1, s2);


	printf("%s", s1);/*Should print "Hello World!\n"*/
	printf("%s", s2);/*Should print "World!\n"*/
	printf("%s", ptr);/*Should print "Hello World!\n"*/

	return (0);
}
