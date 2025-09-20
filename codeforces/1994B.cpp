/*
  user: zebnel
  created: 2025-09-20 16:30:04
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
    string s, t;
    cin >> s >> t;
    if (s[0] == '1' || s == t) {
      cout << "YES" << '\n';
      continue;
    }
    int j = 0;
    while (j < n && (s[j] == t[j]) && s[j] == '0') {
      j++;
    }
    cout << (s[j] == '1' ? "YES" : "NO") << '\n';
  }

  return 0;
}
