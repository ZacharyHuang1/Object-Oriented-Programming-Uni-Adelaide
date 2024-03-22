#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newPl;
    newPl.numPeople = pl.numPeople;
    newPl.people = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; i++) {
        newPl.people[i] = pl.people[i];
    }
    return newPl;
}