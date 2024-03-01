#include <iostream>
using namespace std;

extern int count_evens(int number);

int main() {
  int number = 6;
  int result = count_evens(number);
  cout << "The number of even numbers between 1 and " << number << " is " << result << endl;
  return 0;
}