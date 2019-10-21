#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
#include "abs_min.h"
#include "sum.h"
#include "diff.h"
int main(){
    char space = ' ';
    int x = 0;
    int array[100];
    int index;
    scanf("%d", &index);
    do {
        scanf("%d%c", &array[x], &space);
        x++;
    } while (space == ' ');
    switch (index) {
    case 0:
        printf("%d\n", abs_max(array, x));
        break;
    case 1:
        printf("%d\n", abs_min(array, x));
        break;
    case 2:
        printf("%d\n", diff(array, x));
        break;
    case 3:
        printf("%d\n", sum(array, x));
        break;
    default:
        printf("Данные некорректны\n");
        break;
    }
    return 0;
}

