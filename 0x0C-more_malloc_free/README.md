# Task: 0-malloc_checked

## Overview

In this task, we are required to create a function named `malloc_checked` that allocates memory using the `malloc` function. If `malloc` fails to allocate memory (i.e., it returns `NULL`), our function should terminate the program with a status value of 98. This task helps ensure that memory allocation failures are handled gracefully, preventing potential issues in the program due to insufficient memory.

## Function Prototype

```c
void *malloc_checked(unsigned int b);
```

## Implementation

Here is the implementation of the `malloc_checked` function:

```c
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory block to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function terminates with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        exit(98); /* Terminate the process with status 98 if malloc fails */
    }
    return ptr;
}
```

### Function Explanation

1. We include the necessary header files, including `"main.h"` and `<stdlib.h>`.

2. The function `malloc_checked` takes an unsigned integer `b` as its parameter, which represents the size of the memory block to allocate.

3. Inside the function:
   - We declare a pointer `ptr` of type `void*` to store the result of the memory allocation.

   - We call the `malloc` function, attempting to allocate a memory block of size `b` bytes. The result is stored in the `ptr` variable.

   - We check if `ptr` is equal to `NULL`, which indicates that `malloc` failed to allocate memory. If it is `NULL`, we execute the `exit(98)` statement to terminate the program with a status value of 98.

   - If memory allocation is successful (i.e., `ptr` is not `NULL`), we return the `ptr` pointer, which points to the allocated memory block.

## Usage

You can use the `malloc_checked` function to dynamically allocate memory while ensuring proper error handling. Here is an example of how to use the function:

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char *str;

    str = malloc_checked(1024); /* Allocate 1024 bytes of memory */
    
    if (str == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return (EXIT_FAILURE);
    }

    /* Use the allocated memory as needed */

    free(str); /* Don't forget to free the allocated memory when done */

    return (EXIT_SUCCESS);
}
```

## Conclusion

The `malloc_checked` function provides a robust way to allocate memory using `malloc` while handling memory allocation failures gracefully. This ensures the reliability and stability of your programs, even when dealing with limited system resources.

---

# Task: 1. string_nconcat

### Overview

In this task, you need to create a function called `string_nconcat` that concatenates two strings. The resulting string should consist of the characters from `s1`, followed by the first `n` bytes (or all if `n` is greater than or equal to the length of `s2`) of `s2`. The concatenated string should be null-terminated.

### Prototype

```c
char *string_nconcat(char *s1, char *s2, unsigned int n);
```

### Function Description

- The `string_nconcat` function takes three parameters:
  - `s1`: A pointer to the first string.
  - `s2`: A pointer to the second string.
  - `n`: An unsigned integer representing the number of bytes to concatenate from `s2`.

- The function returns a pointer to a newly allocated space in memory that contains the concatenated string.

- If the function fails to allocate memory for the concatenated string, it should return `NULL`.

- If `n` is greater than or equal to the length of `s2`, the function should concatenate the entire `s2` string.

- If either `s1` or `s2` is `NULL`, treat it as an empty string.

### Implementation

Here's an implementation of the `string_nconcat` function:

```c
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, i;
    char *concat;

    /* Calculate the lengths of s1 and s2 (or treat NULL as an empty string) */
    if (s1)
    {
        while (s1[len1])
            len1++;
    }

    if (s2)
    {
        while (s2[len2])
            len2++;
    }

    /* Allocate memory for the concatenated string */
    if (n >= len2)
        n = len2;

    concat = malloc(sizeof(char) * (len1 + n + 1));

    if (concat == NULL)
        return (NULL);

    /* Copy s1 to concat */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copy n bytes of s2 to concat */
    for (i = 0; i < n; i++)
        concat[len1 + i] = s2[i];

    concat[len1 + n] = '\0'; /* Null-terminate the concatenated string */

    return (concat);
}
```

### How the Function Works

1. The function calculates the lengths of `s1` and `s2` (or treats `NULL` as an empty string) using `len1` and `len2` respectively.

2. It then allocates memory for the concatenated string based on the lengths of `s1` and `s2` and the value of `n`.

3. If `n` is greater than or equal to the length of `s2`, `n` is set to the length of `s2` to ensure that we don't read beyond the end of `s2`.

4. The function copies the characters from `s1` to the `concat` string.

5. It then copies the first `n` characters from `s2` to the `concat` string.

6. Finally, it null-terminates the `concat` string and returns a pointer to it.

### Example Usage

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    
    if (concat == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return (EXIT_FAILURE);
    }

    printf("%s\n", concat);
    free(concat); /* Don't forget to free the allocated memory when done */

    return (EXIT_SUCCESS);
}
```

### Conclusion

The `string_nconcat` function allows you to concatenate two strings with the flexibility to specify the number of bytes to concatenate from the second string. It handles memory allocation and null-termination, ensuring robust string concatenation.

---

# Task: 2. _calloc

### Overview

In this task, you need to create a function called `_calloc` that allocates memory for an array. The function should allocate memory for `nmemb` elements, each of `size` bytes, and return a pointer to the allocated memory. Additionally, the memory allocated by `_calloc` should be initialized to zero.

### Prototype

```c
void *_calloc(unsigned int nmemb, unsigned int size);
```

### Function Description

- The `_calloc` function takes two parameters:
  - `nmemb`: An unsigned integer representing the number of elements in the array.
  - `size`: An unsigned integer representing the size (in bytes) of each element.

- The function returns a pointer to the allocated memory for the array.

- If either `nmemb` or `size` is equal to 0, `_calloc` should return `NULL`.

- If `malloc` fails to allocate memory, `_calloc` should also return `NULL`.

- The memory allocated by `_calloc` should be initialized to zero.

### Implementation

Here's an implementation of the `_calloc` function:

```c
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;

    /* Check for zero values */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Allocate memory for the array */
    ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return (NULL);

    /* Initialize the allocated memory to zero */
    for (i = 0; i < nmemb * size; i++)
        *((char *)ptr + i) = 0;

    return (ptr);
}
```

### How the Function Works

1. The function first checks if either `nmemb` or `size` is equal to 0. If either of them is zero, it returns `NULL`.

2. It then allocates memory for the array by calling `malloc` with the total size calculated as `nmemb * size`.

3. If `malloc` fails to allocate memory, `_calloc` returns `NULL`.

4. If memory allocation is successful, the function initializes the allocated memory to zero using a loop that sets each byte to 0.

5. Finally, it returns a pointer to the allocated and initialized memory.

### Example Usage

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a); /* Don't forget to free the allocated memory when done */

    return (0);
}
```

### Conclusion

The `_calloc` function allows you to allocate and initialize memory for an array, providing a convenient way to work with dynamically sized arrays while handling memory allocation and zero initialization.

---

# Task: 3. array_range

### Overview

In this task, you need to create a function called `array_range` that generates an array of integers containing all values from `min` (inclusive) to `max` (inclusive). The generated array should be ordered from `min` to `max`.

### Prototype

```c
int *array_range(int min, int max);
```

### Function Description

- The `array_range` function takes two integer parameters:
  - `min`: The minimum value of the range.
  - `max`: The maximum value of the range.

- The function returns a pointer to the newly created array.

- If `min` is greater than `max`, the function should return `NULL`.

- If `malloc` fails to allocate memory for the array, the function should return `NULL`.

### Implementation

Here's an implementation of the `array_range` function:

```c
#include <stdlib.h>

int *array_range(int min, int max)
{
    int *arr;
    int i, size;

    /* Check if min is greater than max */
    if (min > max)
        return (NULL);

    /* Calculate the size of the array */
    size = max - min + 1;

    /* Allocate memory for the array */
    arr = malloc(sizeof(int) * size);

    if (arr == NULL)
        return (NULL);

    /* Initialize the array with values from min to max */
    for (i = 0; i < size; i++)
    {
        arr[i] = min;
        min++;
    }

    return (arr);
}
```

### How the Function Works

1. The function first checks if `min` is greater than `max`. If `min` is greater, it returns `NULL` because there are no valid values in the range.

2. It calculates the size of the array by subtracting `min` from `max` and adding 1 (to include both `min` and `max` in the range).

3. The function allocates memory for the array using `malloc`, with each element being an integer.

4. If memory allocation fails, it returns `NULL`.

5. The function initializes the array by looping from `min` to `max` and assigns each value to the corresponding index in the array.

6. Finally, it returns a pointer to the allocated and initialized array.

### Example Usage

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    int *arr;

    arr = array_range(0, 10);
    
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return (EXIT_FAILURE);
    }

    simple_print_buffer(arr, 11);
    free(arr); /* Don't forget to free the allocated memory when done */

    return (EXIT_SUCCESS);
}
```

### Conclusion

The `array_range` function allows you to generate an array of integers containing a specified range of values, providing a convenient way to work with ordered integer sequences.

---

For the "4. _realloc" task, you are required to write a function called `_realloc` that reallocates a memory block using `malloc` and `free`. Here's the detailed explanation and implementation:

---

# Task: 4. _realloc

### Overview

In this task, you need to create a function called `_realloc` that reallocates a memory block. The function takes in a pointer to memory previously allocated with `malloc`, the old size of the memory block (`old_size`), and the new size of the memory block (`new_size`). The contents of the old memory block should be copied to the newly allocated space, up to the minimum of the old and new sizes.

### Prototype

```c
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
```

### Function Description

- The `_realloc` function takes three parameters:
  - `ptr`: A pointer to the memory previously allocated with `malloc` (or `NULL`).
  - `old_size`: The size, in bytes, of the previously allocated space for `ptr`.
  - `new_size`: The new size, in bytes, of the memory block to be allocated.

- The function returns a pointer to the newly allocated memory block.

- If `new_size` is equal to `old_size`, the function does nothing and returns `ptr`.

- If `new_size` is zero and `ptr` is not `NULL`, the function is equivalent to freeing `ptr` using `free(ptr)` and returns `NULL`.

- If `ptr` is `NULL`, the function is equivalent to calling `malloc(new_size)`.

- If `new_size` is greater than `old_size`, the added memory should not be initialized.

- The contents of the old memory block are copied to the newly allocated space, up to the minimum of the old and new sizes.

- If `malloc` fails to allocate memory for the new block, the function returns `NULL`.

### Implementation

Here's an implementation of the `_realloc` function:

```c
#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    /* If new_size is zero, free ptr and return NULL */
    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    /* If ptr is NULL, equivalent to malloc(new_size) */
    if (ptr == NULL)
        return malloc(new_size);

    /* If new_size is equal to old_size, do nothing and return ptr */
    if (new_size == old_size)
        return ptr;

    /* Allocate memory for the new block */
    new_ptr = malloc(new_size);

    if (new_ptr == NULL)
        return NULL;

    /* Copy contents from old block to new block */
    if (new_size < old_size)
        memcpy(new_ptr, ptr, new_size);
    else
        memcpy(new_ptr, ptr, old_size);

    /* Free the old block */
    free(ptr);

    return new_ptr;
}
```

### How the Function Works

1. The function first checks if `new_size` is zero. If it is, it frees the memory pointed to by `ptr` using `free(ptr)` and returns `NULL`.

2. It checks if `ptr` is `NULL`. If `ptr` is `NULL`, it is equivalent to calling `malloc(new_size)` and the function returns the result of that call.

3. The function then checks if `new_size` is equal to `old_size`. If they are equal, it does nothing and returns `ptr`.

4. It allocates memory for the new block using `malloc(new_size)`.

5. If `malloc` fails to allocate memory, it returns `NULL`.

6. If `new_size` is less than `old_size`, it copies the contents of the old block to the new block up to `new_size`. If `new_size` is greater than or equal to `old_size`, it copies up to `old_size`.

7. Finally, it frees the memory pointed to by `ptr` using `free(ptr)` and returns the pointer to the newly allocated block.

### Example Usage

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char *p;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    // Now p points to a larger block of memory
    free(p);

    return (0);
}
```

### Conclusion

The `_realloc` function allows you to reallocate memory, making it more flexible to manage memory blocks dynamically. It ensures that the contents of the old memory block are preserved and copied to the newly allocated space when resizing.

---

# Task 5: We must accept finite disappointment, but never lose infinite hope


To create a program that multiplies two positive numbers as described in task "5. We must accept finite disappointment, but never lose infinite hope," you can follow these steps and use the provided C code template as a guide:

## Program Explanation

The program takes two positive numbers as command-line arguments (in base 10) and multiplies them. It then prints the result. Here's how the program works:

1. Check if the number of command-line arguments is incorrect (not exactly 3 arguments, including the program name). If so, print "Error" and exit with a status of 98.

2. Check if both num1 and num2 are composed only of digits. If any of them contains non-digit characters, print "Error" and exit with a status of 98.

3. Perform the multiplication of num1 and num2.

4. Print the result, followed by a newline.

## Implementation

Here's the implementation of the program in C:

```c
#include <stdio.h>
#include <stdlib.h>

/* Function to check if a string contains only digits */
int isNumeric(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0; // Not a digit
        }
        str++;
    }
    return 1; // All characters are digits
}

/* Function to multiply two strings representing numbers */
char *multiplyStrings(const char *num1, const char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int lenResult = len1 + len2;
    int i, j, k, carry;
    
    char *result = (char *)malloc(lenResult + 1);
    if (result == NULL) {
        perror("Error");
        exit(98);
    }
    
    for (i = 0; i < lenResult; i++) {
        result[i] = '0';
    }
    result[lenResult] = '\0';
    
    for (i = len1 - 1; i >= 0; i--) {
        carry = 0;
        for (j = len2 - 1, k = i + len2; j >= 0; j--, k--) {
            int temp = (num1[i] - '0') * (num2[j] - '0') + (result[k] - '0') + carry;
            carry = temp / 10;
            result[k] = (temp % 10) + '0';
        }
        result[i] += carry;
    }
    
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }
    
    char *num1 = argv[1];
    char *num2 = argv[2];
    
    if (!isNumeric(num1) || !isNumeric(num2)) {
        printf("Error\n");
        return 98;
    }
    
    char *result = multiplyStrings(num1, num2);
    printf("%s\n", result);
    
    free(result);
    
    return 0;
}
```

This code defines a `multiplyStrings` function to perform the multiplication of two numbers represented as strings. It also includes error handling to check for invalid inputs and memory allocation failures.

Compile the program using the provided `gcc` command, and you can use it to multiply two positive numbers.
