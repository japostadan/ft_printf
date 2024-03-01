#include "ft_printf.h"
#include <stdio.h>
int main()
{
    	char c = 'A';
    	char *str = "Hello, World!";
    	void *ptr = (void *)0x12345678;
    	int num = -2147483648;
    	unsigned int u_num = -2147483648;
	unsigned int hex_num = 0xA1B2C3;
	unsigned int hex_upper_num = 0xD4E5F6;
	int i = 0;
	int j = 0;
    i = ft_printf("FAKE ->> 1: c: %c s: %s p: %p d: %d  u: %u \n ",c,str,ptr,num,u_num);
	printf("i= %d\n",i);
    j = printf(   "REAL ->> 1: c: %c s: %s p: %p d: %d  u: %u \n ",c,str,ptr,num,u_num);
	ft_printf("j = %d\n",j);
	printf("REAL ->>Test 1: %c\n", c);
	ft_printf("REAL ->>Test 1: %c\n", c);
    	ft_printf("Test 2: %s\n", str);
    	printf("REAL ->>Test 2: %s\n", str);
   	ft_printf("Test 3: %p\n", ptr);
    	printf("REAL ->>Test 3: %p\n", ptr);
    	ft_printf("Test 4: %d\n", num);
    	printf("REAL ->>Test 4: %d\n", num);
    	ft_printf("Test 5: %u\n", u_num);
    	printf("REAL ->>Test 5: %u\n", u_num);
	ft_printf("Test 6: %x\n", hex_num);
    	printf("REAL ->>est 6: %x\n", hex_num);
    	ft_printf("Test 7: %X\n", hex_upper_num);
    	printf("REAL ->>est 7: %X\n", hex_upper_num);
    	ft_printf("Test 8: %%\n");
    	printf("REAL ->>est 8: %%\n");
    return 0;
}

