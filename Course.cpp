#include "Course.h"

Course::Course(const std::string& name, int id)
   : name(name), id(id) {}

void Course::enrollStudent(Person& person) {
   persons.push_back(&person);
}