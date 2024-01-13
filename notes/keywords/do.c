// Using do keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>

int main(void){
    int i = 1;
    do{
        printf("%d ", i);
        i++;
    } while (i <= 5);
    return 0;
}

// Output
// 1 2 3 4 5