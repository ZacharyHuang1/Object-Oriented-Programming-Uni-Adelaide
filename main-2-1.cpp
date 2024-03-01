#include <iostream>
using namespace std;

extern int min_element(int array[], int n);

int main() {
  int array[] = {2,5,8};
  int n = 3;
  int result = min_element(array, n);
  cout << "The minimum element in the array is " << result << endl;
  return 0;
}