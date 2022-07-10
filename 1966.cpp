#include <iostream>
#include <queue>
using namespace std;
int main() {
  int n, N, M, temp, idx, cnt;
  
  cin >> n;
  for (int i = 0; i < n; ++i) {
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    cnt = 0;
    cin >> N >> M;
    for (int j = 0; j < N; ++j) {
      cin >> temp;
      pq.push(temp);
      q.push({j, temp});
    }
    while (!q.empty()) {
      int index = q.front().first;
      int value = q.front().second;
      q.pop();
      if (pq.top() == value) {
        pq.pop();
        ++cnt;
        if (index == M) {
          cout << cnt << "\n";
          break;
        }
      } else
        q.push({index, value});
    }
  }
}
