#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main() {
  int N, tmp, middle = 0, range;
  cin >> N;
  int mean = 0;
  int arr[8001] = {
      0,
  };
  int mostnum = -9999;
  int mostval = 0;
  bool not_first = false;
  
  for (int i = 0; i < N; i++) {
    cin >> tmp;
    v.push_back(tmp);
    mean += tmp;
    arr[tmp + 4000]++;
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < 8001; i++) {
    if (arr[i] == 0) {
      continue;
    }
    if (arr[i] == mostnum) {
      if (not_first) {
        mostval = i - 4000;
        not_first = false;
      }
    }
    if (arr[i] > mostnum) {
      mostnum = arr[i];
      mostval = i - 4000;
      not_first = true;
    }
    
  }
  mean = round((float)mean / N);
  middle = v[v.size() / 2];
  range = v.back() - v.front();
  cout << mean << "\n" << middle << "\n" << mostval << "\n" << range;
}
