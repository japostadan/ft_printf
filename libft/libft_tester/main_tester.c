#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// Color codes for better visibility
#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

void test_result(const char *test_name, int result)
{
    printf("%s: %s%s%s\n", test_name, 
           result ? GREEN"PASS"RESET : RED"FAIL"RESET,
           RESET, result ? "✓" : "✗");
}

// Character classification tests
void test_char_functions(void)
{
    printf("\n=== Character Functions Tests ===\n");
    
    // Test ft_isalpha
    test_result("ft_isalpha('a')", ft_isalpha('a') == isalpha('a'));
    test_result("ft_isalpha('Z')", ft_isalpha('Z') == isalpha('Z'));
    test_result("ft_isalpha('3')", ft_isalpha('3') == isalpha('3'));
    
    // Test ft_isdigit
    test_result("ft_isdigit('5')", ft_isdigit('5') == isdigit('5'));
    test_result("ft_isdigit('a')", ft_isdigit('a') == isdigit('a'));
    
    // Test ft_isalnum
    test_result("ft_isalnum('a')", ft_isalnum('a') == isalnum('a'));
    test_result("ft_isalnum('5')", ft_isalnum('5') == isalnum('5'));
    test_result("ft_isalnum('$')", ft_isalnum('$') == isalnum('$'));
    
    // Test ft_isascii
    test_result("ft_isascii(127)", ft_isascii(127) == isascii(127));
    test_result("ft_isascii(128)", ft_isascii(128) == isascii(128));
    
    // Test ft_isprint
    test_result("ft_isprint(' ')", ft_isprint(' ') == isprint(' '));
    test_result("ft_isprint(127)", ft_isprint(127) == isprint(127));


	// Test toupper
	printf("To upper result %c\n", ft_toupper('a'));
	printf("To upper real resut %c\n",toupper('a'));

	//Test tolower
	test_result("ft_tolower('A')",ft_tolower('A') == tolower('A' ));
    test_result("ft_tolower('Z')",ft_tolower('Z') == tolower('Z' ));
}

// String manipulation tests
void test_string_functions(void)
{
    printf("\n=== String Functions Tests ===\n");

    // Test ft_strlen
    test_result("ft_strlen(\"hello\")", ft_strlen("hello") == strlen("hello"));
    test_result("ft_strlen(\"\")", ft_strlen("") == strlen(""));
    
    // Test ft_strchr
    const char *str = "Hello, World!";
    test_result("ft_strchr basic", ft_strchr(str, 'W') == strchr(str, 'W'));
    test_result("ft_strchr not found", ft_strchr(str, 'z') == strchr(str, 'z'));
    
    // Test ft_strrchr
    test_result("ft_strrchr basic", ft_strrchr(str, 'o') == strrchr(str, 'o'));
    test_result("ft_strrchr not found", ft_strrchr(str, 'z') == strrchr(str, 'z'));
    
    // Test ft_strncmp
    test_result("ft_strncmp equal", ft_strncmp("hello", "hello", 5) == strncmp("hello", "hello", 5));
    test_result("ft_strncmp different", ft_strncmp("hello", "world", 5) == strncmp("hello", "world", 5));
    
    // Test ft_strlcpy
    //char dst1[10];
    //char dst2[10];
    //test_result("ft_strlcpy basic", ft_strlcpy(dst1, "test", 5) == strlcpy(dst2, "test", 5));
    
    // Test ft_strlcat
    //char cat1[20] = "Hello";
    //char cat2[20] = "Hello";
    //test_result("ft_strlcat basic", ft_strlcat(cat1, " World", 12) == strlcat(cat2, " World", 12));
}

// Memory functions tests
void test_memory_functions(void)
{
    printf("\n=== Memory Functions Tests ===\n");
    
    // Test ft_memset
    char mem1[10] = {0};
    char mem2[10] = {0};
    test_result("ft_memset", memcmp(ft_memset(mem1, 'A', 5), memset(mem2, 'A', 5), 5) == 0);
    
    // Test ft_bzero
    char bz1[10] = "AAAAAAAAAA";
    char bz2[10] = "AAAAAAAAAA";
    ft_bzero(bz1, 5);
    bzero(bz2, 5);
    test_result("ft_bzero", memcmp(bz1, bz2, 10) == 0);
    
    // Test ft_memcpy
    char src[10] = "test";
    char dst1[10] = {0};
    char dst2[10] = {0};
    test_result("ft_memcpy", memcmp(ft_memcpy(dst1, src, 4), memcpy(dst2, src, 4), 4) == 0);
    
    // Test ft_memmove
    char mv1[] = "abcdef";
    char mv2[] = "abcdef";
    test_result("ft_memmove overlap", memcmp(ft_memmove(mv1+1, mv1, 5), memmove(mv2+1, mv2, 5), 5) == 0);
}

// Conversion functions tests
void test_conversion_functions(void)
{
    printf("\n=== Conversion Functions Tests ===\n");
    
    // Test ft_atoi
    test_result("ft_atoi positive", ft_atoi("123") == atoi("123"));
    test_result("ft_atoi negative", ft_atoi("-123") == atoi("-123"));
    test_result("ft_atoi with spaces", ft_atoi("  123") == atoi("  123"));
    
    // Test ft_itoa
    char *itoa_result = ft_itoa(12345);
    test_result("ft_itoa positive", strcmp(itoa_result, "12345") == 0);
    free(itoa_result);
    
    itoa_result = ft_itoa(-12345);
    test_result("ft_itoa negative", strcmp(itoa_result, "-12345") == 0);
    free(itoa_result);
}

// Additional string function tests
void test_additional_string_functions(void)
{
    printf("\n=== Additional String Functions Tests ===\n");


    printf("\n=== Split fucntion test Functions Tests ===\n");
	// Test ft_split
	char **split = ft_split("s p a c e ", ' ');
	char **original = split;
	while (*split)
	{
		printf("%s\n", *split);
		free(*split);
		split++;
	}
	free(original);

    
    // Test ft_substr
    char *substr = ft_substr("Hello, World!", 7, 5);
    test_result("ft_substr", strcmp(substr, "World") == 0);
    free(substr);
    
    // Test ft_strjoin
    char *joined = ft_strjoin("Hello", " World");
    test_result("ft_strjoin", strcmp(joined, "Hello World") == 0);
    free(joined);
    
    // Test ft_strtrim
    char *trimmed = ft_strtrim("   Hello   ", " ");
    test_result("ft_strtrim", strcmp(trimmed, "Hello") == 0);
    free(trimmed);
}

// List functions tests (bonus)
void test_list_functions(void)
{
    printf("\n=== List Functions Tests (Bonus) ===\n");
    
    // Create new node
    t_list *node = ft_lstnew("test");
    test_result("ft_lstnew", node != NULL && strcmp(node->content, "test") == 0);
    
    // Add front
    t_list *front = ft_lstnew("front");
    ft_lstadd_front(&node, front);
    test_result("ft_lstadd_front", strcmp(front->content, "front") == 0 && front->next == node);
    
    // Test size
    test_result("ft_lstsize", ft_lstsize(front) == 2);
    
    // Test last
    test_result("ft_lstlast", strcmp(ft_lstlast(front)->content, "test") == 0);
    
    // Clean up
    ft_lstclear(&front, NULL);
    test_result("ft_lstclear", front == NULL);
}

int main(void)
{
    printf("=== Starting libft tests ===\n");
    
    test_char_functions();
    test_string_functions();
    test_memory_functions();
    test_conversion_functions();
    test_additional_string_functions();
    test_list_functions();
    
    printf("\n=== Tests completed ===\n");
    return (0);
}
