/*
  user: zebnel
  created: 2025-08-06 22:59:44
*/

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const double EPS = 1e-9;

vector<int> kmp(string& s) {
  int n = s.size();
  vector<int> pi(n);
  int j;
  for (int i = 1; i < n; i++) {
    j = pi[i - 1];
    while (j > 0 && s[j] != s[i]) {
      j = pi[j - 1];
    }
    if (s[i] == s[j]) {
      j++;
    }
    pi[i] = j;
  }
  return pi;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string t, p;
  cin >> t >> p;
  string s = "";
  s.append(p);
  s.push_back('#');
  s.append(t);
  vector<int> pi = kmp(s);
  int ans = 0;
  for (int i = 0; i < int(pi.size()); i++) {
    if (pi[i] == int(p.size())) {
      ans++;
    }
  }
  cout << ans << '\n';

  return 0;
}
