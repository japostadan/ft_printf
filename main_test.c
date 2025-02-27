#include "./includes/ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void test_leaks()
{
    // Test with dynamic memory allocation for strings
    char *dynamic_str = (char *)malloc(51 * sizeof(char));
    if (dynamic_str)
    {
        snprintf(dynamic_str, 51, "Dynamically allocated string for memory leak test.");
        ft_printf("Dynamically allocated string: %s\n", dynamic_str);
        free(dynamic_str);  // Free memory to check if there's a leak
    }
}

int main()
{
    // Edge case data values
    char c = 'A';  // Printable character
    char *str = "Edge cases with ft_printf";  // Regular string
    void *ptr = (void *)0xDEADBEEF;  // Non-null pointer
    int num = INT_MIN;  // Edge case: minimum value for signed integer
    unsigned int u_num = UINT_MAX;  // Edge case: maximum value for unsigned integer
    unsigned int hex_num = 0x0;  // Zero value for hexadecimal
    unsigned int hex_upper_num = 0xFFFFFF;  // Large hexadecimal number
    int zero = 0;  // Edge case: zero value
    char empty_str[] = "";  // Empty string case
    char long_str[1000];  // Very long string
    for (int i = 0; i < 999; i++) long_str[i] = 'A';  // Fill with 'A'
    long_str[999] = '\0';  // Null terminate

    // Test Counters
    int test_result = 0;
    int i = 0;
    int j = 0;

    // ******************** TEST 1: Print string literal %% ********************
    printf("\n\t************* TEST 1: Print string literal %% ********************\n");
    test_result = printf("REAL: printing %% \n");
    printf("printf returns: %d\n", test_result);
    test_result = ft_printf("FAKE: printing %% \n");
    ft_printf("ft_printf returns: %d\n", test_result);

    // ******************** TEST 2: Print string address ********************
    printf("\n\t************* TEST 2: Print string address ********************\n");
    printf("Pointer to string -> %p\n", str);
    ft_printf("Pointer to string -> %p\n", str);

    // ******************** TEST 3: NULL Parameter ********************
    printf("\n\t************* TEST 3: NULL Parameter ********************\n");
    test_result = ft_printf(NULL);
    ft_printf("ft_printf returns: %d\n", test_result);
    printf("printf returns: %d\n", test_result);

    // ******************** TEST 4: Print multiple formats ********************
    printf("\n\t************* TEST 4: Print multiple formats ********************\n");
    i = ft_printf("ft_printf ->> c: %c, s: %s, p: %p, d: %d, u: %u, x: %x, X: %X, %%\n",
                  c, str, ptr, num, u_num, hex_num, hex_upper_num);
    printf("ft_printf returns: %d\n", i);

    j = printf("printf ->> c: %c, s: %s, p: %p, d: %d, u: %u, x: %x, X: %X, %%\n",
               c, str, ptr, num, u_num, hex_num, hex_upper_num);
    printf("printf returns: %d\n", j);

    // ******************** TEST 5: Char format tests ********************
    printf("\n\t************* TEST 5: Char format tests ********************\n");
    ft_printf("\n$$$$$$$$$$$$$$ Char Test $$$$$$$$$$$$$$$\n");
    printf("Printf [A] ====> %c\n", c);
    ft_printf("ft_printf [A] => %c\n", c);
    printf("Printf ['\\0'] ===> %c\n", '\0');
    ft_printf("ft_printf ['\\0'] ==> %c\n", '\0');
    printf("Print Non Printable ['\\r'] ===> %c\n", '\r');
    ft_printf("ft_printf ['\\r'] ==> %c\n", '\r');
    ft_printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    // ******************** TEST 6: String format tests ********************
    printf("\n\t************* TEST 6: String format tests ********************\n");
    ft_printf("\n$$$$$$$$$$$$$$ String Test $$$$$$$$$$$$$$$\n");
    printf("REAL ->> Test String: %s\n", str);
    ft_printf("FAKE ->> Test String: %s\n", str);
    ft_printf("FAKE ->> NULL Pointer (should not print): %p\n", NULL);
    ft_printf("REAL ->> Pointer: %p\n", ptr);

    // ******************** TEST 7: Integer format tests ********************
    printf("\n\t************* TEST 7: Integer format tests ********************\n");
    printf("REAL ->> Test integer (d) INT_MIN: %d\n", num);
    ft_printf("FAKE ->> Test integer (d) INT_MIN: %d\n", num);
    printf("REAL ->> Test unsigned (u) UINT_MAX: %u\n", u_num);
    ft_printf("FAKE ->> Test unsigned (u) UINT_MAX: %u\n", u_num);

    // ******************** TEST 8: Hexadecimal format tests ********************
    printf("\n\t************* TEST 8: Hexadecimal format tests ********************\n");
    printf("REAL ->> Test hexadecimal (x) Zero: %x\n", hex_num);
    ft_printf("FAKE ->> Test hexadecimal (x) Zero: %x\n", hex_num);
    printf("REAL ->> Test hexadecimal (X) Large: %X\n", hex_upper_num);
    ft_printf("FAKE ->> Test hexadecimal (X) Large: %X\n", hex_upper_num);

    // ******************** TEST 9: Edge case with empty string ********************
    printf("\n\t************* TEST 9: Edge case with empty string ********************\n");
    printf("REAL ->> Empty string: '%s'\n", empty_str);
    ft_printf("FAKE ->> Empty string: '%s'\n", empty_str);

    // ******************** TEST 10: Edge case with long string ********************
    printf("\n\t************* TEST 10: Edge case with long string ********************\n");
    printf("REAL ->> Long string: %s\n", long_str);
    ft_printf("FAKE ->> Long string: %s\n", long_str);

    // ******************** TEST 11: Zero value tests ********************
    printf("\n\t************* TEST 11: Zero value tests ********************\n");
    printf("REAL ->> Zero: %d\n", zero);
    ft_printf("FAKE ->> Zero: %d\n", zero);

    // ******************** TEST 12: Negative numbers ********************
    printf("\n\t************* TEST 12: Negative number tests ********************\n");
    int negative_num = -42;
    printf("REAL ->> Negative number: %d\n", negative_num);
    ft_printf("FAKE ->> Negative number: %d\n", negative_num);

    // ******************** TEST 13: Edge case with percent %% ********************
    printf("\n\t************* TEST 13: Percent format %% ********************\n");
    printf("REAL ->> Percent: %%\n");
    ft_printf("FAKE ->> Percent: %%\n");

    // ******************** Leak Test: Check for leaks ********************
    printf("\n\t************* Leak Test ********************\n");
    test_leaks();

    return 0;
}
