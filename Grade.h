#pragma once
#include <string>

class Grade {
private:
   int studentID;
   std::string assignment;
   int score;

public:
   Grade(int studentID, const std::string& assignment, int score);
};