#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);

int main() {
  int array[] = {1, 2, 3, 2, 1};
  int n = 5;
  bool result = is_fanarray(array, n);
  cout << "The array is a fan array: " << result << endl;
  return 0;
}