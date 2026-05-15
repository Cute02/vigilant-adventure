#ifndef PERSON_H
#define PERSON_H

typedef struct Person {
    char name[50];
    struct Person* mother;
    struct Person* father;
} Person;

Person* createPerson(const char* name);
void setParents(Person* child, Person* mother, Person* father);

#endif