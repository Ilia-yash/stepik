#include <stdio.h>
#include <stdlib.h>
#include "diff.h"
int diff(int array[], int x){
    int result = 0;
    result = abs_max(array, x) - abs_min(array, x);
    return result;
}
