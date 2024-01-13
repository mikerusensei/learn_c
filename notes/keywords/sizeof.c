// Using sizeof keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>

int main(void){
    int x = 10;
    char greet[] = "Hello World!";
    printf("%d\n", sizeof(greet));
    printf("%d", sizeof(x));
    return 0;
}

// Output
// 13
// 4

/*

[NOTE]
The sizeof keyword measures the size of the element in bytes.

*/