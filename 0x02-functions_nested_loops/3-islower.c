#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if character is lowercase 
 * @c: character to test
 * return 1 if its lowercase or 0 for anything else
 */
int _islower(int c){
    	int res = islower(c);
        if(res == 0){
                return 0;
        }
        else {
                return 1;
	}
        
}

