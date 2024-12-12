#include <iostream>
using namespace std;

bool isPythago(int a, int b, int c) { return (a * a + b * b == c * c); }

void findTriplets(int i, int *arr, int n) {
  if (i >= n)
    return;
  for (int j = 0; j < n; j++) {
    for (int k = 0; k < n; k++) {
      if (isPythago(arr[i], arr[j], arr[k])) {
        cout << '(' << arr[i] << ',' << arr[j] << ',' << arr[k] << ')';
      }
    }
  }
  findTriplets(i + 1, arr, n);
}

int main() {
  int arr[] = {10, 15, 20, 3, 4, 5, 6, 8 };
  int n = sizeof(arr) / sizeof(arr[0]);
  findTriplets(0, arr, n);
  return 0;
}
