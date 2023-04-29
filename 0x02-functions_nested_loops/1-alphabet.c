#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet - printall alphabet in lowercase
 */

void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	putchar('\n');
}
