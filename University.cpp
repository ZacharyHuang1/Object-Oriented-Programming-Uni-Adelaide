#include "University.h"

University::University(const std::string& name, const std::string& location)
   : name(name), location(location) {}

void University::addCourse(const Course& course) {
   courses.push_back(course);
}