#include "main.h"
#include <ctype.h>

int _isalpha(int c){
    int result = isalpha(c);
    if(result == 0){
        return 0;
    } else {
        return 1;
    }
}
