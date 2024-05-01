#include <string>
#include "University.h"
#include "Course.h"
#include "Student.h"
#include "Gradebook.h"

int main() {
   // 1) Create a university
   University u("My University", "City");

   // 2) Add a course to this university
   Course c("Introduction to Programming", 101);
   u.addCourse(c);

   // 3) Add a student to this course
   Student s("John Doe", 12345);
   c.enrollStudent(s);

   // 4) Add a grade for this student for some of the assignments
   Gradebook gb(c);
   gb.addGrade(s.getID(), "Assignment 1", 85);
   gb.addGrade(s.getID(), "Assignment 2", 92);

   return 0;
}