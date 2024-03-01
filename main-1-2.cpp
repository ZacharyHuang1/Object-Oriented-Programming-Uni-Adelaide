#include <iostream>
using namespace std;

extern double array_mean(int array[], int n);

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int n = 5;
  double result = array_mean(array, n);
  cout << "The average of the array is " << result << endl;
  return 0;
}