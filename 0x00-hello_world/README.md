

## Task 0: Preprocessor

**Description:**
In this task, you need to create a script that runs a given C file through the preprocessor and saves the result into another file. The input C file name will be stored in the variable `$CFILE`, and the preprocessed output should be saved in a file named `c`.

**Steps:**
1. Read the C file name from the `$CFILE` variable.
2. Use the `gcc` compiler with the `-E` option to run the preprocessor on the C file.
3. Redirect the preprocessed output to a file named `c`.

**Example Script:**
```bash
#!/bin/bash
gcc -E "$CFILE" -o c
```

This script compiles the given C file using the preprocessor and saves the preprocessed output in the file named `c`.

**Usage:**
1. Make sure the script has execution permissions (`chmod +x script_name.sh`).
2. Set the value of `$CFILE` to the desired C file name.
3. Run the script: `./script_name.sh`.

**Repo Details:**
- GitHub Repository: [alx-low_level_programming](https://github.com/your-username/alx-low_level_programming)
- Directory: 0x00-hello_world
- File: 0-preprocessor

---

## Task 1: Compiler

**Description:**
This script compiles a given C file without linking. The input C file name is stored in the `$CFILE` variable. The compiled output file will have the same name as the C file but with the `.o` extension.

**Example Script:**
```bash
#!/bin/bash
gcc -c "$CFILE" -o "${CFILE%.c}.o"
```

**Usage:**
1. Make sure the script has execution permissions (`chmod +x script_name.sh`).
2. Set the value of `$CFILE` to the desired C file name.
3. Run the script: `./script_name.sh`.

**Repo Details:**
- GitHub Repository: [alx-low_level_programming](https://github.com/your-username/alx-low_level_programming)
- Directory: 0x00-hello_world
- File: 1-compiler

---

## Task 2: Assembler

**Description:**
This script generates the assembly code of a given C code and saves it in an output file. The input C file name is stored in the `$CFILE` variable. The generated output file will have the same name as the C file but with the `.s` extension.

**Example Script:**
```bash
#!/bin/bash
gcc -S "$CFILE" -o "${CFILE%.c}.s"
```

**Usage:**
1. Make sure the script has execution permissions (`chmod +x script_name.sh`).
2. Set the value of `$CFILE` to the desired C file name.
3. Run the script: `./script_name.sh`.

**Repo Details:**
- GitHub Repository: [alx-low_level_programming](https://github.com/your-username/alx-low_level_programming)
- Directory: 0x00-hello_world
- File: 2-assembler

---

## Task 3: Name

**Description:**
This script compiles a given C file and creates an executable named `cisfun`. The input C file name is stored in the `$CFILE` variable.

**Example Script:**
```bash
#!/bin/bash
gcc "$CFILE" -o cisfun
```

**Usage:**
1. Make sure the script has execution permissions (`chmod +x script_name.sh`).
2. Set the value of `$CFILE` to the desired C file name.
3. Run the script: `./script_name.sh`.

**Repo Details:**
- GitHub Repository: [alx-low_level_programming](https://github.com/your-username/alx-low_level_programming)
- Directory: 0x00-hello_world
- File: 3-name

---

## Task 4: Hello, puts

**Description:**
Write a C program that prints the exact phrase "Programming is like building a multilingual puzzle, followed by a new line. Use the `puts` function for printing.

**Requirements:**
- Use the `puts` function to print the specified phrase.
- Your program should end with the value `0` to indicate successful execution.

**Example Code:**
```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("Programming is like building a multilingual puzzle,");
	return (0);
}
```

**Repo Details:**
- GitHub Repository: [alx-low_level_programming](https://github.com/your-username/alx-low_level_programming)
- Directory: 0x00-hello_world
- File: 4-puts.c

This program uses the `puts` function to print the given phrase and then returns `0` to indicate successful execution.

---

## Task 5: Hello, printf

**Description:**
Write a C program that prints the phrase "with proper grammar, but the outcome is a piece of art," followed by a new line. Use the `printf` function for printing.

**Requirements:**
- Use the `printf` function to print the specified phrase.
- Your program should return `0` to indicate successful execution.
- Your program should compile without any warnings when using the `-Wall` `gcc` option.

**Example Code:**
```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        printf("with proper grammar, but the outcome is a piece of art,\n");       
        return (0);
}
```

**Repo Details:**
- GitHub Repository: [alx-low_level_programming](https://github.com/your-username/alx-low_level_programming)
- Directory: 0x00-hello_world
- File: 5-printf.c

This program uses the `printf` function to print the specified phrase and then returns `0` to indicate successful execution.

---

## Task 6: Size is not grandeur, and territory does not make a nation

**Description:**
Write a C program that prints the sizes of various data types on the computer it is compiled and run on. The program should produce the same output as provided in the example.

**Requirements:**
- Your program should return `0` to indicate successful execution.
- Warnings are allowed.
- You might need to install the package `libc6-dev-i386` on your Linux system to test the `-m32` `gcc` option.

**Example Code:**
```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

```

**Repo Details:**
- GitHub Repository: [alx-low_level_programming](https://github.com/your-username/alx-low_level_programming)
- Directory: 0x00-hello_world
- File: 6-size.c

This program uses the `sizeof` operator to print the sizes of various data types and returns `0` to indicate successful execution.

---

## Task 7: Intel (Advanced)

**Description:**
Write a script that generates the assembly code (Intel syntax) of a given C code and saves it in an output file. The input C file name is stored in the `$CFILE` variable. The generated output file will have the same name as the C file but with the `.s` extension.

**Example Script:**
```bash
#!/bin/bash
gcc -S -masm=intel "$CFILE"
```

**Usage:**
1. Make sure the script has execution permissions (`chmod +x script_name.sh`).
2. Set the value of `$CFILE` to the desired C file name.
3. Run the script: `./script_name.sh`.

**Repo Details:**
- GitHub Repository: [alx-low_level_programming](https://github.com/your-username/alx-low_level_programming)
- Directory: 0x00-hello_world
- File: 100-intel

Please adapt the script details according to your specific environment if needed.

---

## Task 8: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (Advanced)

**Description:**
Write a C program that prints the phrase `"and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error. You are not allowed to use any functions listed in the `printf` or `puts` sections of the `man` pages for `printf` or `puts`. Your program should return `1` to indicate an error.

**Requirements:**
- Your program should return `1` to indicate an error.
- Your program should compile without any warnings when using the `-Wall` `gcc` option.

**Example Code:**
```c
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
```

**Repo Details:**
- GitHub Repository: [alx-low_level_programming](https://github.com/your-username/alx-low_level_programming)
- Directory: 0x00-hello_world
- File: 101-quote.c

This program uses the `write` function to print the specified phrase to the standard error and returns `1` to indicate an error.


