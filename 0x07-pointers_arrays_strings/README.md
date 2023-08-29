

**Task 0: memset**
- **Objective:** Write a function that fills memory with a constant byte.
- **Prototype:** `char *_memset(char *s, char b, unsigned int n);`
- **Description:** The `_memset` function takes a pointer to a memory area `s`, a constant byte `b`, and the number of bytes to fill `n`. It fills the first `n` bytes of the memory area `s` with the constant byte `b` and returns a pointer to the memory area `s`.
- **Usage Example:** You can use this function to initialize a block of memory with a specific value.

Here's the complete code for Task 0:

```c
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: the constant byte to fill with
 * @n: number of bytes to fill
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        s[i] = b;

    return (s);
}
```

**Task 1: memcpy**
- **Objective:** Write a function that copies memory area.
- **Prototype:** `char *_memcpy(char *dest, char *src, unsigned int n);`
- **Description:** The `_memcpy` function copies `n` bytes from the memory area `src` to the memory area `dest`. It returns a pointer to `dest`.
- **Usage Example:** You can use this function to copy data from one memory location to another.

Here's the complete code for Task 1:

```c
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = src[i];

    return (dest);
}
```

**Task 2: strchr**
- **Objective:** Write a function that locates a character in a string.
- **Prototype:** `char *_strchr(char *s, char c);`
- **Description:** The `_strchr` function searches the string `s` for the first occurrence of the character `c` and returns a pointer to it. If `c` is not found, it returns `NULL`.
- **Usage Example:** You can use this function to find the first occurrence of a specific character in a string.

Here's the complete code for Task 2:

```c
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: input string
 * @c: character to locate
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return (s);
        s++;
    }

    if (*s == c)
        return (s);

    return (NULL);
}
```

**Task 3: strspn**
- **Objective:** Write a function that gets the length of a prefix substring.
- **Prototype:** `unsigned int _strspn(char *s, char *accept);`
- **Description:** The `_strspn` function calculates the length of the initial segment of string `s` that consists only of characters from the string `accept`. It returns the number of bytes in this segment.
- **Usage Example:** You can use this function to find the length of a substring consisting of specific characters at the beginning of a string.

Here's the complete code for Task 3:

```c
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: characters to include in the substring
 * Return: number of bytes in the initial segment of s that consist of accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i, j;
    int found;

    for (i = 0; s[i] != '\0'; i++)
    {
        found = 0;
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                count++;
                found = 1;
                break;
            }
        }
        if (found == 0)
            return (count);
    }

    return (count);
}
```

**Task 4: strpbrk**
- **Objective:** Write a function that searches a string for any of a set of bytes.
- **Prototype:** `char *_strpbrk(char *s, char *accept);`
- **Description:** The `_strpbrk` function searches the string `s` for the first occurrence of any character from the string `accept`. It returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found.
- **Usage Example:** You can use this function to find the first occurrence of any character from a set of characters in a string.

Here's the complete code for Task 4:

```c
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: set of bytes to search for
 * Return: pointer to the byte in s that matches one of accept, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
                return (&s[i]);
        }
    }

    return (NULL);
}
```

**Task 5: strstr**
- **Objective:** Write a function that locates a substring.
- **Prototype:** `char *_strstr(char *haystack, char *needle);`
- **Description:** The `_strstr` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared. It returns a pointer to the beginning of the located substring or `NULL` if the substring is not found.
- **Usage Example:** You can use this function to find the first occurrence of a substring within a larger string.

Here's the complete code for Task 5:

```c
#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: input string to search within
 * @needle: substring to locate
 * Return: pointer to the beginning of the located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *sub = needle;

        while (*haystack && *sub && *haystack == *sub)
        {
            haystack++;
            sub++;
        }

        if (!*sub)
            return (start);

        haystack = start + 1;
    }

    return (NULL);
}
```

**Task 6: Chess is mental torture**
- **Objective:** Write a function that prints the chessboard.
- **Prototype:** `void print_chessboard(char (*a)[8]);`
- **Description:** The `print_chessboard` function takes a 2D array representing a chessboard and prints its content. It assumes an 8x8 chessboard.
- **Usage Example:** You can use this function to print the current state of a chessboard.

Here's the complete code for Task 6:

```c
#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            putchar(a[i][j]);
        }
        putchar('\n');
    }
}
```

**Task 7: The line of life is a ragged diagonal between duty and desire.**
- **Objective:** Write a function that prints the sum of the two diagonals of a square matrix.
- **Prototype:** `void print_diagsums(int *a, int size);`
- **Description:** The `print_diagsums` function takes a pointer to a square matrix `a` and its size. It calculates and prints the sum of the elements along the two diagonals of the matrix.
- **Usage Example:** You can use this function to find and print the sums of the diagonals of a square matrix.

Here's the complete code for Task 7:

```c
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
    int i;
    int sum_diag1 = 0;
    int sum_diag2 = 0;

    for (i = 0; i < size; i++)
    {
        sum_diag1 += a[i * size + i];   // Add elements to the main diagonal
        sum_diag2 += a[i * size + (size - 1 - i)]; // Add elements from the other diagonal
    }

    printf("%d, %d\n", sum_diag1, sum_diag2);
}
```

**Task 8:  Double pointer, double fun**
- **Objective:** Write a function that sets the value of a pointer to a char.
- **Prototype:** `void set_string(char **s, char *to);`
- **Description:** The `set_string` function changes the value of a pointer to a char and makes it point to a new string.
- **Usage Example:** You can use this function to change the value of a pointer to point to a different string.

Here's the complete code for Task 9:

```c
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char
 * @to: pointer to a char
 */
void set_string(char **s, char *to)
{
    *s = to;
}
```

**TASK 9: My primary goal of hacking was the intellectual curiosity, the seduction of adventure**
Has been skipped
