#include <iostream>
using namespace std;

extern int num_count(int array[], int n, int number);

int main() {
  int array[] = {1, 2, 3, 4, 1};
  int n = 5;
  int number = 3;
  int result = num_count(array, n, number);
  cout << "The number of elements in the array that are equal to " << number << " is " << result << endl;
  return 0;
}