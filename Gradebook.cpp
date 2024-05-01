#include "Gradebook.h"

Gradebook::Gradebook(Course& course)
   : course(course) {}

void Gradebook::addGrade(int studentID, const std::string& assignment, int score) {
   grades.emplace_back(studentID, assignment, score);
}