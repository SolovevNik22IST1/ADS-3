// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
  int right = size;
  int mid;
  int new_l, new_r;
  int res;
  while (left < right) {
    mid = (left + right) / 2;
    if (value > arr[mid]) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }
  new_l = left;
  left = 0;
  right = size;
  while (left < right) {
    mid = (left + right) / 2;
    if (value < arr[mid]) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }
  new_r = right;
  res = new_r - new_l;
  return res;
}
