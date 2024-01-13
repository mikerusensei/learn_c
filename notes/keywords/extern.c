// Using extern keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>

extern int a;

int main(void){
    printf("%d", a);
    return 0;
}

/*

[NOTE]
It serves as a global variable in the whole file

*/