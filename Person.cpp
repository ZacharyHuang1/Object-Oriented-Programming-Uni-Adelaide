#include "Person.h"

Person::Person(const std::string& name, int id)
   : name(name), id(id) {}

Person::~Person() {}

std::string Person::getName() const {
   return name;
}

int Person::getID() const {
   return id;
}