#include <stdlib.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

/*
int main() 
{
	unsigned char input = 0xAB;

	printf("Original octet: 0x%X\n", input);
	printf("Octet after swapping bits: 0x%X\n", swap_bits(input));
	return 0;
}
*/
