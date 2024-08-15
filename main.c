#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 5

void foo(int *a) {
    (*a) = (*a) + 1; 
}

int main(void) {
    int a = 0; 
    int b = 0; 

    while (1) {
        foo(&a); 

        if (a > 5) {
            b = 1;
        }
    }

    return 0;
}
