// Using break and continue keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>

int main(void){
    for (int i = 1; i < 10; i++){
        if (i == 2){
            continue;
        } else if (i == 6){
            break;
        }
        printf("%d ", i);
    }
    return 0;
}

// Output
// 1 3 4 5