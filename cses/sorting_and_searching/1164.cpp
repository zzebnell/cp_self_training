/*
  user: zebnel
  created: 2025-09-30 15:24:58
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

struct info {
  int f;
  int s;
  int idx;
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<info> v(n);
  priority_queue<pair<int, int>> pq;
  for (int i = 0; i < n; i++) {
    cin >> v[i].f >> v[i].s;
    v[i].idx = i;
  }
  sort(v.begin(), v.end(), [&](const info& i1, const info& i2) {
      if (i1.f == i2.f) {
        return i1.s < i2.s;
      }
      return i1.f < i2.f;
      });
  int rooms = 0;
  vector<int> ans(n);
  int curr = 0;
  for (info& inf : v) {
    int s = inf.s;
    int f = inf.f;
    int idx = inf.idx;
    if (!rooms) {
      rooms++;
      pq.push({-s, rooms});
      ans[idx] = rooms;
    } else {
      pair<int, int> tp = pq.top();
      tp.first = -tp.first;
      if (tp.first < f) {
        pq.pop();
        pq.push({-s, tp.second});
        ans[idx] = tp.second;
      } else {
        pq.push({-s, ++rooms});
        ans[idx] = rooms;
      }
    }
    curr++;
  }
  cout << rooms << '\n';
  for (int x : ans) {
    cout << x << ' ';
  }
  cout << '\n';

  return 0;
}

