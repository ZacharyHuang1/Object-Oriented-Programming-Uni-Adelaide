#include <iostream>

void count_digits(int array[4][4]) {
  int counts[10] = {0};
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int element = array[i][j];
      if (element >= 0 && element <= 9) {
        counts[element]++;
      }
    }
  }
  for (int i = 0; i < 10; i++) {
    std::cout << i << ":" << counts[i] << ";";
  }
  std::cout << std::endl;
}
