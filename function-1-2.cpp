#include "Person.h"

PersonList createPersonList(int n) {
  PersonList pl;
  pl.people = new Person[n];
  pl.numPeople = n;

  for (int i = 0; i < n; ++i) {
    pl.people[i].name = "Jane Doe";
    pl.people[i].age = 1;
  }

  return pl;
}
