/*
  user: zebnel
  created: 2025-09-25 10:33:53
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

void dp(map<string, ll>& mp, string s) {
  if (s.empty()) {
    return;
  }
  if (mp.count(s)) {
    return;
  }
  mp[s]++;
  char c = s.back();
  s.pop_back();
  dp(mp, s);
  if (s.empty()) {
    return;
  }
  s.pop_back();
  s.push_back(c);
  dp(mp, s);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, ll> mp;
    dp(mp, s);
    cout << mp.size() << '\n';
  }

  return 0;
}
