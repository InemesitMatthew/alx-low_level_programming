

## Task 0: Create a Static Library

### Objective
The objective of this task is to create a static library named `libmy.a` that contains various C functions.

### Requirements
1. Create a static library named `libmy.a`.
2. The library should contain the following functions:
   - int _putchar(char c);
   - int _islower(int c);
   - int _isalpha(int c);
   - int _abs(int n);
   - int _isupper(int c);
   - int _isdigit(int c);
   - int _strlen(char *s);
   - void _puts(char *s);
   - char *_strcpy(char *dest, char *src);
   - int _atoi(char *s);
   - char *_strcat(char *dest, char *src);
   - char *_strncat(char *dest, char *src, int n);
   - char *_strncpy(char *dest, char *src, int n);
   - int _strcmp(char *s1, char *s2);
   - char *_memset(char *s, char b, unsigned int n);
   - char *_memcpy(char *dest, char *src, unsigned int n);
   - char *_strchr(char *s, char c);
   - unsigned int _strspn(char *s, char *accept);
   - char *_strpbrk(char *s, char *accept);
   - char *_strstr(char *haystack, char *needle).
3. The library should have a header file named `main.h` that contains the prototypes of all the above functions.
4. All code files should follow the Betty coding style.
5. No standard library functions (e.g., printf, puts) should be used except for `_putchar`.
6. You can create empty functions with the correct prototype if you haven't implemented all of them.

### Compilation and Usage
To compile the library and use it in your programs, follow these steps:

1. Compile all the required C files into object files using the following command:
   ```
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
   ```
   This command will generate `.o` files for each `.c` file.

2. Create the static library `libmy.a` by running the following command:
   ```
   ar -rc libmy.a *.o
   ```

3. You can then link this library with your programs using the `-L` and `-l` flags as shown in the example below:
   ```
   gcc -std=gnu89 main.c -L. -lmy -o my_program
   ```
   Replace `main.c` with your program's source file and `my_program` with the desired output executable name.

4. Execute your program as usual:
   ```
   ./my_program
   ```

### Example
An example of using the library in a `main.c` file:

```c
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
```

### Files
- `main.h`: Header file containing function prototypes.
- `.c` files: Source files for each function.
- `.o` files: Object files generated after compilation.
- `libmy.a`: The static library.

## Task 1: Without Libraries, What Have We?

### Objective
The objective of this task is to create a Bash script named `create_static_lib.sh` that creates a static library named `liball.a` from all the `.c` files in the current directory.

### Requirements
1. Create a Bash script named `create_static_lib.sh`.
2. The script should compile all `.c` files in the current directory into `.o` object files.
3. It should then create a static library named `liball.a` using the generated object files.

### Usage
To use the script, follow these steps:

1. Save the script as `create_static_lib.sh` in the same directory as your `.c` files.

2. Make the script executable using the following command:
   ```
   chmod +x create_static_lib.sh
   ```

3. Run the script using the following command:
   ```
   ./create_static_lib.sh
   ```

This will compile all `.c` files and create the `liball.a` static library.

### Example
An example of running the script:

```bash
$ ./create_static_lib.sh
```

### Files
- `create_static_lib.sh`: The Bash script for creating the static library.
- `.c` files: Source files to be compiled.
- `.o` files: Object files generated during compilation.
- `liball.a`: The static library containing all compiled functions.
