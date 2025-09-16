/*
  user: zebnel
  created: 2025-09-15 19:47:21
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s, r;
    cin >> s >> r;
    int j = 0;
    string sim = "";
    for (int i = 0; i < n; i++) {
      sim.push_back(s[i]);
      while (int(sim.size()) >= 2 && sim[int(sim.size()) - 1] != sim[int(sim.size()) - 2]) {
        sim.pop_back();
        sim.pop_back();
        sim.push_back(r[j]);
        j++;
      }
    }
    cout << (j == (n - 1) ? "YES" : "NO") << '\n';
  }

  return 0;
}

