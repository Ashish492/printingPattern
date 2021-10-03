#include <iostream>
using namespace std;
int main() {
  int row = 5;
  cout << "ashish" << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < (row - (i + 1)); j++) {
      cout << "  ";
    }
    for (int num = i; num >= 0; num--) {
      cout << row - num << " ";
    }

    for (int num = 0; num < (i); num++) {
      cout << row - num - 1 << " ";
    }
    for (int j = 0; j < (row - (i + 1)); j++) {
      cout << "  ";
    }
    cout << endl;
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "  ";
    }
    for (int num = row - i - 1; num > 0; num--) {
      cout << row - num + 1 << " ";
    }

    for (int num = 0; num < row - i - 2; num++) {
      cout << row - num - 1 << " ";
    }
    for (int j = 0; j < (row - (i + 1)); j++) {
      cout << "  ";
    }
    cout << endl;
  }

  return 0;
}