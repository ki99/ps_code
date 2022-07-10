#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
  int N, temp;
  stack<int> s;
  cin >> N;
  string str;
  for (int i = 0; i < N; i++) {
    cin >> str;
    if (str == "push") {
      cin >> temp;
      s.push(temp);
    } else if (str == "top") {
      if (s.empty()) {
        cout << "-1\n";
        continue;
      }
      cout << s.top() << "\n";
    } else if (str == "size") {
      cout << s.size() << "\n";
    } else if (str == "empty") {
      cout << s.empty() << "\n";
    } else {
      if (s.empty()) {
        cout << "-1\n";
        continue;
      }
      temp = s.top();
      cout << temp << "\n";
      s.pop();
    }
  }
  return 0;
}
