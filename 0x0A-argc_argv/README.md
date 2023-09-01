

## Task 0: It ain't what they call you, it's what you answer to

### Description:
In this task, you are required to write a C program that prints its name, followed by a new line. The program should also be able to print the new name if you rename it without needing to recompile it.

### Code Example:
```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argc; // Suppress unused parameter warning
    printf("%s\n", argv[0]);
    return 0;
}
```

### Compilation:
Compile the program using the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
```

### Usage:
- Run the program to print its name:
```bash
./mynameis
```
- Rename the program:
```bash
mv mynameis mynewnameis
```
- Run it again to print the new name without recompiling:
```bash
./mynewnameis
```

---

## Task 1: Silence is argument carried out by other means

### Description:
In this task, you need to create a C program that prints the number of arguments passed into it. The program should print a number followed by a new line.

### Code Example:
```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argv; // Suppress unused parameter warning
    printf("%d\n", argc - 1);
    return 0;
}
```

### Compilation:
Compile the program using the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
```

### Usage:
- Run the program with various numbers of arguments:
```bash
./nargs
./nargs hello
./nargs "hello, world"
./nargs hello, world
```

---

## Task 2: The best argument against democracy is a five-minute conversation with the average voter

### Description:
In this task, you are required to create a C program that prints all the arguments it receives. Each argument should be printed on a new line.

### Code Example:
```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}
```

### Compilation:
Compile the program using the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
```

### Usage:
- Run the program with various arguments:
```bash
./args
./args "You can do anything, but not everything."
```

---

## Task 3: Neither irony nor sarcasm is argument

### Description:
In this task, you need to create a C program that multiplies two numbers and prints the result. The program should also handle errors and print "Error" in case of invalid input.

### Code Example:
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    result = num1 * num2;

    printf("%d\n", result);
    return 0;
}
```

### Compilation:
Compile the program using the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
```

### Usage:
- Run the program with two numbers to multiply:
```bash
./mul 2 3
./mul 2 -3
./mul 2 0
./mul 245 3245342
```

---

## Task 4: To infinity and beyond

### Description:
In this task, you are required to create a C program that adds positive numbers and prints the result. The program should handle errors and print "Error" in case of invalid input.

### Code Example:
```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_positive_number(char *str)
{
    // Function to check if a string represents a positive number
    // (Implementation not shown here)
}

int main(int argc, char *argv[])
{
    int sum = 0;
    int i;

    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        if (is_positive_number(argv[i]))
        {
            int num = atoi(argv[i]);
            sum += num;
        }
        else
        {
            printf("Error\n");
            return 1;
       

 }
    }

    printf("%d\n", sum);
    return 0;
}
```

### Compilation:
Compile the program using the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
```

### Usage:
- Run the program with positive numbers to add:
```bash
./add 1 1
./add 1 10 100 1000
./add 1 2 3 e 4 5
```

---

## Task 5: Minimal Number of Coins for Change

### Description:
In this advanced task, you need to create a C program that calculates the minimum number of coins required to make change for an amount of money given in cents. The program should handle errors and print "Error" in case of invalid input.

### Code Example:
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int cents, coins = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    while (cents > 0)
    {
        // Calculate minimum number of coins (Implementation not shown here)
    }

    printf("%d\n", coins);
    return 0;
}
```

### Compilation:
Compile the program using the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
```

### Usage:
- Run the program with an amount in cents to calculate the minimum number of coins required:
```bash
./change
./change 10
./change 100
./change 101
./change 13
```

---
