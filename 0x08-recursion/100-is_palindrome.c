#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - Checks if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if(start >= end)
		return 1;
	/**
	 *Base case: If we've checked the whole string,
	 *it's a palindrome.
	 */
	if (s[start] != s[end])
		return 0;
	/**
	 * If characters at the current indices don't match,
	 * it's not a palindrome.
	 */
	
	return is_palindrome_recursive(s, start + 1, end - 1);
	/*Check the next pair of characters.*/
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	/*Call the recursive function with the start and end indicies.*/
	return is_palindrome_recursive(s, 0, len - 1);
}

int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);/*1 (level is a palindrome)*/

	r = is_palindrome("redder");
	printf("%d\n", r);/*1 (redder is a palindrome)*/
	r = is_palindrome("test");
	printf("%d\n", r);/*1 (test is a palindrome)*/
	r = is_palindrome("step on no pets");
	printf("%d\n", r);/*1 (step on no pets is a palindrome)*/

	return (0);
}
