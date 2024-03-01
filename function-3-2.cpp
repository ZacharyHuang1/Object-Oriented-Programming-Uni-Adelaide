#include <algorithm>

int median_array(int array[], int n) {
  if (n < 1 || n % 2 == 0) {
    // Return 0 if n is less than 1 or even
    return 0;
  }
  std::sort(array, array + n);
  int mid = n / 2;
  return array[mid];
}