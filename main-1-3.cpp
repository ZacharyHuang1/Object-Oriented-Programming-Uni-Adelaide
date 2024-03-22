#include "Person.h"
#include <iostream>

int main() {
    int n = 3;
    PersonList pl = createPersonList(n);

    PersonList newPl = deepCopyPersonList(pl);

    for (int i = 0; i < newPl.numPeople; i++) {
        std::cout << "Name: " << newPl.people[i].name << ", Age: " << newPl.people[i].age << std::endl;
    }

    delete[] pl.people;
    delete[] newPl.people;
    return 0;
}