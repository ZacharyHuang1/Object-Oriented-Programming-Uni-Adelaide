#include <iostream>
using namespace std;

extern double sum_even(double array[], int n);

int main() {
  double array1[] = {1.2, 3.4, 5.6, 7.8, 9.0};
  int size1 = 5;
  cout << "The sum of the even positions in array1 is " << sum_even(array1, size1) << endl;

  double array2[] = {2.3, 4.5, 6.7, 8.9};
  int size2 = 4;
  cout << "The sum of the even positions in array2 is " << sum_even(array2, size2) << endl;

  double array3[] = {1.1, 2.2};
  int size3 = -1;
  cout << "The sum of the even positions in array3 is " << sum_even(array3, size3) << endl;
  return 0;
}