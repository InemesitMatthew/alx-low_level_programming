**Task 0: Positive anything is better than negative nothing**

- **Filename:** 0-positive_or_negative.c
- **Description:** This program assigns a random number to the variable `n` each time it's executed and then prints whether the number stored in `n` is positive, negative, or zero.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to variable n and
 * determines if it's positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
```

- **Explanation:** This program generates a random number using `rand()` and assigns it to `n`. The program then uses `if-else` conditions to determine whether `n` is positive, negative, or zero, and prints the appropriate message accordingly.

---

**Task 1: The last digit**

- **Filename:** 1-last_digit.c
- **Description:** This program assigns a random number to the variable `n` and then prints the last digit of that number.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to variable n and
 * prints the last digit of that number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d and is ", n, n % 10);

	if (n % 10 > 5)
		printf("greater than 5\n");
	else if (n % 10 == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}
```

- **Explanation:** Similar to Task 0, this program generates a random number and assigns it to `n`. It then uses `%` operator to get the last digit of the number and determines whether it's greater than 5, equal to 0, or less than 6 but not 0, and prints the corresponding message.

---

**Task 2: I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**

- **Filename:** 2-print_alphabet.c
- **Description:** This program prints the lowercase alphabet in a single line using the `putchar` function.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
```

- **Explanation:** The program uses a `while` loop to iterate through the lowercase alphabet characters (`'a'` to `'z'`) and prints each character using the `putchar` function. After printing all characters, a newline is printed to move to the next line.

---

**Task 3: alphABET**

- **Filename:** 3-print_alphabets.c
- **Description:** This program prints the lowercase alphabet followed by the uppercase alphabet, all in a single line, using the `putchar` function.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase and uppercase alphabets using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');

	return (0);
}
```

- **Explanation:** Similar to Task 2, this program uses two `while` loops to iterate through the lowercase and uppercase alphabet characters and prints them using the `putchar` function. After printing all characters, a newline is printed to move to the next line.

---

**Task 4: When I was having that alphabet soup, I never thought that it would pay off**

- **Filename:** 4-print_alphabt.c
- **Description:** This program prints the lowercase alphabet except for the letters 'q' and 'e' in a single line using the `putchar` function.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet except 'q' and 'e' using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
```

- **Explanation:** This program uses a `while` loop to iterate through the lowercase alphabet characters and prints each character using the `putchar` function. However, it skips printing the characters 'q' and 'e' using an `if` condition. After printing all allowed characters, a newline is printed to move to the next line.

---

**Task 5: Numbers**

- **Filename:** 5-print_numbers.c
- **Description:** This program prints the single-digit numbers from 0 to 9 in a single line using the `putchar` function.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the single-digit numbers using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
```

- **Explanation:** This program uses a `while` loop to iterate through the single-digit numbers (`0` to `9`) and prints each number by adding the ASCII value of `'0'` to the digit and using the `putchar` function. After printing all numbers, a newline is printed to move to the next line.

---

**Task 6: Numberz**

- **Filename:** 6-print_numberz.c
- **Description:** This program prints the single-digit numbers from 0 to 9 in a single line using the `putchar` function without using variables of type `char`.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the single-digit numbers using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	putchar('\n');

	return (0);
}
```

- **Explanation:** Similar to Task 5, this program uses a `for` loop to iterate through the single-digit numbers and prints each number by adding the ASCII value of `'0'` to the digit and using the `putchar` function. After printing all numbers, a newline is printed to move to the next line.

---

**Task 7: Smile in the mirror**

- **Filename:** 7-print_tebahpla.c
- **Description:** This program prints the lowercase alphabet in reverse order in a single line using the `putchar` function.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse order using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
```

- **Explanation:** This program uses a `while` loop to iterate through the lowercase alphabet characters in reverse order and prints each character using the `putchar` function. After printing all characters, a newline is printed to move to the next line.

---

**Task 8: Hexadecimal**

- **Filename:** 8-print_base16.c
- **Description:** This program prints all numbers of base 16 (hexadecimal) in lowercase in a single line using the `putchar` function.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers of base 16 (hexadecimal) in lowercase using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 16; digit++)
	{
		if (digit < 10)
			putchar(digit + '0');
		else
			putchar(digit - 10 + 'a');
	}
	putchar('\n');

	return (0);
}
```

- **Explanation:** This program uses a `for` loop to iterate through the numbers of base 16 and prints each number using the `putchar` function. For digits less than 10, it adds the ASCII value of `'0'`, and for digits greater than or equal to 10, it adds the ASCII value of `'a'` minus 10 to correctly print hexadecimal letters. After printing all numbers, a newline is printed to move to the next line.

---

**Task 9: Patience, persistence and perspiration make an unbeatable combination for success**

- **Filename:** 9-print_comb.c
- **Description:** This program prints all possible combinations of single-digit numbers in ascending order, separated by commas and spaces, using the `putchar` function.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');

			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
```

- **Explanation:** This program uses nested `for` loops to iterate through all possible combinations of single-digit numbers and prints each combination using the `putchar` function. It separates the combinations with commas and spaces, ensuring that the last combination does not have a trailing comma and space. After printing all combinations, a newline is printed to move to the next line.

---

**Task 10: Inventing is a combination of brains and materials. The more brains you use, the less material you need**

- **Filename:** 100-print_comb3.c
- **Description:** This program prints all possible different combinations of two digits in ascending order, separated by commas and spaces, using the `putchar` function.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');

			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
```

- **Explanation:** Similar to Task 9, this program uses nested `for` loops to iterate through all possible different combinations of two digits and prints each combination using the `putchar` function. It separates the combinations with commas and spaces, ensuring that the last combination does not have a trailing comma and space. After printing all combinations, a newline is printed to move to the next line

---

**Task 11: The success combination in business is: Do what you do better... and: do more of what you do...**

- **Filename:** 101-print_comb4.c
- **Description:** This program prints all possible different combinations of three digits in ascending order, separated by commas and spaces, using the `putchar` function.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');

				if (digit1 != 7 || digit2 != 8 || digit3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
```

- **Explanation:** This program uses three nested `for` loops to iterate through all possible different combinations of three digits and prints each combination using the `putchar` function. It separates the combinations with commas and spaces, ensuring that the last combination does not have a trailing comma and space. After printing all combinations, a newline is printed to move to the next line.

---

**Task 12: Software is eating the World**

- **Filename:** 102-print_comb5.c
- **Description:** This program prints all possible combinations of two two-digit numbers in ascending order, separated by commas and spaces, using the `putchar` function.

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
```

- **Explanation:** This program uses nested `for` loops to iterate through all possible combinations of two two-digit numbers and prints each combination using the `putchar` function. It separates the combinations with commas and spaces, ensuring that the last combination does not have a trailing comma and space. After printing all combinations, a newline is printed to move to the next line.

---
