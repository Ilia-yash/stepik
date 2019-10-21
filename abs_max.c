#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
int abs_max(int array[], int x){
    int result = array[0], i;
    for (i = 0; i < x; i++) {
        if (abs(array[i]) > abs(result))
            result = array[i];
    }
    return result;
}
