#pragma once
#include <string>
#include <vector>
#include "Person.h"

class Course {
private:
   std::string name;
   int id;
   std::vector<Person*> persons;

public:
   Course(const std::string& name, int id);
   void enrollStudent(Person& person);
};