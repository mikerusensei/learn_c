// Using const keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>

int main(void){
    const int a = 11;
    a = a + 2;
    printf("%d", a);
    return 0;
}

// Output
// error: assignment of read-only variable 'a'
//  a = a + 2;
//    ^