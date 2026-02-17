// #include "ft_printf.h"
// #include <stdio.h>
// #include <limits.h>

// int	main(void)
// {
// 	int		ft_ret;
// 	int		std_ret;
// 	char	*null_str = NULL;
// 	int		num = 42;

// 	printf("╔════════════════════════════════════════╗\n");
// 	printf("║     TESTS ft_printf vs printf          ║\n");
// 	printf("╚════════════════════════════════════════╝\n\n");

// 	// Test 1 : %c
// 	printf("--- Test %%c ---\n");
// 	ft_ret = ft_printf("ft : %c\n", 'A');
// 	std_ret = printf("std: %c\n", 'A');
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 2 : %s
// 	printf("--- Test %%s ---\n");
// 	ft_ret = ft_printf("ft : %s\n", "Hello World");
// 	std_ret = printf("std: %s\n", "Hello World");
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 3 : %s avec NULL
// 	printf("--- Test %%s (NULL) ---\n");
// 	ft_ret = ft_printf("ft : %s\n", null_str);
// 	std_ret = printf("std: %s\n", null_str);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 4 : %d positif
// 	printf("--- Test %%d (positif) ---\n");
// 	ft_ret = ft_printf("ft : %a\n", 42);
// 	std_ret = printf("std: %a\n", 42);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 5 : %d négatif
// 	printf("--- Test %%d (négatif) ---\n");
// 	ft_ret = ft_printf("ft : %d\n", -42);
// 	std_ret = printf("std: %d\n", -42);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 6 : %d zéro
// 	printf("--- Test %%d (zéro) ---\n");
// 	ft_ret = ft_printf("ft : %d\n", 0);
// 	std_ret = printf("std: %d\n", 0);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 7 : %d INT_MIN
// 	printf("--- Test %%d (INT_MIN) ---\n");
// 	ft_ret = ft_printf("ft : %d\n", INT_MIN);
// 	std_ret = printf("std: %d\n", INT_MIN);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 8 : %d INT_MAX
// 	printf("--- Test %%d (INT_MAX) ---\n");
// 	ft_ret = ft_printf("ft : %d\n", INT_MAX);
// 	std_ret = printf("std: %d\n", INT_MAX);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 9 : %i
// 	printf("--- Test %%i ---\n");
// 	ft_ret = ft_printf("ft : %i\n", 12345);
// 	std_ret = printf("std: %i\n", 12345);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 10 : %u
// 	printf("--- Test %%u ---\n");
// 	ft_ret = ft_printf("ft : %u\n", 4294967295u);
// 	std_ret = printf("std: %u\n", 4294967295u);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 11 : %x
// 	printf("--- Test %%x ---\n");
// 	ft_ret = ft_printf("ft : %x\n", 255);
// 	std_ret = printf("std: %x\n", 255);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 12 : %X
// 	printf("--- Test %%X ---\n");
// 	ft_ret = ft_printf("ft : %X\n", 255);
// 	std_ret = printf("std: %X\n", 255);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 13 : %p
// 	printf("--- Test %%p ---\n");
// 	ft_ret = ft_printf("ft : %p\n", &num);
// 	std_ret = printf("std: %p\n", &num);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 14 : %p avec NULL
// 	printf("--- Test %%p (NULL) ---\n");
// 	ft_ret = ft_printf("ft : %p\n", NULL);
// 	std_ret = printf("std: %p\n", NULL);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 15 : %%
// 	printf("--- Test %%%% ---\n");
// 	ft_ret = ft_printf("ft : %%\n");
// 	std_ret = printf("std: %%\n");
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	// Test 16 : Mix
// 	printf("--- Test MIX ---\n");
// 	ft_ret = ft_printf("ft : %s a %d ans, adresse: %p, hex: %x\n",
// 		"Alice", 25, &num, 255);
// 	std_ret = printf("std: %s a %d ans, adresse: %p, hex: %x\n",
// 		"Alice", 25, &num, 255);
// 	printf("Retours → ft: %d | std: %d\n\n", ft_ret, std_ret);

// 	printf("╔════════════════════════════════════════╗\n");
// 	printf("║           FIN DES TESTS                ║\n");
// 	printf("╚════════════════════════════════════════╝\n");

// 	return (0);
// }


