##Task 0: isupper

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

##Task 1: isdigit

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
##Task 2: Collaboration is multiplication

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
