#include <stdio.h>
#include "person.h"
#include "tree.h"

int main() {
    Person* neha = createPerson("Neha");

    Person* sneha = createPerson("Sneha");
    Person* tojo  = createPerson("Tojo");
    setParents(neha, sneha, tojo);

    // Tojo's parents
    Person* daisy     = createPerson("Daisy");
    Person* pj_thomas = createPerson("P.J Thomas");
    setParents(tojo, daisy, pj_thomas);

    // Daisy's parents 
    Person* chinnama = createPerson("Chinnama");
    Person* thomas   = createPerson("Thomas"); // Daisy's father
    setParents(daisy, chinnama, thomas);

    // P.J Thomas parents 
    Person* joseph = createPerson("Joseph");
    Person* annama = createPerson("Annama");
    setParents(pj_thomas, annama, joseph);

    // Sneha's side
    Person* annie     = createPerson("Annie");
    Person* sebastian = createPerson("Sebastian");
    setParents(sneha, annie, sebastian);

    Person* pauly  = createPerson("Pauly");
    Person* thoman = createPerson("Thoman");
    setParents(annie, pauly, thoman);

    Person* thresia = createPerson("Thresia");
    Person* chandi  = createPerson("Chandi");
    setParents(sebastian, thresia, chandi);

    printf("\n🌳 HORIZONTAL FAMILY TREE\n");
    printHorizontal(neha, 0);
    printf("\n");

    return 0;
}