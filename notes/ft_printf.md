# ft_printf
    - Recreating the printf funcion in the C standard library. This funcion should behave similarly to the standard printf.


## Steps to Implement:

**1. Funcionality**
    - The core functionality of the printf funtion is to process a format string and correctly format and print the arguements based on the format specifiers in the string.
**2. Handling Variable Arguements**
    - The handling of arguements can be done using va_start, va_arg, and va_end macros.
**3. Writing the output**
    - The required funtion to use is the **write()**.
**4. The return value**
    - The return value should behave the same as the printf which retruns the total number of characters written to the output (excluding the null byte). In case of an error, it should return a negative value.

# The ft_printf

    - Recreating the printf funcion in the C standard library. This funcion should behave similarly to the standard printf.

## Steps to Implement:

**1. Functionality**
    - The core functionality of the printf function is to process a format string and correctly format and print the arguments based on the format specifiers in the string.
**2. Handling Variable Arguments**
    - The handling of arguments can be done using va_start, va_arg, and va_end macros.
**3. Writing the output**
    - The required function to use is the **write**.
**4. The return value**
    - The return value should behave the same as the printf which returns the total number of characters written to the output (excluding the null byte). In case of an error, it should return a negative value.

#### For ft_printf, the format string indicates how to process each argument, and the variable arguments are passed in order after the format string.

``` C
    int ft_printf(const char *format, ...);
```

- **format**
	A string that tells printf how to print the arguments (e.g., %d, %s).
- **...**
	The variable arguments are passed according to the format string.

1. Initialization:
        - ft_printf takes the format string and initializes the va_list using va_start.
2. Parsing the Format String:
        - ft_printf processes the format string character by character. When it encounters a %, it knows a format specifier follows (e.g., %d, %s).
3. Retrieving Arguments:
        - Depending on the specifier, printf uses va_arg to retrieve the corresponding argument (integer, string, pointer, etc.).
4. Printing:
        - Each argument is processed and printed using write or putchar.
5. Cleanup:
        - Finally, printf ends the variable argument list using va_end.

#### Plan for the ft_printf Function

- We will need to implement the ft_printf function that processes the format string and uses the va_* macros to fetch the arguments.

- Basic Flow for ft_printf:

    1. Iterate over the format string: Loop through each character in the format string.
    2. Handle literal characters: If the character is not a format specifier (like %), print it directly.
    3. Handle format specifiers: If the character is a %, handle the corresponding specifier.
    4. Use write: Output the formatted result to the standard output using the write function.
    5. Return the number of characters printed: Track the total number of characters printed and return that at the end of the function.


#### The mandatory 

- The prototype of ft_printf() is:

		`int ft_printf(const char *, ...);`

- Here are the requirements:
		`int ft_printf(const char *, ...);`

- **Here are the requirements:**

• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
    Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.

- You have to implement the following conversions:

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

