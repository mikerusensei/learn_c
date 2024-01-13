// Using enum keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>

// enum declaration
enum week{Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main(void){
    // Object of the enum (week), called day
    enum week day;
    day = Wed;
    printf("%d", day);
    return 0;
}

// Output
// 2

/*

[WHY]

The week we declare in enum was an object or a list. And the day we call
was Wed. The index number of Wed in week was 2 because we always starts at 0.

*/