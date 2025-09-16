/*
  user: zebnel
  created: 2025-09-05 09:49:12
*/

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  freopen("bcount.in", "r", stdin);
  freopen("bcount.out", "w", stdout);

  int n, q;
  cin >> n >> q;
  vector<int> id1(n), id2(n), id3(n);
  vector<int> p1(n + 1), p2(n + 1), p3(n + 1);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 1) {
      id1[i] = 1;
    } else if (x == 2) {
      id2[i] = 1;
    } else {
      id3[i] = 1;
    }
  }
  for (int i = 0; i < n; i++) {
    p1[i + 1] = id1[i] + p1[i];
    p2[i + 1] = id2[i] + p2[i];
    p3[i + 1] = id3[i] + p3[i];
  }
  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    cout << (p1[b] - p1[a]) << ' ' << (p2[b] - p2[a]) << ' ' << (p3[b] - p3[a]) << '\n';
  }

  return 0;
}

