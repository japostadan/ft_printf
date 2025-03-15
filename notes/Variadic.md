### What are variadic functions in C
    - These are functions that accepts variable numbers of arguments.

#### Understanding Macros in <stdarg.h>
    - To create variadic function we need to include the header <stdarg.h> which defines the macros needed for a variadic function.

1. va_start(va_list pointer_to_args, last)
    - This macro accepts two arguments.
- The first argument is a variable declared as va_list type which is an arguement pointer variable.
- The second argument is the last fixed arguement accepted by the variadic function.
- This macro initialize the argument pointer variable (pointer_to_args) to the first optional arguement accepted by the variadic function.

2. va_arg(va_list pointer_to_args, type)
    - This macro accepts two arguments.
- The first argument is same as the first arguement in va_start() macro.
- The second argument specified the expected data type pointed by pointer_to_args.
- This function returns the value of the argument pointed by pointer_to_args, and also update the pointer_to_args to point to the next arguement in the list.

3. va_end(va_list pointer_to_args)
- This macro end the use of pointer_to_args. After calling va_end(pointer_to_args), further va_arg calls with pointer_to_args may not work. However, in GNU C library, va_end does nothing, so you may not necessary to use it except for portability reason.

#### Declaration of a Variadic Function

``` C
retrun_type function_name (type first_argument, ...)

```
- The three periods after the last fixed argument is known as ellipsis. It indicates that a variable number of arguments might be accepted after the last fixed arguement.

### Key Concept

Variadic function enable flexible handling of a dynamic number of arguments.
By using va_list, va_start, va_arg, and va_end, you can write funtions that take an unknown number of arguments, such as printing formatted text or handling different kinds of input. This is what [[ftprintf]] need. it processes each arguments passed to it on the format string which tells it how to interpret and print those arguements.

Example of a Variadic Function

Let's implement a simple variadic function that mimics the behavior of printf but handles only integers:

``` C
#include <stdio.h>
#include <stdarg.h>

void simple_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;  // Skip the '%' character
            if (format[i] == 'd')
            {
                int val = va_arg(args, int);  // Get the next argument as an int
                         printf("%d", val);  // Print the integer
            }
        }
        else
        {
                     putchar(format[i]);  // Print non-format characters as they are
        }
    }
    va_end(args);  // Clean up the va_list
}

int main()
{
        simple_printf("Hello, %d!\n", 42);  // Output: Hello, 42!
    return 0;
}

<<<<<<< HEAD
=======

>>>>>>> fbae2d2 (Create: Add docs files)
```
