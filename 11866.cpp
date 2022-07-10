#include <iostream>
#include <queue>
using namespace std;
int main() {
  int N, K, temp;
  cin >> N >> K;
  queue<int> q;
  queue<int> ret;
  for (int i = 1; i <= N; i++) {
    q.push(i);
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < K - 1; j++) {
      temp = q.front();
      q.pop();
      q.push(temp);
    }
    temp = q.front();
    q.pop();
    ret.push(temp);
  }
  cout << "<";
  for (int i = 0; i < N - 1; i++) {
    cout << ret.front() << ", ";
    ret.pop();
  }
  cout << ret.front() << ">";
  return 0;
}
