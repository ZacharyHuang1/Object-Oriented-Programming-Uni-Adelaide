#pragma once
#include "Person.h"

class Student : public Person {
public:
   Student(const std::string& name, int id);
};