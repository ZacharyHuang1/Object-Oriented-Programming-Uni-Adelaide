int array_min(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    int min_val = integers[0];
    for (int i = 1; i < length; i++) {
        if (integers[i] < min_val) {
            min_val = integers[i];
        }
    }
    return min_val;
}

int array_max(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    int max_val = integers[0];
    for (int i = 1; i < length; i++) {
        if (integers[i] > max_val) {
            max_val = integers[i];
        }
    }
    return max_val;
}

int sum_min_max(int integers[], int length) {
    int min_val = array_min(integers, length);
    int max_val = array_max(integers, length);
    if (min_val == -1 || max_val == -1) {
        return -1;
    }
    return min_val + max_val;
}
