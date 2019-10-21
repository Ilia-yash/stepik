#include <stdio.h>
#include <stdlib.h>
#include "abs_min.h"
int abs_min(int array[], int x){
    int result = array[0], i;
    for (i = 0; i < x; i++) {
        if (array[i] == 0)
            result = 0;
        if (abs(array[i]) < abs(result))
            result = array[i];
    }
    return result;
}
