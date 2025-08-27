#include <iostream>
using namespace std;

int main() {
  int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i < 10; i++) {
    cout << A[i] << B[i] << flush;
    cout << "*" << B[i] << A[i] << flush;
    cout << " = " << (A[i], B[i]) * (B[i], A[i]) << endl;
    // Wrong Values
  }

  return 0;
}

// 1. Get AB*BA values.