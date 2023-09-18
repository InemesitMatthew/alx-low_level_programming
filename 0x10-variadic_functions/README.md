
# `0-sum_them_all.c` - Sum of Variable Arguments

```c
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: The number of parameters.
 * @...: The variable number of integers to sum.
 *
 * Return: The sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;   // Declare a va_list to hold the variable arguments
    int sum = 0;    // Initialize the sum to 0
    unsigned int i;

    if (n == 0)
        return (0); // If n is 0, return 0

    va_start(args, n); // Initialize the va_list to the first argument after n

    for (i = 0; i < n; i++)
    {
        sum += va_arg(args, int); // Add each argument to the sum
    }

    va_end(args); // Clean up the va_list

    return (sum); // Return the sum
}
```

### `README.md` - Sum of Variable Arguments

#### `0-sum_them_all.c`

This C program defines a function `sum_them_all` that calculates the sum of a variable number of integer arguments.

##### Function Signature

```c
int sum_them_all(const unsigned int n, ...);
```

##### Parameters

- `n`: The number of integer arguments to sum.
- `...`: The variable number of integer arguments to be summed.

##### Return Value

- The sum of the integer arguments.

##### Description

- The function first checks if `n` is equal to 0. If `n` is 0, it immediately returns 0 as specified in the task requirements.

- It uses the `va_list` and related macros (`va_start`, `va_arg`, `va_end`) from `<stdarg.h>` to handle variable arguments.

- The function initializes a `va_list` called `args` to hold the variable arguments and an integer `sum` to store the sum of the arguments.

- It then loops through the arguments using a `for` loop and adds each argument to the `sum`.

- After processing all the arguments, it cleans up the `va_list` and returns the calculated sum.

##### Usage

Here's an example of how to use the `sum_them_all` function:

```c
#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
```

In this example, we call `sum_them_all` with different numbers of integer arguments and print the results.

##### Compilation and Testing

Compile the program with the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
```

Run the compiled program:

```bash
./a
```

It should produce the sum of the provided integer arguments.

---

# `1-print_numbers.c` - Print Numbers with Separator

```c
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers, separated by a given string.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 * @...: The variable number of integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;   // Declare a va_list to hold the variable arguments
    unsigned int i;

    va_start(args, n); // Initialize the va_list to the first argument after n

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int)); // Print the integer argument

        if (i < n - 1 && separator != NULL)
            printf("%s", separator); // Print the separator unless it's NULL
    }

    printf("\n"); // Print a new line at the end

    va_end(args); // Clean up the va_list
}
```

### `README.md` - Print Numbers with Separator

#### `1-print_numbers.c`

This C program defines a function `print_numbers` that prints a variable number of integers, separated by a given string.

##### Function Signature

```c
void print_numbers(const char *separator, const unsigned int n, ...);
```

##### Parameters

- `separator`: The string to be printed between numbers. It can be `NULL`, in which case nothing is printed between numbers.

- `n`: The number of integers to print.

- `...`: The variable number of integers to be printed.

##### Description

- The function takes a string `separator` and an unsigned integer `n` as arguments.

- It uses the variable argument list functionality provided by `<stdarg.h>` to handle the variable number of integer arguments.

- The function initializes a `va_list` named `args` to hold the variable arguments.

- It iterates through the integer arguments using a `for` loop, printing each integer using `printf`.

- If the `separator` is not `NULL` and there are more integers to print (i.e., not the last one), it prints the `separator` string.

- Finally, it prints a new line character to end the output.

##### Usage

Here's an example of how to use the `print_numbers` function:

```c
#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
```

In this example, we call `print_numbers` with a separator `", "` and four integers. It prints the integers separated by `", "` and ends with a new line.

##### Compilation and Testing

Compile the program with the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
```

Run the compiled program:

```bash
./b
```

It should print the integers separated by `", "` and followed by a new line.

---

### `2-print_strings.c` - Print Strings with Separator

```c
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings, separated by a given string.
 * @separator: The string to be printed between the strings (can be NULL).
 * @n: The number of strings passed to the function.
 * @...: The variable number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;   // Declare a va_list to hold the variable arguments
    unsigned int i;

    va_start(args, n); // Initialize the va_list to the first argument after n

    for (i = 0; i < n; i++)
    {
        char *str = va_arg(args, char *); // Retrieve the string argument

        if (str != NULL)
            printf("%s", str); // Print the string

        if (i < n - 1 && separator != NULL && str != NULL)
            printf("%s", separator); // Print the separator unless it's NULL or the string is NULL
    }

    printf("\n"); // Print a new line at the end

    va_end(args); // Clean up the va_list
}
```

### `README.md` - Print Strings with Separator

#### `2-print_strings.c`

This C program defines a function `print_strings` that prints a variable number of strings, separated by a given string.

##### Function Signature

```c
void print_strings(const char *separator, const unsigned int n, ...);
```

##### Parameters

- `separator`: The string to be printed between the strings. It can be `NULL`, in which case nothing is printed between strings.

- `n`: The number of strings to print.

- `...`: The variable number of strings to be printed.

##### Description

- The function takes a string `separator` and an unsigned integer `n` as arguments.

- It uses the variable argument list functionality provided by `<stdarg.h>` to handle the variable number of string arguments.

- The function initializes a `va_list` named `args` to hold the variable arguments.

- It iterates through the string arguments using a `for` loop, printing each string using `printf`.

- If the `separator` is not `NULL` and there are more strings to print (i.e., not the last one) and the current string is not `NULL`, it prints the `separator` string.

- If a string argument is `NULL`, it prints `"(nil)"` instead of the `NULL` string.

- Finally, it prints a new line character to end the output.

##### Usage

Here's an example of how to use the `print_strings` function:

```c
#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
```

In this example, we call `print_strings` with a separator `", "`, two strings, and one of the strings is `NULL`. It prints the strings separated by `", "` and ends with a new line.

##### Compilation and Testing

Compile the program with the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
```

Run the compiled program:

```bash
./c
```

It should print the strings separated by `", "` and followed by a new line. If a string is `NULL`, it should print `"(nil)"`.

---

# `3-print_all.c` - Print Anything Based on Format Specifier

```c
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print anything based on the format specifier.
 * @format: A list of format specifiers for the arguments.
 */
void print_all(const char * const format, ...)
{
    va_list args;   // Declare a va_list to hold the variable arguments
    char *separator = ""; // Initialize separator as an empty string
    int i = 0;

    va_start(args, format); // Initialize the va_list to the first argument after format

    while (format && format[i])
    {
        if (format[i] == 'c')
            printf("%s%c", separator, va_arg(args, int)); // Print a character

        if (format[i] == 'i')
            printf("%s%d", separator, va_arg(args, int)); // Print an integer

        if (format[i] == 'f')
            printf("%s%f", separator, va_arg(args, double)); // Print a float

        if (format[i] == 's')
        {
            char *str = va_arg(args, char *); // Retrieve the string argument
            if (str == NULL)
                str = "(nil)";
            printf("%s%s", separator, str); // Print a string (or "(nil)" if NULL)
        }

        separator = ", "; // Update separator for the next iteration
        i++;
    }

    printf("\n"); // Print a new line at the end

    va_end(args); // Clean up the va_list
}
```

### `README.md` - Print Anything Based on Format Specifier

#### `3-print_all.c`

This C program defines a function `print_all` that prints anything based on a format specifier string.

##### Function Signature

```c
void print_all(const char * const format, ...);
```

##### Parameters

- `format`: A format specifier string containing a list of characters representing the types of arguments to be printed. Supported format specifiers are:
    - `'c'`: Character
    - `'i'`: Integer
    - `'f'`: Float
    - `'s'`: String (if the string is `NULL`, it prints `"(nil)"` instead)

##### Description

- The function takes a format specifier string `format` and a variable number of arguments.

- It uses the variable argument list functionality provided by `<stdarg.h>` to handle the variable number of arguments.

- The function iterates through the characters in the `format` string using a `while` loop.

- Depending on the character in the `format` string, it prints the corresponding type of argument using `printf`.

- If a string argument is `NULL`, it prints `"(nil)"` instead.

- The function uses a separator (initially an empty string) to separate the printed values.

- Finally, it prints a new line character to end the output.

##### Usage

Here's an example of how to use the `print_all` function:

```c
#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
```

In this example, we call `print_all` with a format specifier `"ceis"` and four arguments of different types. It prints the arguments based on the format specifier and separates them with `", "`.

##### Compilation and Testing

Compile the program with the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
```

Run the compiled program:

```bash
./d
```

It should print the arguments based on the format specifier and followed by a new line.
