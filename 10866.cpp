#include <deque>
#include <iostream>
#include <string>
using namespace std;
int main() {
  deque<int> q;
  int N, temp;
  string str;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> str;
    if (str == "push_front") {
      cin >> temp;
      q.push_front(temp);
    }
    if (str == "push_back") {
      cin >> temp;
      q.push_back(temp);
    }
    if (str == "pop_front") {
      if (q.empty()) {
        cout << "-1\n";
        continue;
      }
      temp = q.front();
      cout << temp << "\n";
      q.pop_front();
    }
    if (str == "pop_back") {
      if (q.empty()) {
        cout << "-1\n";
        continue;
      }
      temp = q.back();
      cout << temp << "\n";
      q.pop_back();
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
