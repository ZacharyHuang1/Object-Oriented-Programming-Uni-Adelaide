#include <iostream>
using namespace std;

extern bool is_descending(int array[], int n);

int main() {
  int array[] = {5, 2, 8};
  int n = 3;
  bool result = is_descending(array, n);
  cout << "The array is in descending order: " << result << endl;
  return 0;
}