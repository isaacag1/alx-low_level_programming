#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char na;

	for (ten = '0'; ten <= '9'; na++)
	{
		for (na = 'a'; na <= 'z'; na++)
			_putchar(na);

		_putchar('\n');
	}
}
