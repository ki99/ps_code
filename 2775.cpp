#include <iostream>
using namespace std;

int getNum(int k, int n) {
  if (k == 0)
    return n;
  if (n == 1)
    return 1;
  return getNum(k - 1, n) + getNum(k, n - 1);
}

int main() {
  int T, k, n;
  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> k >> n;
    cout << getNum(k, n) << "\n";
  }
}
