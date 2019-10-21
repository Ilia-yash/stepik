#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
int sum(int array[], int x){
    int max = abs_max(array, x), result = 0, n = 0, i;
    for (i = 0; i < x; i++) {
        if (array[i] == max)
            n = 1;
        if (n)
            result += array[i];
    }
    return result;
}
