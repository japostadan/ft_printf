#include "ft_printf.h"

int main()
{
    char c = 'A';
    char *str = "Hello, World!";
    void *ptr = (void *)0x12345678;
    int num = 42;
    unsigned int u_num = 123;
    unsigned int hex_num = 0xA1B2C3;
    unsigned int hex_upper_num = 0xD4E5F6;

    ft_printf("Test 1: %c\n", c);
    ft_printf("Test 2: %s\n", str);
    ft_printf("Test 3: %p\n", ptr);
    ft_printf("Test 4: %d\n", num);
    ft_printf("Test 5: %u\n", u_num);
    ft_printf("Test 6: %x\n", hex_num);
    ft_printf("Test 7: %X\n", hex_upper_num);
    ft_printf("Test 8: %%\n");

    return 0;
}

