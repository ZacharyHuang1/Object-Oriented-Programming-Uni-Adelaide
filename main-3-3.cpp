#include <iostream>
extern double weighted_average(int array[], int n);

int main() {
  int array1[] = {1, 2, 1, 4, 1, 3};
  int array2[] = {5, 5, 5, 5, 5};

  int n1 = sizeof(array1) / sizeof(array1[0]);
  int n2 = sizeof(array2) / sizeof(array2[0]);

  std::cout << "The weighted average of array1 is " << weighted_average(array1, n1) << std::endl;
  std::cout << "The weighted average of array2 is " << weighted_average(array2, n2) << std::endl;

  return 0;
}