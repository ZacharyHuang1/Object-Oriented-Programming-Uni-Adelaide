bool is_fanarray(int array[], int n) {
  if (n < 1) {
    return false;
  }
  for (int i = 0, j = n - 1; i < j; i++, j--) {
    if (array[i] != array[j]) {
      return false;
    }
   if (i < n / 2 && array[i] > array[i + 1]) {
      return false;
    }
  }
  return true;
}