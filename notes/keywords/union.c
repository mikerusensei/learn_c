// Using union keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>
#include <string.h>

union Person{
    char lastname[20];
    char givenname[20];
} person;

int main(void){
    strcpy(person.lastname, "Ponce");
    strcpy(person.givenname, "Michael Alexis");

    printf("Your fullname is %s, %s", person.lastname, person.givenname);
    return 0;
}