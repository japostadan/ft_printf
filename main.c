#include "./includes/ft_printf.h"
#include <stdio.h>
int main()
{
    char c = 'A';
    char *str = "Hello, World!";
    void *ptr = (void *)-1;
    int num = -2147483648;
    unsigned int u_num = -214748;
	unsigned int hex_num = -10;
	unsigned int hex_upper_num = -10;
	int i = 0;
	int j = 0;
	int test = 0;
    test = printf("Real: hello %% , how are you\n");
    printf("printf returns: %d\n", test);
	test = ft_printf("Fake: hello %% , how are you\n");
    ft_printf("ft_printf returns: %d\n", test);
	printf("Pointer to string ->%p\n", str);
	ft_printf("Pointer to string ->%p\n", str);
	int returns = 0;
	returns = ft_printf(NULL);
	ft_printf("printf returns: %d\n", returns);
    ft_printf("ft_printf returns: %d\n", returns);
    i = ft_printf("REAL ->> 1: c: %c s: %s p: %p d: %d  u: %u \n ",'\0',(char *)"",NULL,4+1,6);
	printf("i= %d\n",i);
    j = printf("REAL ->> 1: c: %c s: %s p: %p d: %d  u: %u \n ",'\0',(char *)"",NULL,4+1,6);
	ft_printf("Fake j = %d\n",j);
	printf("\n\nREAL ->>Test 1: %c\n", c);
	ft_printf("Fake Test  ->>1: %c\n", c);
    ft_printf("Test 	 2: %s\n", str);
    printf("REAL ->>Test 2: %s\n", str);
   	ft_printf("Fake Test 3: %p\n", ptr);
    printf("REAL ->>Test 3: %p\n", ptr);
    ft_printf("Fake Test 4: %d\n", num);
    printf("REAL ->>Test 4: %d\n", num);
    ft_printf("Fake Test 5: %u\n", u_num);
    printf("REAL ->>Test 5: %u\n", u_num);
	ft_printf("Fake Test 6: %x\n", hex_num);
    printf("REAL ->>Test 6: %x\n", hex_num);
    ft_printf("Fake Test 7: %X\n", hex_upper_num);
    printf("REAL ->>Test 7: %X\n", hex_upper_num);
    ft_printf("Fake Test 8: %%\n");
    printf("REAL ->>Test 8: %%\n");
    return 0;
}

