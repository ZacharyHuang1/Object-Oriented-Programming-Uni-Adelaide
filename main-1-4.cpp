#include <iostream>
using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
  int array[] = {1, 2, 3};
  int secondarray[] = {4,5,6};
  int n = 3;
  int result = sum_two_arrays(array, secondarray, n);
  cout << "The sum of the two arrays is " << result << endl;
  return 0;
}