// Using return keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>

int difference(int x, int y){
    int diff;
    diff = x - y;
    return diff;
};

int main(void){
    int var1 = 20;
    int var2 = 10;
    int result;
    result = difference(var1, var2);
    printf("Difference: %d", result);
    return 0;
}

// Output
// Difference: 10