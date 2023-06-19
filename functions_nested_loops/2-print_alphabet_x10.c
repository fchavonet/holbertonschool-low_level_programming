#include "main.h"

/**
 * print_alphabet_x10 - Fonction pour imprimer l'alphabet en minuscules x10
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int nb_repeat;

	for (nb_repeat = 0 ; nb_repeat < 10 ; nb_repeat++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
