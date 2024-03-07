
#include <stdio.h>
#include <limits.h>
#include	"ft_printf.h"
int	main(void)
{
	int				len1;
	int				len2;
	int				i1;
	unsigned int	u1;
	int				hexa;
	char			s[] = "printf test";
	char			*p;

	printf("\nTEST 1\n");
	len1 = ft_printf("Char \'a\' ft_printf = %c\n", 'a');
	len2 = printf("Char \'a\'    printf = %c\n", 'a');
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 2\n");
	len1 = ft_printf("Str s ft_printf = \"%s\"\n", s);
	len2 = printf("Str s    printf = \"%s\"\n", s);
	ft_printf("return ft_printf = %i\n", len1);
	ft_printf("return    printf = %i\n", len2);

	printf("\nTEST 3\n");
	len1 = ft_printf("Str NULL ft_printf = \"%s\"\n", (char *)NULL);
	len2 = printf("Str NULL    printf = \"%s\"\n", (char *)NULL);
	ft_printf("return ft_printf = %i\n", len1);
	ft_printf("return    printf = %i\n", len2);

	printf("\nTEST 4\n");
	p = s;
	len1 = ft_printf("Ptr p ft_printf = \"%p\"\n", p);
	len2 = printf("Ptr p    printf = \"%p\"\n", p);
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 5\n");
	len1 = ft_printf("Ptr at 0 ft_printf = \"%p\"\n", (void *)0);
	len2 = printf("Ptr at 0    printf = \"%p\"\n", (void *)0);
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 6\n");
	len1 = ft_printf("Ptr LONG_MIN ft_printf = \"%p\"\n", (void *)LONG_MIN);
	len2 = printf("Ptr LONG_MIN    printf = \"%p\"\n", (void *)LONG_MIN);
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 7\n");
	len1 = ft_printf("Ptr at LONG_MAX ft_printf = \"%p\"\n", (void *)LONG_MAX);
	len2 = printf("Ptr at  LONG_MAX    printf = \"%p\"\n", (void *)LONG_MAX);
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 8\n");
	len1 = ft_printf("ULONG_MAX ft_printf = \"%p\"\n", (void *)ULONG_MAX);
	len2 = printf("ULONG_MAX    printf = \"%p\"\n", (void *)ULONG_MAX);
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 9\n");
	len1 = ft_printf("-ULONG_MAX ft_printf = \"%p\"\n", (void *)(-ULONG_MAX));
	len2 = printf("-ULONG_MAX    printf = \"%p\"\n", (void *)(-ULONG_MAX));
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 10\n");
	i1 = -84365;
	len1 = ft_printf("decimal ft_printf = \"%d\"\n", i1);
	len2 = printf("decimal    printf = \"%d\"\n", i1);
	printf("return ft_printf = %d\n", len1);
	printf("return    printf = %d\n", len2);

	printf("\nTEST 11\n");
	i1 = -5464;
	len1 = ft_printf("Int ft_printf = \"%i\"\n", i1);
	len2 = printf("Int printf = \"%i\"\n", i1);
	printf("return ft_printf = %d\n", len1);
	printf("return    printf = %d\n", len2);

	printf("\nTEST 12\n");
	u1 = 3147483647;
	len1 = ft_printf("Unsigned int ft_printf = \"%u\"\n", u1);
	len2 = printf("Unsigned int  printf = \"%u\"\n", u1);
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 13\n");
	hexa = -437353553;
	len1 = ft_printf("hexadecimal ft_printf = \"%x\"\n", hexa);
	len2 = printf("hexadecimal    printf = \"%x\"\n", hexa);
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 14\n");
	len1 = ft_printf("uppercase ft_printf = \"%X\"\n", hexa);
	len2 = printf("uppercase printf = \"%X\"\n", hexa);
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 15\n");
	len1 = ft_printf("Print  ft_printf = \"%%\"\n");
	len2 = printf("Print  printf = \"%%\"\n");
	ft_printf("return ft_printf = %d\n", len1);
	ft_printf("return    printf = %d\n", len2);

	printf("\nTEST 16\n");
	len1 = ft_printf("error ft_printf = \"%\n\"\n");
	ft_printf("\n");
	//len2 = printf("error    printf = \"%\n\"");
	ft_printf("return ft_printf = %d\n", len1);
	//ft_printf("return    printf = %d\n", len2);

	ft_printf("\n");

	system("leaks a.out");
	return (0);
}
