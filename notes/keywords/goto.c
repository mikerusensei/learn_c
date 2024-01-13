// Using goto keyword in C
// January 13, 2023
// by: mikerusensei

#include <stdio.h>

// Function to print numbers
// from 1 to 10
void printNumbers(){
    int n = 1;

    label:
        printf("%d ", n);
        n++;
        if (n <= 10) goto label;
}

int main(void){
    printNumbers();
    return 0;
}

// Output
// 1 2 3 4 5 6 7 8 9 10s