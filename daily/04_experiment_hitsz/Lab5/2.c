#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person_
{
    char *name;
    int age;
};

void print_struct(struct person_ *person)
{
    printf("addr=%p,addr_name=%p,addr_age=%p\t\tname:%s\t\tage:%d\n", person, person->name, &person->age, person->name, person->age);
}

int main()
{
    printf("value assign\n\n");
    printf("before value assign\n");
    struct person_ person1 = {"A", 1};
    struct person_ person2 = {"B", 2};
    print_struct(&person1);
    print_struct(&person2);
    printf("after value assign\n");
    // Ç³¿½±´
    person1 = person2;
    print_struct(&person1);
    print_struct(&person2);
    // Éî¿½±´
    person1.name = malloc(strlen(person2.name)+1);
    strcpy(person1.name, person2.name);
    person1.age = person2.age;
    print_struct(&person1);
    print_struct(&person2);
    return 0;
}
