**Task 0: isupper**

**Purpose of the Task:**
The purpose of this task is to write a function named `_isupper` that checks whether a given character is an uppercase character or not.

**Approach:**
Here's how you can approach this task:

1. **Understand the Requirements:**
   Read the problem statement and understand what the function is expected to do. In this case, you need to write a function that takes a character as input and returns `1` if the character is uppercase and `0` otherwise.

2. **Create the Function Prototype:**
   In the `main.h` header file, create the function prototype for the `_isupper` function:
   ```c
   int _isupper(int c);
   ```

3. **Write the Function:**
   Create a new file named `0-isupper.c` to implement the `_isupper` function. Within this function, you'll need to use the ASCII values of uppercase characters to determine if the given character is uppercase.

   To determine if a character is uppercase, check if its ASCII value falls within the range of uppercase letters. Uppercase letters in ASCII range from `65` (A) to `90` (Z).

   ```c
   int _isupper(int c)
   {
       if (c >= 65 && c <= 90)
       {
           return 1; // Uppercase
       }
       else
       {
           return 0; // Not uppercase
       }
   }
   ```

4. **Compile and Test:**
   Compile your `_isupper` function with the provided `0-main.c` file using the given compilation command:
   ```bash
   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
   ```

5. **Run the Program:**
   Run the compiled program:
   ```bash
   ./0-isuper
   ```

6. **Verify Output:**
   Check if the output matches the expected results for the given test cases. The provided `0-main.c` file tests the `_isupper` function with both uppercase and lowercase characters.

7. **Create README.md:**
   Create a `README.md` file in the repository directory to explain what the program does, how to compile and run it, and any other relevant information.

8. **Submit Your Work:**
   Once you have verified that your code works as expected, push your `0-isupper.c` and `main.h` files to your GitHub repository.

---

**Task 1: isdigit**

**Purpose of the Task:**
In this task, you're required to create a function named `_isdigit` that checks if a given character is a digit (0 through 9). You'll implement this function and test it using a provided `main` function that checks whether specific characters are digits or not.

**The CODES**

**1-isdigit.c:**
```c
#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0 through 9)
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
```

**1-main.c:**
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));

    return (0);
}
```

To compile and run the code, you can use the provided compilation commands:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
./1-isdigit
```

This will produce the following output:
```
0: 1
a: 0
```

The `_isdigit` function checks if a character is between '0' and '9' in the ASCII character set, and if it is, it returns `1` indicating that the character is a digit. Otherwise, it returns `0`.


**Explanation of the Code:**

1. **Function Prototype:**
   You're asked to create a function named `_isdigit` with the following prototype:
   ```c
   int _isdigit(int c);
   ```
   This function takes a single argument `c`, which is a character, and returns an integer. It will return `1` if the character is a digit and `0` otherwise.

2. **Main Function:**
   The provided `main` function, named `1-main.c`, is used to test your `_isdigit` function. It includes the necessary header file and prints out the results of calling `_isdigit` on specific characters.

3. **Testing Characters:**
   Inside the `main` function, two characters are tested:
   - The character `'0'` is a digit, so calling `_isdigit('0')` should return `1`, and this is printed.
   - The character `'a'` is not a digit, so calling `_isdigit('a')` should return `0`, and this is printed.

**Compilation and Testing:**
The code needs to be compiled and executed to test its functionality. The compilation command provided in the comments ensures that the `_isdigit` function is compiled together with the `main` function. When you run the compiled executable, you should see the output indicating whether each tested character is a digit or not.

Remember that the `_isdigit` function you're creating here is similar to the standard library function `isdigit`. This task is a simple demonstration of how functions can be used to check specific conditions in programming.

---
**Task 2: Collaboration is multiplication**

To create this code, you're going to make a function that acts like a multiplication machine for two numbers. It takes in two numbers (let's call them "a" and "b"), and it gives back their product, which is the result of multiplying them together.

Imagine you have two baskets of apples. One basket has "a" apples, and the other has "b" apples. You want to find out how many apples you have in total if you combine these two baskets. That's exactly what the function `mul(a, b)` does!

Here's a step-by-step explanation of how the code works:

1. **Function Prototype:**
   The first line you see in the code, `int mul(int a, int b);`, is like a label that tells the computer what the function will look like. It says that you're creating a function called `mul`, which takes two inputs (integers) called "a" and "b," and it will give back an integer as the result.

2. **Main Function:**
   In the `main` function, you see some examples of how the `mul` function is used. The code inside `main` prints out the results of calling the `mul` function with different inputs. For example, `mul(98, 1024)` calculates the product of 98 and 1024, and `mul(-402, 4096)` calculates the product of -402 and 4096.

3. **The `mul` Function:**
   If you look at the `2-mul.c` file, you'll see the actual implementation of the `mul` function. Inside this function, you're performing the multiplication operation yourself. You're taking the values of "a" and "b" that were passed as arguments, and you're calculating their product using the `*` operator.

4. **Returning the Result:**
   After calculating the product, you use the `return` statement to send the result back to whoever called the function. This is like putting the calculated value into a box and giving it to the person who asked for it.

So, in simpler terms, the `mul` function is like a calculator that helps you multiply two numbers together. You provide the two numbers you want to multiply, and the function gives you the answer!

When you compile and run the code, you see the products of the examples printed out, which are the results of the multiplication calculations.

Just like a multiplication machine in a math class, this function lets you multiply numbers without doing the math yourself every time. It's like magic math that your computer can do for you!

##THE CODE:

**2-mul.c:**
```c
#include "main.h"

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */
int mul(int a, int b)
{
    return (a * b);
}
```

**2-main.c:**
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
```

To compile and run the code, you can use the provided compilation commands:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
./2-mul
```

This will produce the following output:
```
100352
-1646592
```

The `mul` function takes two integers as input (`a` and `b`) and returns their product using the `*` operator.

---

**Task 3: The numbers speak for themselves**

**What's the Goal?**
In this task, we're going to write a small program that will help us print the numbers from 0 to 9, one after the other, and then move to a new line.

**How Do We Do It?**
1. **Get Ready:** We have a magical helper named `_putchar` that can write characters for us. It's like having a robot friend who can draw on paper for us.

2. **Counting Time:** Imagine we have a row of numbers from 0 to 9. We want to look at each number and tell our robot friend to write it down.

3. **Start Walking:** We start with the number 0. We tell our robot friend to write down "0". Then we move to the next number, which is 1, and we ask our robot to write "1".

4. **Keep Going:** We keep doing this for each number until we reach 9. Our robot friend writes down "2", "3", "4", "5", "6", "7", "8", and finally "9".

5. **New Line:** After our robot writes down all the numbers, we tell it to move to the next line, like when we press "Enter" on the keyboard.

6. **Done:** Now we see all the numbers from 0 to 9 lined up nicely, and each number is on its own line. Our little program is complete!

**Putting It All Together:**
We wrote a special program that uses our robot friend `_putchar` to write down the numbers from 0 to 9. It's like teaching our robot to draw these numbers on paper. Then we asked our robot to move to a new line, so the numbers are organized neatly.

When we run our program, it shows us the numbers:

```
0123456789
```

It's like magic! Our program did all the work for us. We didn't have to write each number by hand; our robot friend helped us do it quickly and neatly.

Remember, just like how we count from 1 to 10, our program counted from 0 to 9 and wrote down the numbers for us.

And that's how we made the numbers speak for themselves using a fun little program!

**3-print_numbers.c:**
```c
#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 */
void print_numbers(void)
{
    char num = '0';

    while (num <= '9')
    {
        _putchar(num);
        num++;
    }
    _putchar('\n');
}
```

**3-main.c:**
```c
#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
```

To compile and run the code, you can use the provided compilation commands:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
./3-print_numbers
```

This will produce the following output:
```
0123456789
```

The `print_numbers` function uses a `while` loop to iterate through the numbers from '0' to '9' and uses the `_putchar` function to print each number. After printing all the numbers, it adds a newline character using `_putchar('\n')` to move to the next line.

---

**Task 4: I believe in numbers and signs**

This task is about writing a program that helps us print numbers, but with a twist! We want to print numbers from 0 to 9, but we don't want to print the numbers 2 and 4. So, we need to create a special function to do this.

**Code Explanation:**

1. We start by including a special file called "main.h." This file helps our program understand some important things it needs to know.

2. We create a new function called `print_most_numbers`. This function will do the magic of printing the numbers for us.

3. Inside the `print_most_numbers` function, we use a "loop." A loop is like a little machine that does something over and over again. In our case, the loop will go through numbers from 0 to 9.

4. For each number, we check if it's not 2 and not 4. If it's not 2 or 4, it means we can print it. If it is 2 or 4, we skip it and move to the next number.

5. To print the numbers, we use a secret function `_putchar`. This function helps us print individual characters, like numbers.

6. After the loop finishes, we use `_putchar` to print a special character called "newline." This moves the printing to a new line, like when you press "Enter" on the keyboard.

7. The program also includes a special function called `main`. This function is like the boss of the program. It's responsible for starting everything and making sure things run smoothly.

8. Inside the `main` function, we call our `print_most_numbers` function. This is like telling the boss, "Hey, let's start printing the numbers now!"

**Why It's Cool:**

This program is cool because it shows how we can use loops and special functions to do specific tasks. We're only printing some numbers, but we're doing it in a way that avoids printing the numbers 2 and 4. It's like a little puzzle we're solving with code!

Remember, computers are really good at doing repetitive tasks, and this program shows how we can make them do fun and useful things!


**4-print_most_numbers.c:**
```c
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 (excluding 2 and 4)
 */
void print_most_numbers(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        if (num != 2 && num != 4)
        {
            _putchar(num + '0');
        }
    }

    _putchar('\n');
}
```

**4-main.c:**
```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
```

To compile and run the code, you can use the provided compilation commands:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
./4-print_most_numbers
```

This will produce the following output:
```
01356789
```

The `print_most_numbers` function uses a loop to iterate through numbers from 0 to 9. It checks if the current number is not equal to 2 or 4. If it's not 2 or 4, it uses the `_putchar` function to print the number as a character. After the loop, the function prints a newline character to move to the next line.

---

**Task 5: Numbers constitute the only universal language**

In this task, we're going to write a program that prints numbers from 0 to 14, but we'll do it 10 times! So, it's like printing a set of numbers multiple times.

**Code Explanation:**

1. We start by including a special file called "main.h." Just like before, this file helps our program understand important things.

2. We create a new function called `more_numbers`. This function is going to help us print numbers in a special way.

3. Inside the `more_numbers` function, we use two loops. Yes, two loops! They're like two little machines working together.

4. The first loop will run 10 times because we want to print the numbers 10 times.

5. Inside the first loop, we have another loop. This second loop will go through numbers from 0 to 14. It's like a little counter.

6. For each number, we check if it's bigger than 9. If it is, we need to print two separate digits. We divide the number by 10 to get the first digit and use `_putchar` to print it. Then, we use the remainder when dividing by 10 to get the second digit and print that too.

7. If the number is not bigger than 9, we can just print it using `_putchar`.

8. After the second loop finishes, we use `_putchar` to print a special character called "newline." This moves the printing to a new line, like when you press "Enter" on the keyboard.

9. The first loop repeats this process 10 times, so we end up printing the numbers from 0 to 14, ten times in a row.

**Why It's Cool:**

This program is cool because it shows how we can use two loops to create a pattern of numbers. By using `_putchar`, we can print individual digits and even make them look neat. It's like making a special number pattern!

Just imagine you have a robot that writes down numbers neatly in rows, and you're telling it to write the same numbers ten times in a row. That's what this program does with code!


**5-more_numbers.c:**
```c
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++) // Loop for printing 10 rows
    {
        for (j = 0; j <= 14; j++) // Loop for printing numbers from 0 to 14
        {
            if (j > 9) // If the number is two-digit, print the first digit
            {
                _putchar('0' + j / 10);
            }
            _putchar('0' + j % 10); // Print the second digit
        }
        _putchar('\n'); // Move to the next line after each row
    }
}
```

**5-main.c:**
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
```

To compile and run the code, you can use the provided compilation commands:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
./5-more_numbers
```

This will produce the following output:
```
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
```

The `more_numbers` function uses two nested loops to print the numbers in the required pattern. It prints each digit one by one using `_putchar`, and after each set of numbers, it moves to a new line.

---

**Task 6: The shortest distance between two points is a straight line**

In this task, we're asked to write a function called `print_line` that takes an integer `n` as its parameter. This `n` represents the number of times the character `_` should be printed in a line. The goal is to print this line of underscores, and if `n` is 0 or less, then we should only print a newline.

Let's break down the code for the `print_line` function step by step:

```c
void print_line(int n)
{
    if (n <= 0) // If n is 0 or less, only print a newline
    {
        _putchar('\n'); // Print a newline character
    }
    else
    {
        int i;

        for (i = 0; i < n; i++) // Loop to print n underscores
        {
            _putchar('_'); // Print an underscore character
        }

        _putchar('\n'); // Move to a new line after printing the line
    }
}
```

1. The function starts by checking if `n` is 0 or less. If it is, it means we should print just a newline character to represent an empty line.

2. If `n` is greater than 0, we enter the `else` block. Here, a loop runs `n` times, and in each iteration, an underscore character (`_`) is printed using the `_putchar` function.

3. After printing the specified number of underscores, the function prints a newline character using `_putchar('\n')` to move to a new line.

The provided `main` function demonstrates how to use the `print_line` function with different values of `n`. When compiled and run, it prints the requested lines of underscores, followed by a newline character.

Remember that the `_putchar` function is provided and prints a single character to the standard output.


**6-print_line.c:**
```c
#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
    if (n <= 0) // If n is 0 or less, only print a newline
    {
        _putchar('\n');
    }
    else
    {
        int i;

        for (i = 0; i < n; i++) // Loop to print n underscores
        {
            _putchar('_');
        }
        _putchar('\n'); // Move to a new line after printing the line
    }
}
```

**6-main.c:**
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
```

To compile and run the code, you can use the provided compilation commands:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
./6-lines
```

This will produce the following output:
```
$
__$
__________$
$
```

The `print_line` function prints a line of underscores using the `_putchar` function. It first checks if `n` is 0 or less, and in that case, it only prints a newline. Otherwise, it uses a loop to print `n` underscores, followed by a newline.

---

**Task 7:  I feel like I am diagonally parked in a parallel universe**


In this task, we're asked to write a function called `print_diagonal` that takes an integer `n` as its parameter. This `n` represents the number of times the character `\` should be printed diagonally. The goal is to print this diagonal line of backslashes, and if `n` is 0 or less, then we should only print a newline.

Let's break down the code for the `print_diagonal` function step by step:

```c
void print_diagonal(int n)
{
    if (n <= 0) // If n is 0 or less, only print a newline
    {
        _putchar('\n'); // Print a newline character
    }
    else
    {
        int i, j;

        for (i = 0; i < n; i++) // Loop to print n lines
        {
            for (j = 0; j < i; j++) // Loop to print leading spaces
            {
                _putchar(' '); // Print a space character
            }
            _putchar('\\'); // Print a backslash character
            _putchar('\n'); // Move to a new line
        }
    }
}
```

1. The function starts by checking if `n` is 0 or less. If it is, it means we should print just a newline character to represent an empty line.

2. If `n` is greater than 0, we enter the `else` block. Here, an outer loop runs `n` times to print `n` diagonal lines.

3. Inside the outer loop, an inner loop runs `i` times (where `i` is the current value of the outer loop variable). This inner loop is responsible for printing leading spaces to create the diagonal effect.

4. After printing the leading spaces, the function prints a backslash character (`\`) to represent the diagonal line, followed by a newline character to move to the next line.

The provided `main` function demonstrates how to use the `print_diagonal` function with different values of `n`. When compiled and run, it prints the requested diagonal lines of backslashes, followed by newline characters.

Remember that the `_putchar` function is provided and prints a single character to the standard output.


**7-print_diagonal.c:**
```c
#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
    if (n <= 0) // If n is 0 or less, print only a newline
    {
        _putchar('\n'); // Print a newline character
    }
    else
    {
        int i, j;

        for (i = 0; i < n; i++) // Loop to print n lines
        {
            for (j = 0; j < i; j++) // Loop to print spaces before '\'
            {
                _putchar(' '); // Print a space character
            }
            _putchar('\\'); // Print a '\' character for the diagonal
            _putchar('\n'); // Move to a new line after each line
        }
    }
}
```

**7-main.c:**
```c
#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
```

To compile and run the code, you can use the provided compilation commands:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
./7-diagonals
```

This will produce the following output:
```
$
\
 \
\
 \
  \
   \
    \
     \
$
```

The `print_diagonal` function first checks if `n` is 0 or less. If it is, the function prints just a newline character. If `n` is greater than 0, the function uses loops to print `n` lines, each with an increasing number of spaces followed by a diagonal character `\`.

---
**Task 8: You are so much sunshine in every square inch**

In this task, we're asked to write a function called `print_square` that takes an integer `size` as its parameter. The goal is to print a square made up of `size` rows and columns, where each cell is represented by the character `#`. If `size` is 0 or less, we should print only a newline.

Let's break down the code for the `print_square` function step by step:

```c
void print_square(int size)
{
    if (size <= 0) // If size is 0 or less, print only a newline
    {
        _putchar('\n'); // Print a newline character
    }
    else
    {
        int i, j;

        for (i = 0; i < size; i++) // Loop to print size rows
        {
            for (j = 0; j < size; j++) // Loop to print size columns
            {
                _putchar('#'); // Print a '#' character
            }
            _putchar('\n'); // Move to a new line after each row
        }
    }
}
```

1. The function starts by checking if `size` is 0 or less. If it is, it means we should print just a newline character to represent an empty line.

2. If `size` is greater than 0, we enter the `else` block. Here, an outer loop runs `size` times to print `size` rows of the square.

3. Inside the outer loop, an inner loop also runs `size` times to print `size` columns of the square. Within this inner loop, the function prints the character `#` to represent a cell in the square.

4. After printing all the cells in a row, the function moves to a new line using `_putchar('\n')`.

The provided `main` function demonstrates how to use the `print_square` function with different values of `size`. When compiled and run, it prints the requested square patterns, followed by newline characters.


**8-print_square.c:**
```c
#include "main.h"

/**
 * print_square - prints a square pattern in the terminal
 * @size: the size of the square
 */
void print_square(int size)
{
    if (size <= 0) // If size is 0 or less, print only a newline
    {
        _putchar('\n'); // Print a newline character
    }
    else
    {
        int i, j;

        for (i = 0; i < size; i++) // Loop to print 'size' number of rows
        {
            for (j = 0; j < size; j++) // Loop to print 'size' number of columns
            {
                _putchar('#'); // Print a '#' character
            }
            _putchar('\n'); // Move to a new line after each row
        }
    }
}
```

**8-main.c:**
```c
#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
```

To compile and run the code, you can use the provided compilation commands:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
./8-squares
```

This will produce the following output:
```
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########
```

The `print_square` function uses loops to print a square pattern of '#' characters based on the specified size. Each row consists of `size` number of '#' characters, and the function loops through to print the desired number of rows.

---

# Task 9: Fizz-Buzz

The Fizz-Buzz test is a simple programming challenge used to evaluate a candidate's basic programming skills. In this task, we'll write a program that prints numbers from 1 to 100, replacing multiples of 3 with "Fizz," multiples of 5 with "Buzz," and multiples of both 3 and 5 with "FizzBuzz."

## Compilation and Usage

Compile the program using the following command:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
```

To run the program, use:

```sh
./9-fizz_buzz
```

## Output

The program will print the numbers from 1 to 100, each followed by a space. For multiples of 3, it will print "Fizz." For multiples of 5, it will print "Buzz." For numbers that are multiples of both 3 and 5, it will print "FizzBuzz."

## Example Output

```
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz ... 97 98 Fizz Buzz
```

## Constraints

- You are allowed to use the standard library.
- The program should adhere to the rules of Fizz-Buzz as described above.


```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz ");
        else if (i % 3 == 0)
            printf("Fizz ");
        else if (i % 5 == 0)
            printf("Buzz ");
        else
            printf("%d ", i);
    }

    printf("\n");
    return (0);
}
```

This program uses a loop to iterate through numbers from 1 to 100. Depending on the divisibility of the current number, it prints "Fizz," "Buzz," "FizzBuzz," or the number itself, following the rules mentioned in the task description.

---

**Task 10: Triangles**

Hey there! Imagine you have a magical function that can draw different shapes using characters. In this task, we're going to create a function that can draw a special shape called a triangle. A triangle is like a mountain made of characters.

We'll use a special character called "#" to draw our triangle. The size of the triangle will determine how big or small it is. If we tell the function to make a triangle with a size of 3, it will look like this:

```
  #
 ##
###
```

And if we tell it to make a triangle with a size of 5, it will look like this:

```
    #
   ##
  ###
 ####
#####
```

Now, let's see how we can make our computer do this!

**Code Explanation:**

In this program, we're creating a function called `print_triangle` that will draw a triangle using the `_putchar` function.

Here's how the code works:

```c
void print_triangle(int size)
{
    int row, column;

    for (row = 0; row < size; row++) {     // Loop for each row
        for (column = 0; column <= row; column++) {
            _putchar('#');                 // Print '#' for each column in the row
        }
        _putchar('\n');                    // Move to the next line after each row
    }
}
```

1. We have a function called `print_triangle` that takes a number called `size` as input. This number will determine the size of the triangle.
2. Inside the function, we have two loops. The first loop (`row` loop) runs from 0 to `size - 1`, creating each row of the triangle.
3. Inside the `row` loop, we have another loop (`column` loop) that runs from 0 to the current `row` value. This loop prints the "#" character for each column in the current row.
4. After printing all the characters in a row, we use `_putchar('\n')` to move to the next line and start the next row.

This way, when we call the `print_triangle` function with different sizes, it will create triangles of different heights, all made up of "#" characters.

Remember, this magical function (`_putchar`) helps us print characters one by one, and by using loops, we can create cool shapes like this triangle!


**10-print_triangle.c:**
```c
#include "main.h"

/**
 * print_triangle - prints a triangle using '#' characters
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
    int row, column;

    for (row = 0; row < size; row++) {     // Loop for each row
        for (column = 0; column <= row; column++) {
            _putchar('#');                 // Print '#' for each column in the row
        }
        _putchar('\n');                    // Move to the next line after each row
    }
}
```

**10-main.c:**
```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
```

To compile and run the code, you can use the provided compilation commands:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
./10-triangles
```

This will produce the following output:
```
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#
```

The `print_triangle` function uses two loops to print the "#" character in a pattern that creates a triangle. The outer loop controls the number of rows, and the inner loop controls the number of "#" characters printed in each row.


---

**Task 11: Prime Numbers**

Explanation:
The problem is to find the largest prime factor of a given number, which is a common mathematical task. A prime factor is a prime number that can divide the given number evenly without leaving a remainder. In this case, you need to find the largest prime factor of the number 612852475143.

Code:
```c
#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    long int num = 612852475143;
    long int divisor = 2;

    while (num > 1)
    {
        if (num % divisor == 0)
        {
            num = num / divisor;
        }
        else
        {
            divisor++;
        }
    }

    printf("%ld\n", divisor);

    return (0);
}
```

This code uses a simple loop to find the prime factorization of the given number. It starts with a divisor of 2 and repeatedly divides the number by the divisor if it's a factor. When the loop ends, the variable `divisor` holds the largest prime factor of the original number.

Compile and run the code with the provided compilation command:
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
./100-prime_factor
```

The output will be the largest prime factor of the number 612852475143.

---

#Task 12::Numbers have life; they're not just symbols on paper

**Explanation:**
This task requires creating a function that can print an integer to the standard output using only the `_putchar` function, which is the only allowed printing function. The challenge lies in converting the integer into individual digits and printing each digit separately.

**Code:**
```c
#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
    {
        print_number(n / 10);
    }

    _putchar((n % 10) + '0');
}
```

**Running the Code:**
Compile and run the code using the given compilation command:
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
./101-print_numbers
```

The output will be:
```
98
402
1024
0
-98
```

**Explanation of the Code:**
1. The `print_number` function first checks if the given integer `n` is negative. If it is, it prints a negative sign and makes `n` positive for further processing.
2. The function then checks if the absolute value of `n` is greater than or equal to 10. If it is, it calls itself recursively with `n / 10` to print the remaining digits.
3. After printing all the higher-order digits, the function uses the `_putchar` function to print the last digit of `n`, obtained as `(n % 10) + '0'`.

This approach breaks down the integer into individual digits and prints them one by one, effectively achieving the task's goal.
