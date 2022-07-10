#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {
  queue<int> q;
  int N, temp;
  string str;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> str;
    if (str == "push") {
      cin >> temp;
      q.push(temp);
    }
    if (str == "pop") {
      if (q.empty()) {
        cout << "-1\n";
        continue;
      }
      temp = q.front();
      cout << temp << "\n";
      q.pop();
    }
    if (str == "size") {
      cout << q.size() << "\n";
    }
    if (str == "empty") {
      cout << q.empty() << "\n";
    }
    if (str == "front") {
      if (q.empty()) {
        cout << "-1\n";
        continue;
      }
      cout << q.front() << "\n";
    }
    if (str == "back") {
      if (q.empty()) {
        cout << "-1\n";
        continue;
      }
      cout << q.back() << "\n";
    }
  }
  return 0;
}
