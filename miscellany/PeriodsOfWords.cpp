/*
  user: zebnel
  created: 2025-08-06 23:31:26
  problem: https://szkopul.edu.pl/problemset/problem/k9UKIj11V6iPRc3LaiYQYHyi/site/?key=statement
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
    while (j > 0 && s[i] != s[j]) {
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

  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> pi = kmp(s);
  int64_t ans = 0;
  for (int i = 1; i < n; i++) {
    if (pi[i] == 0) {
      continue;
    }
    if (pi[pi[i] - 1] != 0) {
      pi[i] = pi[pi[i] - 1];
    }
    ans += (i + 1) - pi[i];
  }
  cout << ans << '\n';

  return 0;
}

