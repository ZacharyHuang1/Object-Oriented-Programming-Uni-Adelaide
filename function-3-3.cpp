double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  double sum=0;
  int count=0;

  for (int i = 0; i < n; i++){
    if (array[i] == -1){
      continue;
    }
    int x = array[i];
    int w = 1;
    for (int j=i+1;j<n;j++){
      if (array[j]==x) {
        w++;
        array[j]=-1;
      }
    }
    sum += x*w;
    count += w;
  }
  return sum/count;
}