#pragma once
#include <vector>
#include "Course.h"
#include "Grade.h"

class Gradebook {
private:
   Course& course;
   std::vector<Grade> grades;

public:
   Gradebook(Course& course);
   void addGrade(int studentID, const std::string& assignment, int score);
};