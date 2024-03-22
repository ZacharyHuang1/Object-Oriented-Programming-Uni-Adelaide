#include "Person.h"
#include <iostream>

int main() {
  int n = 2;
  PersonList pl = createPersonList(n);

  for (int i = 0; i < pl.numPeople; ++i) {
    std::cout << "Person " << i + 1 << ": "
              << pl.people[i].name << ", " << pl.people[i].age << std::endl;
  }

  delete[] pl.people;

  return 0;
}
