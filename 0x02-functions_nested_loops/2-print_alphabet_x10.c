#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - printall alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char low;
	int i;

	for (i = 0; i < 10; i++)
	  {
	    for (low = 'a'; low <= 'z'; low++)
	      putchar(low);
	    putchar('\n');
	  }
}
