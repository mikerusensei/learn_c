// Using static keyword in C
// January 13, 2024
// by: mikerusensei

/*
//[EXAMPLE 1]
#include <stdio.h>

void function(){
    static int count = 0;
    count++;
    printf("Call %d\n", count);
};

int main(void){
    function();
    function();
    function();
    return 0;
}

// Output
// Call 1
// Call 2
// Call 3
*/

/*
//[EXAMPLE 2]
#include <stdio.h>

static int globalVar = 5;

int main(void){
    printf("%d", globalVar);
    return 0;
}

// Output
// 5
*/

/*
//[EXAMPLE 3]
#include <stdio.h>

static void staticfunction(){
    printf("This is a static function\n");
};

int main(void){
    staticfunction();
    return 0;
}

// Output
// This is a static function
*/


//[EXAMPLE 4]
#include <stdio.h>

void examplefunction(){
    int localvar = 10;
    static int staticvar = 5;

    localvar++;
    staticvar++;

    printf("Local Variable: %d, Static Variable: %d\n", localvar, staticvar);
};

int main(void){
    examplefunction();
    examplefunction();

    return 0;
}

// Output
// Local Variable: 11, Static Variable: 6
// Local Variable: 11, Static Variable: 7