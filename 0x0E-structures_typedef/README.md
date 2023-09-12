# Task 0: Define a Struct in C

## Introduction
In this task, you will define a new data structure in C called `struct dog`. This structure will be used to represent information about a dog, including its name, age, and owner.

## Requirements
You are required to create the `struct dog` type with the following elements:
- `name`, type = `char *`: Represents the name of the dog (a string).
- `age`, type = `float`: Represents the age of the dog (a floating-point number).
- `owner`, type = `char *`: Represents the owner's name (a string).

## Implementation

### Step 1: Define the Struct
To define the `struct dog` type, open your C source code file (e.g., `0-main.c`) and declare the structure as follows:

```c
struct dog {
    char *name;
    float age;
    char *owner;
};
```

This code defines a `struct dog` with three members: `name`, `age`, and `owner`.

### Step 2: Use the Struct
In the same C source code file, you can now use the `struct dog` type to create instances of dogs and initialize their values. Here's an example:

```c
int main(void)
{
    // Declare a struct dog variable and initialize its members
    struct dog my_dog;
    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";

    // Print information about the dog
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    
    return (0);

---

# Task 1: Initialize a Struct Variable in C

## Introduction
In this task, you are required to write a C function that initializes a variable of type `struct dog`. This function will set the values of the `name`, `age`, and `owner` members of the `struct dog` variable.

## Requirements
You need to implement a function with the following prototype:
```c
void init_dog(struct dog *d, char *name, float age, char *owner);
```

This function takes four parameters:
- `d`: A pointer to a `struct dog` variable that you want to initialize.
- `name`: A pointer to a character array (string) representing the dog's name.
- `age`: A floating-point number representing the dog's age.
- `owner`: A pointer to a character array (string) representing the owner's name.

## Implementation

### Step 1: Define the Function
Open your C source code file (e.g., `1-init_dog.c`) and define the `init_dog` function as follows:

```c
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL) {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
```

This function takes a pointer to a `struct dog` (`d`) and assigns the provided values (`name`, `age`, and `owner`) to its respective members.

### Step 2: Use the Function
In the `main` function of your program (e.g., `1-main.c`), you can use the `init_dog` function to initialize a `struct dog` variable. Here's an example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    
    return (0);
}
```

In this example, we create a `struct dog` variable named `my_dog` and use the `init_dog` function to initialize its members with the provided values. Then, we print information about the dog to the console.

### Step 3: Compile and Run
To compile your program, you can use the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o my_dog_program
```

After compiling, you can run the program:
```bash
./my_dog_program
```

You should see the following output:
```
My name is Poppy, and I am 3.5 :) - Woof!
```

That's it! You have successfully initialized a `struct dog` variable using the `init_dog` function.

Remember to include the `init_dog` function definition in your `dog.h` header file in your GitHub repository under the specified directory.

---

# Task 2: Print a Struct in C

## Introduction
In this task, you are required to write a C function that prints the information contained in a `struct dog`. This function should print the dog's name, age, and owner in a specific format. Additionally, if any of these elements are `NULL`, you should print `(nil)` in place of the `NULL` value.

## Requirements
You need to implement a function with the following prototype:
```c
void print_dog(struct dog *d);
```

This function takes one parameter:
- `d`: A pointer to a `struct dog` variable that you want to print.

## Implementation

### Step 1: Define the Function
Open your C source code file (e.g., `2-print_dog.c`) and define the `print_dog` function as follows:

```c
#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    if (d != NULL) {
        printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
    }
}
```

This function takes a pointer to a `struct dog` (`d`) and prints the name, age, and owner using `printf`. It checks if each member is `NULL` and replaces it with `(nil)` if necessary.

### Step 2: Use the Function
In the `main` function of your program (e.g., `2-main.c`), you can use the `print_dog` function to print the information contained in a `struct dog` variable. Here's an example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    
    print_dog(&my_dog);
    
    return (0);
}
```

In this example, we create a `struct dog` variable named `my_dog` and assign values to its members. Then, we use the `print_dog` function to print the information.

### Step 3: Compile and Run
To compile your program, you can use the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o my_dog_printer
```

After compiling, you can run the program:
```bash
./my_dog_printer
```

You should see the following output:
```
Name: Poppy
Age: 3.500000
Owner: Bob
```

That's it! You have successfully implemented a function that prints a `struct dog` variable according to the specified format.

Remember to include the `print_dog` function definition in your `dog.h` header file in your GitHub repository under the specified directory.

---

# Task 3: Define a New Type in C

## Introduction
In this task, you are required to define a new type called `dog_t` as a new name for the existing `struct dog` type. This will allow you to use `dog_t` as a shorthand for `struct dog` when declaring variables of this type.

## Requirements
You need to define a new type `dog_t` that serves as an alias for the existing `struct dog` type. This allows you to declare variables of type `dog_t` instead of `struct dog`.

## Implementation

### Step 1: Define the New Type
To define the `dog_t` type, open your C header file (e.g., `dog.h`) and declare it as follows:

```c
typedef struct dog dog_t;
```

This code creates a new type `dog_t` that is an alias for `struct dog`.

### Step 2: Use the New Type
In the `main` function of your program (e.g., `3-main.c`), you can now use the `dog_t` type to declare variables. Here's an example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    
    return (0);
}
```

In this example, we create a `dog_t` variable named `my_dog` and assign values to its members. Since `dog_t` is an alias for `struct dog`, you can use it just like any other structure type.

### Step 3: Compile and Run
To compile your program, you can use the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o my_dog_program
```

After compiling, you can run the program:
```bash
./my_dog_program
```

You should see the following output:
```
My name is Poppy, and I am 3.5 :) - Woof!
```

That's it! You have successfully defined a new type `dog_t` as an alias for the existing `struct dog` type, and you've used it to declare a `dog_t` variable.

Remember to include the `typedef` definition in your `dog.h` header file in your GitHub repository under the specified directory.

---

# Task 4: Create a New Dog in C

## Introduction
In this task, you are required to write a C function that creates a new dog. This function will allocate memory for a `dog_t` structure, copy the provided `name` and `owner` strings into the new structure, and initialize the `age` member. If the function fails to allocate memory, it should return `NULL`.

## Requirements
You need to implement a function with the following prototype:
```c
dog_t *new_dog(char *name, float age, char *owner);
```

This function takes three parameters:
- `name`: A pointer to a character array (string) representing the dog's name.
- `age`: A floating-point number representing the dog's age.
- `owner`: A pointer to a character array (string) representing the owner's name.

The function should return a pointer to the newly created `dog_t` structure.

## Implementation

### Step 1: Define the Struct
Before implementing the `new_dog` function, ensure that you have defined the `struct dog` type in your program. You can refer to Task 3 for the definition of `struct dog`.

### Step 2: Implement the Function
Open your C source code file (e.g., `4-new_dog.c`) and implement the `new_dog` function as follows:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog_ptr;

    // Allocate memory for the new dog
    new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL) {
        return (NULL); // Return NULL if memory allocation fails
    }

    // Copy the name and owner strings into the new dog's structure
    new_dog_ptr->name = strdup(name);
    if (new_dog_ptr->name == NULL) {
        free(new_dog_ptr); // Free memory and return NULL if strdup fails
        return (NULL);
    }

    new_dog_ptr->owner = strdup(owner);
    if (new_dog_ptr->owner == NULL) {
        free(new_dog_ptr->name); // Free previously allocated memory
        free(new_dog_ptr);
        return (NULL);
    }

    // Set the age
    new_dog_ptr->age = age;

    return (new_dog_ptr);
}
```

This function does the following:
- Allocates memory for a new `dog_t` structure.
- Copies the `name` and `owner` strings into the newly allocated structure using `strdup`.
- Sets the `age` member.
- Returns a pointer to the newly created dog.

### Step 3: Use the Function
In the `main` function of your program (e.g., `4-main.c`), you can use the `new_dog` function to create a new dog and then print its information. Here's an example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    if (my_dog != NULL) {
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    } else {
        printf("Failed to create a new dog.\n");
    }

    return (0);
}
```

In this example, we use the `new_dog` function to create a new dog, and then we print its information if the creation was successful.

### Step 4: Compile and Run
To compile your program, you can use the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o my_dog_creator
```

After compiling, you can run the program:
```bash
./my_dog_creator
```

You should see the following output:
```
My name is Poppy, and I am 3.5 :) - Woof!
```

That's it! You have successfully implemented a function that creates a new `dog_t` structure, copies the provided strings, and initializes the `age` member. If memory allocation fails, the function returns `NULL`.

Remember to include the `new_dog` function definition in your `dog.h` header file in your GitHub repository under the specified directory.

---

# Task 5: Free Memory for a Dog in C

## Introduction
In this task, you are required to write a C function that frees the memory associated with a `dog_t` structure. This function will release the memory for the `name` and `owner` strings as well as the memory for the structure itself.

## Requirements
You need to implement a function with the following prototype:
```c
void free_dog(dog_t *d);
```

This function takes one parameter:
- `d`: A pointer to a `dog_t` structure that you want to free.

The function should free the memory associated with the `name` and `owner` strings within the structure and then free the memory for the structure itself.

## Implementation

### Step 1: Implement the Function
Open your C source code file (e.g., `5-free_dog.c`) and implement the `free_dog` function as follows:

```c
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *d)
{
    if (d != NULL) {
        // Free memory for the name and owner strings
        if (d->name != NULL) {
            free(d->name);
        }
        if (d->owner != NULL) {
            free(d->owner);
        }
        
        // Free memory for the structure itself
        free(d);
    }
}
```

This function first checks if the provided `dog_t` pointer (`d`) is not `NULL`. If it's not `NULL`, it proceeds to free the memory allocated for the `name` and `owner` strings using the `free` function. Finally, it frees the memory for the structure itself.

### Step 2: Use the Function
In the `main` function of your program (e.g., `5-main.c`), you can use the `free_dog` function to release the memory associated with a dog. Here's an example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    if (my_dog != NULL) {
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
        
        // Free the memory for the dog
        free_dog(my_dog);
    } else {
        printf("Failed to create a new dog.\n");
    }

    return (0);
}
```

In this example, we create a `dog_t` variable named `my_dog`, print its information, and then use the `free_dog` function to release the memory.

### Step 3: Compile and Run
To compile your program, you can use the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o my_dog_freer
```

After compiling, you can run the program:
```bash
./my_dog_freer
```

You should see the following output:
```
My name is Poppy, and I am 3.5 :) - Woof!
```

Valgrind should also report that all heap blocks were freed, indicating that there are no memory leaks.

That's it! You have successfully implemented a function that frees the memory associated with a `dog_t` structure, including the `name` and `owner` strings.

Remember to include the `free_dog` function definition in your `dog.h` header file in your GitHub repository under the specified directory.
