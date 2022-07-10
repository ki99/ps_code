#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int T, N, tmp, ret;
const int MAX = 101;
int matrix[MAX][MAX];
int matrix_after_year[MAX][MAX];
pair<int, int> tmp_pair;
bool visited[MAX][MAX] = {
    false,
};
queue<pair<int, int>> q;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
void dfs(int x, int y) {
  visited[x][y] = true;
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (ny < 0 || nx < 0 || nx >= N || ny >= N) {
      continue;
    }
    if (matrix_after_year[nx][ny] && !visited[nx][ny]) {
      visited[nx][ny] = true;
      dfs(nx, ny);
    }
  }
}

int main() {
  cin >> T;
  for (int test_case = 0; test_case < T; test_case++) {
    cin >> N;
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        cin >> matrix[j][k];
      }
    }
    int max_v = 0;
    for (int x = 0; x < 100; x++) {
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
          if (matrix[i][j] - x > 0) {
            matrix_after_year[i][j] = 1;
          } else
            matrix_after_year[i][j] = 0;
        }
      }
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
          if (matrix_after_year[i][j] && !visited[i][j]) {
            dfs(i, j);
            ret++;
          }
        }
      }
      if (ret == 0)
        break;
      else
        max_v = max(max_v, ret);
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
          matrix_after_year[i][j] = 0;
          visited[i][j] = 0;
          ret = 0;
        }
      }
    }
    cout << "#" << test_case + 1 << " " << max_v << "\n";
  }
  return 0;
}
