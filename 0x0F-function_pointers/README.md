# Task 0: What's my name

**Introduction:**
In this task, you will implement a C program that demonstrates the use of function pointers to print a name. You will define a function that takes a name and a function pointer as arguments and use it to print names in different formats.

**Requirements:**
- Create a C program that defines a function `print_name` with the following prototype:
  ```c
  void print_name(char *name, void (*f)(char *));
  ```
- Implement two additional functions:
  - `print_name_as_is`: Prints the name as is.
  - `print_name_uppercase`: Prints the name in uppercase.
- Demonstrate the use of function pointers by calling `print_name` with different names and functions.
- Adhere to the provided compilation requirements and flags.

**Implementation:**

**Step 1: Define the `print_name` Function**
Define a function named `print_name` that takes two parameters: `name` (a string) and `f` (a function pointer). This function should call the function pointed to by `f` and pass the `name` as an argument.

**Step 2: Implement Additional Functions**
Implement two functions, `print_name_as_is` and `print_name_uppercase`, that take a `char *` parameter and print the name as is or in uppercase, respectively.

**Step 3: Demonstrate Function Pointers**
In your `main` function, create instances of names and use `print_name` to print them in different formats using function pointers.

**Compilation & Execution:**
Compile and run the code using the provided compilation commands and observe the output to ensure that function pointers are used correctly.

**Usage:**
```c
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    return (0);
}
```

**Output:**
```
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
```

This code demonstrates the use of function pointers to print names in various formats.

---

# Task 1: Execute a Function on Array Elements

**Introduction:**
In this task, you'll create a C program that takes an array of integers, its size, and a function pointer as input. The program will execute the given function on each element of the array, allowing you to perform custom actions on the elements.

**Function Prototype:**
```c
void array_iterator(int *array, size_t size, void (*action)(int));
```

**How It Works:**
- `array_iterator` takes three parameters: 
  - `array`: An array of integers.
  - `size`: The size of the array.
  - `action`: A function pointer to the function you want to apply to each element.
- It iterates through the array and applies the specified function to each element.

**Code Implementation:**
```c
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: A pointer to the function to execute on each element.
 *
 * Description: This function takes an array of integers, its size, and a
 * function pointer. It iterates through the array and applies the given
 * function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
        size_t i;

        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
```

**Usage:**
- You can use the provided `array_iterator` function to apply custom actions to an array of integers.
- Define your action functions and pass them as function pointers to `array_iterator`.

**Example Usage:**
```c
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    printf("Original numbers:\n");
    array_iterator(array, 5, &print_elem);

    printf("\nNumbers in hexadecimal:\n");
    array_iterator(array, 5, &print_elem_hex);

    return (0);
}
```

**Output:**
```
Original numbers:
0
98
402
1024
4096

Numbers in hexadecimal:
0x0
0x62
0x192
0x400
0x1000
```

This code demonstrates the use of function pointers to perform actions on array elements.

---

# Task 2: Search for an Integer

**Introduction:**
In this task, you'll create a C function that searches for an integer within an array. The function will take an array of integers, its size, and a function pointer for comparison. It will return the index of the first element for which the comparison function returns a non-zero value.

**Function Prototype:**
```c
int int_index(int *array, int size, int (*cmp)(int));
```
- `array`: The array of integers to search.
- `size`: The number of elements in the array.
- `cmp`: A pointer to the comparison function.

**How It Works:**
- The `int_index` function searches for an integer in the array.
- It iterates through the array and applies the comparison function to each element.
- It returns the index of the first element for which the comparison function returns a non-zero value.
- If no element matches, it returns -1.
- If the size is less than or equal to 0, it returns -1.

**Code Implementation:**
```c
#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int));
```

**Example Usage:**
```c
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}
```

**Expected Output:**
```
2
1
2
```

This code demonstrates the use of the `int_index` function to search for integers in an array using different comparison functions.

---
