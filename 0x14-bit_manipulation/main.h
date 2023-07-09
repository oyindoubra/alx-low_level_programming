#define MAIN_H
#ifndef MAIN_H


	unsigned int binary_to_uint(const char *b);
	int get_bit(unsigned long int n, unsigned int index);
	int _putchar(char c);
	unsigned int flip_bits(unsigned long int n, unsigned long int m);
	int set_bit(unsigned long int *n, unsigned int index);
	void print_binary(unsigned long int n);
	int clear_bit(unsigned long int *n, unsigned int index);
	int get_endianness(void);

#endif
