#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);

int main() {
  int array[] = {2, 5,8};
  int n = 3;
  bool result = is_ascending(array, n);
  cout << "The array is in ascending order: " << result << endl;
  return 0;
}