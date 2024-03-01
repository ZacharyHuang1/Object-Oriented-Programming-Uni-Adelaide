#include <iostream>
using namespace std;

extern int median_array(int array[], int n);

int main() {
  int array[] = {3, 5, 2, 1, 4};
  int n = 5;
  int result = median_array(array, n);
  cout << "The median of the array is " << result << endl;
  return 0;
}