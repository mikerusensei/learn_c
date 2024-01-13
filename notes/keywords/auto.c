// Using auto keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>

int printValue(){
    auto int a = 10;
    printf("%d\n", a);
};

int main(void){
    printValue();
    return 0;
}

// Output
// 10