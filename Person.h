#pragma once
#include <string>

class Person {
protected:
   std::string name;
   int id;

public:
   Person(const std::string& name, int id);
   virtual ~Person() = 0;
   std::string getName() const;
   int getID() const;
};