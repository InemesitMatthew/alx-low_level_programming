# Debugging Task 0: Creating a Test Case for positive_or_negative()

## Summary

This debugging task focuses on creating a test case for the `positive_or_negative()` function using an input value of `0`. The goal is to verify that the function behaves correctly for this specific input scenario.

## Task Details

- **Files Included:**
  - `0-main.c`: Main file for creating the test case.
  - `main.h`: Header file containing function prototypes.

## Steps to Complete the Task

1. **Understand the Objective:**
   - Examine the provided `main.c` file to understand its testing approach for the `positive_or_negative()` function.
   - Create a similar test case using the `0-main.c` file to test the function specifically for the input value `0`.

2. **Create the Test Case:**
   - Open the `0-main.c` file.
   - Follow the embedded instructions and comments within the file to set up the test case:
     - Include the necessary header file (`main.h`).
     - Write a main function that tests the `positive_or_negative()` function with an input value of `0`.
     - Compile the `0-main.c` file along with other required files.
     - Execute the compiled program to observe the function's output for the input value `0`.

3. **Compile and Run:**
   - Compile the `0-main.c` file using the provided compilation command.
   - Run the compiled program to confirm that the function produces the expected output (`0 is zero`).

4. **Submission:**
   - If you encounter any challenges, refer to your course materials or seek assistance from your instructor or peers.
   - Once the test case functions correctly, submit the `0-main.c` and `main.h` files as required by the task.

## Note
- The implementation of the `positive_or_negative()` function is provided externally. Your task is to create a test case using the provided files.
- Should you encounter difficulties, don't hesitate to seek help from your course instructor or support channels.

---
 
## Task 1: Like, Comment, Subscribe

**Purpose:**
The purpose of this task is to debug an infinite loop in the provided `1-main.c` file. You need to comment out the section of code causing the infinite loop.

**Approach:**
Here's how to approach and solve this task:

1. **Understanding the Issue:**
   - Examine the provided `1-main.c` file to identify the part of the code causing the infinite loop.
   - The code inside the while loop is causing the problem, as it doesn't include an increment or a condition to exit the loop.

2. **Fix the Infinite Loop:**
   - Open the `1-main.c` file.
   - Locate the while loop that's causing the infinite loop.
   - Comment out the code within the while loop to prevent it from running infinitely.
   - The goal is to modify the code so that it avoids the infinite loop while achieving the desired output.

3. **Compile and Run:**
   - Compile the modified `1-main.c` file.
   - Run the compiled program to see if the issue has been resolved.
   - The output should match the expected result without an infinite loop.

4. **Submission:**
   - Make sure you've successfully commented out the problematic code causing the infinite loop.
   - If you face any difficulties, refer to your course materials or seek help from your instructor or peers.
   - Once the issue is resolved and the output is correct, you can submit the `1-main.c` file as required by the task.

## Note:
- Ensure that you only comment out the existing code within the while loop to fix the infinite loop.
- The objective is to achieve the desired output without an infinite loop.
- If you encounter any challenges, don't hesitate to ask for assistance from your course instructor or fellow students.

---

**2. 0 > 972?**

```markdown
# 2. 0 > 972?

This program determines whether the integer 0 is greater than 972.

## Files

* `2-main.c`: Main file to test the program.
* `main.h`: Header file containing the function prototype.

## How to Use

1. Compile the program using the provided compilation command.
2. Run the compiled executable to see the output.
3. The program compares whether 0 is greater than 972 and prints the result.

## Note

* The program checks whether 0 is greater than 972 and prints the result.

```
---

**3. Leap year**

```markdown
# 3. Leap year

This program converts a given date to the day of the year and determines how many days are left in the year, taking leap years into consideration.

## Files

* `3-main_a.c`: Main file to test the program with a non-leap year date.
* `3-main_b.c`: Main file to test the program with a leap year date.
* `3-convert_day.c`: Contains the function `convert_day` to convert day of the month to day of the year.
* `3-print_remaining_days.c`: Contains the function `print_remaining_days` to print the remaining days in the year.
* `main.h`: Header file containing function prototypes.

## How to Use

1. Compile the program using the provided compilation command for both test cases.
2. Run the compiled executable to see the output for the given dates.
3. The program takes a date in the format (month, day, year) and prints the day of the year and the remaining days in the year, considering leap years.

## Note

* The program assumes that all test cases have valid months and days, but not all month/day/year combinations are valid.

```

---
