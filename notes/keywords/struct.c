// Using struct keyword in C
// January 13, 2024
// by: mikerusensei

#include <stdio.h>
#include <string.h>

struct Person{
    char firstname[20];
    char middlename[20];
    char lastname[20];
};

int main(void){
    struct Person person1;

    strcpy(person1.firstname, "Michael Alexis");
    strcpy(person1.middlename, "Garcia");
    strcpy(person1.lastname, "Ponce");

    printf("Hi your full name is %s %s %s", person1.firstname, person1.middlename, person1.lastname);
    return 0;
}