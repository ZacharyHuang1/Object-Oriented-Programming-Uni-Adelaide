#pragma once
#include "Person.h"

class Instructor : public Person {
public:
   Instructor(const std::string& name, int id);
};