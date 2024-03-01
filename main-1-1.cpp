#include <iostream>
using namespace std;

extern int array_sum(int array[], int n);

int main() {
  int array[] = {1, 2, 3, 7, 8};
  int n = 5;
  int result = array_sum(array, n);
  cout << "The sum of the array is " << result << endl;
  return 0;
}