<<<<<<< HEAD
#ifndef MAIN_H
#define MIAN_H


void print_alphabet(void);
void print_alphabet_10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
int _putchar(char c);
=======
#include <unistd.h>
>>>>>>> 3adf88da15f6395ac358af6477de37353664c7e6

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
