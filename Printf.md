## The printf function in the C standard library

 - The printf is a function in the C standard library w/c stands for "print formatted". It displays the formatted output on the console, or the terminal. It is part of the <stdio.h> header file.
 
#### - Function prototype:
``` C 
    int printf(const char *format, ...)
```
#### - Parameters:
    - **format**
        A string that contains plain text and format specifiers. The format(%) specifiers define how the subsequent argument should be formatted and displayed. For example the, **%d** for integer.
    - **...**
        The number of arguements that correspon to the format specifiers. These arguements are formatted and printed according to the format string.

##### - Return ----------
    - The printf returns the total number of characters written to the output (excluding the null byte). In case of error it returns a negative value.


#### Format Specifiers

- %d or %i : print an integer.
- %f : Print a floating point number.
- %s : Print a string.
- %c : Print a character.
- %x : Print a number in lowercase hexadecimal.
- %X : Print a number in uppercase hexadecimal.
- %p : Print a pointer address.
- %% : Print literal % character.
- There are many other specifiers for padding, precision, alignment, and width (e.g. %5d, %10.3f).


``` C
#include <stdio.h>

int main() {
    int age = 25;
    double height = 5.9;
    char name[] = "John";

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f meters\n", height);

    return 0;
}
```

``` Bash
Name: John
Age: 25
Height: 5.9 meters
```

