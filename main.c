
#include "ft_printf.h"
#include "header.h"

int	main(void)
{
	int k = 42;
	ft_printf("char: %c str: %s dec: %d hex: %x ptr: %p hexU: %X unsigned: %u %%\n", 'A', NULL, -123, -255, &k, -25, 0);
	printf("Original printf: char: %c str: %s dec: %d hex: %x ptr: %p hexU: %X usnigned: %u  %% \n", 'A', NULL, -123, -255, &k, -25, 0);
}