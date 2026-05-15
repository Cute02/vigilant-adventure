#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

Person* createPerson(const char* name) {
    Person* p = (Person*)malloc(sizeof(Person));

    strcpy(p->name, name);
    p->mother = NULL;
    p->father = NULL;

    return p;
}

void setParents(Person* child, Person* mother, Person* father) {
    child->mother = mother;
    child->father = father;
}