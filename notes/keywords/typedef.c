// Using typedef keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>
#include <string.h>

typedef int Age;

typedef struct Person{
    char lastname[20];
    char givenname[20];
    char middlename[20];
    Age age;
} Person;

int main(void){
    Age myage = 20;

    Person person1;
    strcpy(person1.lastname, "Ponce");
    strcpy(person1.givenname, "Michael Alexis");
    strcpy(person1.middlename, "Garcia");

    printf("Name: %s, %s %s\n", person1.lastname, person1.givenname, person1.middlename);
    printf("%d", myage);

    return 0;
}