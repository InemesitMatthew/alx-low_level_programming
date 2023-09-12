# Task 0: Object-like Macro

In this task, we are required to create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`. The goal is to demonstrate how to use macros in C programming.

## Project Structure

The project consists of the following files:

- `0-object_like_macro.h`: Header file where we define the `SIZE` macro.
- `0-main.c`: A sample C program that uses the `SIZE` macro.

## File Contents

### `0-object_like_macro.h`

```c
#ifndef OBJECT_LIKE_MACRO_H
#define OBJECT_LIKE_MACRO_H

#define SIZE 1024

#endif /* OBJECT_LIKE_MACRO_H */
```

This header file defines the `SIZE` macro as an abbreviation for `1024`. We use include guards to ensure it's included only once.

### `0-main.c`

```c
#include "0-object_like_macro.h"
#include <stdio.h>

int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
```

This is a sample C program that includes our header file and demonstrates the use of the `SIZE` macro. It calculates the sum of `98` and `SIZE` and prints the result.

## Compilation and Execution

To compile and run the program, you can use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
./a
```

The output of the program should be:

```
1122
```

## Requirements

- This project is designed to be compiled on Ubuntu 20.04 LTS using `gcc` with specific options.
- The code follows the Betty style guidelines.
- Only allowed C standard library functions (`malloc`, `free`, and `exit`) are used.
- The header file is include guarded.

By following these requirements, we create a simple C program that demonstrates the use of macros, helping us understand how they work and how to use them effectively.

---

# Task 1: Pi Macro

In this task, we are required to create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`. The objective is to demonstrate how to use macros in C programming to define constants.

## Project Structure

The project consists of the following files:

- `1-pi.h`: Header file where we define the `PI` macro.
- `1-main.c`: A sample C program that uses the `PI` macro to calculate the area of a circle.

## File Contents

### `1-pi.h`

```c
#ifndef PI_MACRO_H
#define PI_MACRO_H

#define PI 3.14159265359

#endif /* PI_MACRO_H */
```

This header file defines the `PI` macro as an abbreviation for the value `3.14159265359`. We use include guards to ensure it's included only once.

### `1-main.c`

```c
#include "1-pi.h"
#include <stdio.h>

int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
```

This is a sample C program that includes our header file `1-pi.h` and demonstrates the use of the `PI` macro. It calculates the area of a circle with a given radius `r` using the formula `area = π * r^2` and prints the result.

## Compilation and Execution

To compile and run the program, you can use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
./b
```

The output of the program should be:

```
30171.855
```

## Requirements

- This project is designed to be compiled on Ubuntu 20.04 LTS using `gcc` with specific options.
- The code follows the Betty style guidelines.
- Only allowed C standard library functions (`malloc`, `free`, and `exit`) are used.
- The header file is include guarded.

By following these requirements, we create a C program that demonstrates the use of a macro (`PI`) to define a mathematical constant, making the code more readable and maintainable.

---

# Task 2: File Name

In this task, we will write a C program that prints the name of the file it was compiled from, followed by a new line. This task allows us to explore a preprocessor macro that provides information about the source file.

## Project Structure

The project consists of the following file:

- `2-main.c`: The main C program that will print the name of the source file.

## File Contents

### `2-main.c`

```c
#include <stdio.h>

int main(void)
{
    printf(__FILE__ "\n");
    return (0);
}
```

This C program includes the standard library header `<stdio.h>` and uses the `__FILE__` predefined macro. It prints the name of the source file using `printf`. The `\n` at the end adds a newline character for proper formatting.

## Compilation and Execution

To compile and run the program, you can use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
./c
```

The output of the program should be the name of the source file, such as:

```
2-main.c
```

If you copy the source file with a different name and compile and run it, you will see the name of the copied file.

## Requirements

- This project is designed to be compiled on Ubuntu 20.04 LTS using `gcc` with specific options.
- The code follows the Betty style guidelines.
- Standard library functions, including `printf`, are allowed.

By following these requirements, we create a C program that dynamically prints the name of the source file it was compiled from, providing a useful debugging tool.

---

# Task 3: Function-like Macro (Absolute Value)

In this task, we will create a function-like macro named `ABS(x)` that calculates the absolute value of a number `x`. This macro will demonstrate how to define and use macros to perform operations in C.

## Project Structure

The project consists of the following files:

- `3-function_like_macro.h`: Header file where we define the `ABS` macro.
- `3-main.c`: A sample C program that uses the `ABS` macro to calculate absolute values.

## File Contents

### `3-function_like_macro.h`

```c
#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x) < 0 ? -(x) : (x))

#endif /* FUNCTION_LIKE_MACRO_H */
```

This header file defines the `ABS` macro as a function-like macro that takes a single argument `x` and calculates its absolute value using a ternary conditional operator. It ensures that the result is always non-negative.

### `3-main.c`

```c
#include <stdio.h>
#include "3-function_like_macro.h"

int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
```

This C program includes the standard library header `<stdio.h>` and our header file `3-function_like_macro.h`. It uses the `ABS` macro to calculate the absolute values of `-98` and `98` and then multiplies the results by `10`. Finally, it prints the values of `i` and `j`.

## Compilation and Execution

To compile and run the program, you can use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
./d
```

The output of the program should be:

```
980, 980
```

## Requirements

- This project is designed to be compiled on Ubuntu 20.04 LTS using `gcc` with specific options.
- The code follows the Betty style guidelines.
- Standard library functions, including `printf`, are allowed.

By following these requirements, we create a C program with a function-like macro that calculates absolute values, showcasing the power and versatility of macros in C.

---

# Task 4: Function-like Macro (Sum)

In this task, we will create a function-like macro named `SUM(x, y)` that calculates the sum of two numbers `x` and `y`. This macro demonstrates how to define and use macros to perform arithmetic operations in C.

## Project Structure

The project consists of the following files:

- `4-sum.h`: Header file where we define the `SUM` macro.
- `4-main.c`: A sample C program that uses the `SUM` macro to calculate the sum of two numbers.

## File Contents

### `4-sum.h`

```c
#ifndef SUM_MACRO_H
#define SUM_MACRO_H

#define SUM(x, y) ((x) + (y))

#endif /* SUM_MACRO_H */
```

This header file defines the `SUM` macro as a function-like macro that takes two arguments, `x` and `y`, and calculates their sum using the `+` operator. It ensures that the result is the sum of the provided values.

### `4-main.c`

```c
#include <stdio.h>
#include "4-sum.h"

int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
```

This C program includes the standard library header `<stdio.h>` and our header file `4-sum.h`. It uses the `SUM` macro to calculate the sum of `98` and `1024` and stores the result in the variable `s`. Finally, it prints the value of `s`.

## Compilation and Execution

To compile and run the program, you can use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
./e
```

The output of the program should be:

```
1122
```

## Requirements

- This project is designed to be compiled on Ubuntu 20.04 LTS using `gcc` with specific options.
- The code follows the Betty style guidelines.
- Standard library functions, including `printf`, are allowed.

By following these requirements, we create a C program with a function-like macro that calculates the sum of two numbers, showcasing the utility of macros in C for performing operations.
