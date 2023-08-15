#include "main.h"
void print_alphabet_x10(void)
{
    int n;
    for(n = 0; n < 10; n ++){
       	char curr;
    	for (curr = 'a'; curr <= 'z'; curr++) {
        	_putchar(curr);
    	}
    	_putchar('\n');
    }
}
